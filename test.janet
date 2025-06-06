# This is a test file for Janet syntax highlighting

# Numbers
(def decimal 42)
(def float 3.14159)
(def sci 1.23e-4)
(def hex 0xFF)
(def octal 0o777)
(def binary 0b1010)

# Strings and buffers
(def simple-string "Hello, Janet!")
(def escaped-string "Line 1\nLine 2\tTabbed")
(def long-string @"
  This is a long string
  that spans multiple lines
  without escape sequences
")
(def buffer @`This is a buffer literal`)

# Keywords and symbols
(def my-keyword :hello)
(def another-keyword :foo/bar)
(def symbol 'my-symbol)

# Booleans and nil
(def yes true)
(def no false)
(def nothing nil)

# Function definition
(defn greet [name]
  (string "Hello, " name "!"))

# Macro definition
(defmacro when-let [bindings & body]
  (def [binding value] bindings)
  ~(if-let [,binding ,value]
     (do ,;body)))

# Control structures
(if (> 10 5)
  (print "10 is greater than 5")
  (print "This won't print"))

(when true
  (print "This will execute"))

(cond
  (< 5 3) "This is false"
  (= 2 2) "This is true"
  :else "Default case")

# Loops
(for i 0 5
  (print i))

(loop [x :in [1 2 3 4 5]
       :when (even? x)]
  (print x))

# Data structures
(def my-array @[1 2 3 4 5])
(def my-tuple '(a b c d e))
(def my-table @{:name "Janet" :version "1.32.1"})
(def my-struct {:x 10 :y 20})

# Try-catch
(try
  (/ 1 0)
  ([err]
   (print "Caught error:" err)))

# Threading macros
(-> 5
    (+ 3)
    (* 2)
    (- 1))

(->> [1 2 3 4 5]
     (map |(* $ 2))
     (filter even?)
     (reduce + 0))

# Fiber example
(def f (fiber/new (fn []
  (yield 1)
  (yield 2)
  (yield 3))))

# Module example
(import json)
(def data (json/encode {:hello "world"}))

# Special characters in symbols
(def +special+ 'symbol-with-dashes)
(def *global* "global variable")
(def ->arrow "arrow function")
(def pred? "predicate function")

# Quoting and unquoting
(def quoted '(+ 1 2))
(def quasi `(list ,@[1 2 3]))

# Comments at end of lines
(def inline 42) # This is an inline comment

# Multi-line function with documentation
(defn fibonacci
  "Calculate the nth Fibonacci number recursively."
  [n]
  (cond
    (= n 0) 0
    (= n 1) 1
    :else (+ (fibonacci (- n 1))
             (fibonacci (- n 2)))))