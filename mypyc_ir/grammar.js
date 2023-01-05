module.exports = grammar({
  name: 'mypyc_ir',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat1($.func_decl),

    stmt: $ => choice(
      $.var_decl,
      $.var_assign,
      $.label_stmt,
      $.return_stmt,
      $.goto_stmt,
      $.branch_stmt,
      $.keep_alive_stmt,
      $.set_mem_stmt,
      $.unreachable_stmt,
      $.func_call,
    ),

    func_decl: $ => seq(
      'def',
      field('name', $.identifier),
      '(',
      optional($.func_decl_args),
      ')',
      ':',
      repeat1($.stmt),
    ),

    func_decl_args: $ => seq(
      $.identifier,
      repeat(seq(',', $.identifier)),
    ),

    var_decl: $ => seq(
      $.identifier,
      repeat(seq(',', $.identifier)),
      '::',
      alias($.eol_type, $.type),
    ),

    var_assign: $ => seq(
      $.identifier,
      '=',
      $.expr,
      optional($.comment),
      optional(seq('::', alias($.eol_type, $.type))),
    ),

    return_stmt: $ => seq('return', $.expr),

    label: $ => /L\d+/,
    label_stmt: $ => seq(
      /L\d+:/,
      optional(alias(/\(.*\)/, $.comment)),
    ),

    keep_alive_stmt: $ => seq(
      'keep_alive',
      $.identifier,
      optional(repeat1(seq(',', $.identifier))),
    ),

    set_mem_stmt: $ => seq(
      'set_mem',
      $.identifier,
      ',',
      $.identifier,
      '::',
      alias($.eol_type, $.type),
    ),

    unreachable_stmt: $ => 'unreachable',

    eol_type: $ => /\S.*/,
    type: $ => seq(
      $.identifier,
      optional(
        seq(
          '[',
          $.type,
          repeat1(seq(',', $.type)),
          ']'
        )
      )
    ),

    expr: $ => choice(
      $.string,
      $.number,
      $.identifier,
      $.type_func_call,
      $.func_call,
      $.object_expr,
      $.tuple_expr,
      $.list_expr,
      $.binary_expr,
      $.unary_expr,
      $.truncate_expr,
      $.load_address_expr,
      $.const_expr,
      $.gep_expr,
      $.extend_expr,
      $.load_mem_expr,
      $.subscript_expr,
      $.borrow_expr,
    ),

    type_func_call: $ => seq(
      choice('box', 'unbox', 'cast'),
      '(',
      $.type,
      ',',
      $.identifier,
      ')'
    ),

    func_call: $ => seq(
      $.identifier,
      '(',
      optional($.expr_list),
      ')'
    ),

    expr_list: $ => seq(
      $.expr,
      repeat(seq(',', $.expr)),
    ),

    string: $ => choice(/b?'[^']*'/, /b?"[^"]*"/),
    number: $ => /\d+(\.\d+)?j?/,
    object_expr: $ => prec.right(seq(alias('object', $.type), $.expr)),
    tuple_expr: $ => seq('(', optional($.expr_list), ')'),
    list_expr: $ => seq('[', optional($.expr_list), ']'),

    binary_expr: $ => prec.left(
      seq($.expr, $.binary_oper, $.expr)
    ),
    binary_oper: $ => choice(
      '+', '-', '*', '/', '<', '<=', '>', '>=', '==', '!=', '%', '^',
      '&', '|', '<<', '>>'
    ),

    unary_expr: $ => prec.right(seq($.unary_oper, $.expr)),
    unary_oper: $ => choice('-'),

    const_expr: $ => choice(
      'None',
      'WORD_SIZE',
      '<error>',
    ),

    truncate_expr: $ => seq(
      'truncate',
      $.expr,
      ':',
      alias($.identifier, $.type),
      'to',
      alias($.identifier, $.type),
    ),

    branch_stmt: $ => seq(
      'if',
      $.expr,
      $.goto_stmt,
      'else',
      $.goto_stmt,
      optional(seq('::', $.type)),
    ),

    gep_expr: $ => seq(
      'get_element_ptr',
      $.identifier,
      choice('ob_item', 'ob_type', 'ob_size'),
      '::',
      alias($.eol_type, $.type),
    ),

    extend_expr: $ => seq(
      'extend',
      $.type,
      $.identifier,
      ':',
      $.type,
      'to',
      $.type,
    ),

    load_mem_expr: $ => seq(
      'load_mem',
      $.identifier,
      '::',
      alias($.eol_type, $.type),
    ),

    subscript_expr: $ => seq($.identifier, '[', $.expr, ']'),

    borrow_expr: $ => prec.right(seq('borrow', $.expr)),

    goto_stmt: $ => seq('goto', $.label),

    load_address_expr: $ => seq('load_address', $.identifier),

    identifier: _ => /[A-Za-z0-9_.]+/,

    comment: $ => /;.*/,
  }
});
