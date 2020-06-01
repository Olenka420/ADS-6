# include  < iostream >
шаблон < typename T>
класс  BST
{
общественности:
    struct  Node
    {
        Значение Т;
        int count;
        Узел * слева;
        Узел * правый;
    };
частный:
    Узел * root;
    Узел * addNode (Узел *, Т);
    void   printTree (Node *);
    int    deepTree (Node *);
    int    searchNode (Node *, T);
    void   delTree (Node *);
    Node * delNode (Node *, int );
общественности:
    BST ();
    ~ BST ();
    пустота  добавить (T);
    void  print ();
    int   глубина ();
    int   search (T);
    void  clear ();
    void  удалить ( int );
};

шаблон < typename T>
BST <T> :: BST (): root ( nullptr ) {}

шаблон < typename T>
BST <T> :: ~ BST ()
{
    if (root)
        delTree (root);
}


шаблон < typename T>
имя типа BST <T> :: Node * BST <T> :: addNode (узел * root, значение T) {
    if (root == nullptr ) {
        root = новый узел;
        корень-> значение = значение;
        root-> count = 1 ;
        root-> left = root-> right = nullptr ;
    }
    иначе  if (root-> value > value) {
        root-> left = addNode (root-> left , value);
    }
    иначе  if (root-> value <value) {
        root-> right = addNode (root-> right , value);
    }
    еще
        root-> count ++;
    вернуть корень;
}

шаблон < typename T>
void BST <T> :: add (значение T) {
    root = addNode (корень, значение);
}


шаблон < typename T>
void BST <T> :: printTree (Node * root) {
    if (root == nullptr )
        возврат ;
    printTree (root-> left );
    for ( int i = 0 ; i <root-> count ; i ++)
        std :: cout << root-> value << "  " ;
    printTree (root-> right );
}

шаблон < typename T>
void BST <T> :: print () {
    printTree (root);
}


шаблон < typename T>
int BST <T> :: deepTree (Node * root) {
    if (root == nullptr )
        вернуть  0 ;
    если (корне-> влево == nullptr && корне-> право == nullptr )
        вернуть  0 ;
    int left = deepTree (root-> left );
    int right = deepTree (root-> right );
    если (влево> вправо)
        возврат влево + 1 ;
    еще
        вернуть право + 1 ;
}

шаблон < typename T>
int BST <T> :: deep () {
    вернуть  глубину дерева (корень);
}

шаблон < typename T>
int BST <T> :: searchNode (узел * корень, значение T)
{
    if (root == nullptr )
        вернуть  0 ;
    иначе  if (root-> value > value)
        вернуть  searchNode (root-> left , value);
    иначе  if (root-> value <value)
        return  searchNode (root-> right , value);
    еще
        вернуть root-> count ;
}

шаблон < typename T>
int BST <T> :: search (значение T)
{
    вернуть  searchNode (корень, значение);
}


шаблон < typename T>
void   BST <T> :: delTree (Node * root)
{
    if (root == nullptr )
        возврат ;
    еще
    {
        delTree (root-> left );
        delTree (root-> right );
        удалить корень;
    }
}

шаблон < typename T>
void BST <T> :: clear ()
{
    if (root)
    {
        delTree (root);
        root = nullptr ;
    }
}


шаблон < typename T>
имя типа BST <T> :: Node * BST <T> :: delNode ( имя типа BST <T> :: Node * root, значение типа int )
{
    Узел * p, * v;
    // случай 0: поддерево пустое
    if (root == nullptr )
        вернуть корень;
    // ищем удачный узел
    иначе  if (значение <root-> значение )
        root-> left = delNode (root-> left , value);
    иначе  если (значение> корень-> значение )
        root-> right = delNode (root-> right , value);
    еще
    {
        // случай 1,2: у узла есть только один потомок или узел - лист
        р = корень;
        if (root-> right == nullptr )
            root = root-> left ;
        иначе  если (root-> left == nullptr )
            root = root-> right ;
        еще
        {
            // случай 3,4: у узла есть 2 потомка
            v = root-> left ; // будем отображать левое поддерево
            //   случай 3. У левого потомка есть правый потомок
            если (v-> правильно )
            {
                // ищем самый большой эл-т в левом поддереве
                в то время как (v-> вправо -> вправо )
                    v = v-> справа ;
                // меняем найденное значение с корнем
                root-> value = v-> right -> value ;
                root-> count = v-> right -> count ;
                p = v-> вправо ; // этот эл-т мы удалим
                v-> right = v-> right -> left ;
            }
            еще  // случай 4. У левого потомка нет правого поддерева (или нет сыновей)
            {
                root-> value = v-> value ;
                root-> count = v-> count ;
                р = v;
                root-> left = root-> left -> left ;
            }
        }
        удалить р;
    }
    вернуть корень;
}

шаблон < typename T>
void BST <T> :: remove ( int value)
{
    if (root)
        root = delNode (корень, значение);
}
