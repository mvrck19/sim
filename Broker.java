import java.util.ArrayList;

public class Broker {
    ArrayList<Task> tasks;
    ArrayList<Vm> vms;

    void addTask(Task task){
        tasks.add(task);
    }

    void addTasks(ArrayList<Task> t)    {
        tasks.addAll(t);
    }
}
