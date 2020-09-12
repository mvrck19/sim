public class Basic {
    public static void main(String[] args) {
        Vm newvm = new Vm();
        Task taskOne = new Task();
        taskOne.mips = 1000;
        Task taskTwo = new Task();
        taskTwo.mips = 1000;
        newvm.assaignTask(taskOne);
        newvm.assaignTask(taskTwo);
        newvm.run();
    }   
}
