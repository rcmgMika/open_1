
public class Data_Structure{
	public static void main(String[] args){
		/*
			Data structure
				a data structure is a location where you can store and organize data. They're very similar to boxes wherein
				you can store objects in there and organize them.
			Algorithm 
				an algorithm is a step-by-step process to solve a problem.
		*/
		/*
			Data Structure

				Stack 
					a stack is a LIFO data structure, last-in first-out, wherein you can store objects and make a vertical
					tower. You can input objects in it by "push" and remove objects by "pop"

					we have five functions:
						push() - put/input
						pop() - remove | also this returns the object, so you can have a placeholder for that
						empty() - this checks if the stack is empty. It returns true if empty, and vice-versa
						search(value) - to search for specific objects. This return its location, and if not found returns -1
						peek() - to see the last object
						add(index, value) - just like the push but with specific index location to be added
						remove(index/object) - removes a specific stack element by having it's unique index location
						capacity() - checks the capacity of the stack 
						clear() - clears the whole stack
				library - import java.util.Stack
				Object initialization (just like in scanner)
					syntax:
						Stack<reference_type> name = new Stack<reference_type>();

				Also, you can have a problem wherein if you put too much objects in the stack, you may run out of memory
				Uses of stacks:
					actually, you can use stacks in a lot of cases. For example in back and forward in browsers or in Word, you
					can redo and undo and so on. This is because of the concept of LIFO and push/pop.
					1. Undo/redo
					2. Browser history
					3. Moving through algorithms or list
		------------------------------------------------
		Sample program: 
			Stack<String> object = new Stack<String>();

			System.out.println(object.empty());
			System.out.println(object);
				object.push("Dell");
				object.push("Lenovo");
				object.push("AMD");
				object.push("Intel");
				String item = object.pop();
				System.out.println(item);
				System.out.println(object.peek());
				System.out.println(object.search("Intel"));
				System.out.println("\n"+object);
		*/
		
	}
}