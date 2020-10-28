/*Write a program in java to create and initialize two variables ‘height’ and ‘weight’
and compute the body mass index from it*/
package assignment1;
import java.util.Scanner;
public class BMI {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("enter the height(in cm) and weight(in kg):");
		float height = sc.nextFloat();
		float weight = sc.nextFloat();
		float h = height / 100;
		System.out.println("entered height:" + height +", entered weight:" + weight);
		float BodyMassIndex = weight / (h*h);
		System.out.println("The Body Mass Index is:"+ BodyMassIndex);
		
		

	}

}
