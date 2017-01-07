package generics;

public class Box<T> {

    private T t;          

    public void set(T t) {
        this.t = t;
    }

    public T get() {
        return t;
    }

    public <U extends Number> void inspect(U u){
        System.out.println("T: " + t.getClass().getName());
        System.out.println("U: " + u.getClass().getName());
    }

    public static void main(String[] args) {
        Box<Integer> integerBox = new Box<Integer>();
        integerBox.set(new Integer(10));//类型为T的成员t设为值为10的Integer        
        integerBox.inspect(new Double(3.5));//成员t是T: java.lang.Integer，传进来的参数u是U: java.lang.Double
        //integerBox.inspect("some text"); // 如果传进来String直接连编译都不给过
    }
}