[
  "def"
  "goto"
  "return"
  "truncate"
  "to"
  "if"
  "else"
  "load_address"
  "keep_alive"
  "box"
  "unbox"
  "cast"
  "get_element_ptr"
  "ob_item"
  "ob_size"
  "ob_type"
  "load_mem"
  "set_mem"
  "extend"
  "borrow"
] @keyword

(unreachable_stmt) @keyword

(identifier) @variable

(func_decl name: (identifier) @function)

(func_decl (func_decl_args (identifier) @parameter))

(func_call (identifier) @function.call)
(type_func_call (identifier) @function.call)

(type) @type
(type (identifier) @type)

(string) @string

(label_stmt) @label
(label) @label

(const_expr) @constant

(number) @number

(comment) @comment
