import java.util.ArrayList;

/**
 * Vm
 */
public class Vm {
    // Instead of a boolean isAvailable variable, assignedTasks vector size can be
    // used to delcare if vm is being used
    double pricePerHour = 0.051;
    double mipsCapacity = 1000;
    long numberOfPes = 2;
    ArrayList<Task> assignedTasks;

    Vm(){
        assignedTasks = new ArrayList<Task>();
    }

    void assaignTask(Task task) {
        assignedTasks.add(task);
    }

double run(){
        double executionTime = 0; //For the time being its being initinalised here, that may need to be changed, in order to make it a global variable of running and the for loop making sense
        for (Task task : assignedTasks){
            assignedTasks.remove(0);
            executionTime = executionTime + task.mips / mipsCapacity;
        }
        System.out.println("Seconds: " + executionTime);
        return executionTime;
    }
};