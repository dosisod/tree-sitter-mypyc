module.exports = grammar({
  name: 'mypyc_test_cases',

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(
      optional(alias($._opening_label, $.label)),
      repeat1(
        choice($.label, $.comment)
      ),
    ),

    case_label: $ => 'case',
    file_label: $ => 'file',
    out_label: $ => /out[0-9]?/,
    rechecked_label: $ => /rechecked[0-9]?/,
    typing_label: $ => 'typing',
    delete_label: $ => 'delete',
    ir_label: $ => 'ir',

    label_name: $ => choice(
      $.case_label,
      $.file_label,
      $.out_label,
      $.rechecked_label,
      $.typing_label,
      $.delete_label,
      $.ir_label,
    ),

    _opening_label: $ => seq(
      '[',
      $.label_name,
      repeat(/[^\]]/),
      ']',
      optional(field('lines', $.line))
    ),

    label: $ => seq(
      /\r?\n\[/,
      $.label_name,
      repeat(/[^\]]/),
      ']',
      optional(field('lines', $.line))
    ),

    line: $ => prec.right(repeat1(/./)),

    identifier: _ => /[A-Za-z](\.?[A-Za-z0-9_])*/,

    comment: $ => /--.*/,
  }
});
