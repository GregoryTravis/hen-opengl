(fun (cons a b) (Cons a b))
(fun (car (Cons a b)) a)
(fun (cdr (Cons a b)) b)
(fun (pair? (Cons a b)) True)
(fun (pair? x) False)
(fun (id x) x)