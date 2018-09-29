/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package soulmachinetask;

import java.util.Scanner;
import javafx.application.Application;  
import javafx.scene.Group;  
import javafx.scene.Scene;  
import javafx.scene.paint.Color;  
import javafx.scene.shape.Line;  
import javafx.stage.Stage;  


public class SoulMachineTask extend Application
{ 
    public void start(Stage primaryStage) throws Exception
    { 
        Scanner sc=new Scanner(system.in);
        
        int const1,const2,const3,power1;
        
        System.out.println("Enter Constants::");
        const1=sc.nextInt();
        const2=sc.nextInt();
        const3=sc.nextInt();
        System.out.println("Enter Power::");
        power1=sc.nextInt();
        
        int x1=1,x2=2;
        int y1,y2;
        
        y1=(const3-(const1*(x1^power1)))/const2;
	y2=(const3-(const1*(x2^power1)))/const2;
        
        Line line = new Line(); //instantiating Line class   
        line.setStartX(x1); //setting starting X point of Line  
        line.setStartY(y1); //setting starting Y point of Line   
        line.setEndX(x2); //setting ending X point of Line   
        line.setEndY(y2); //setting ending Y point of Line   
        Group root = new Group(); //Creating a Group  
        root.getChildren().add(line); //adding the class object //to the group  
        Scene scene = new Scene(root,300,300);  
        primaryStage.setScene(scene);  
        primaryStage.setTitle("Graph Displayed");  
        primaryStage.show();  
          
    }  
    
    
    public static void main(String[] args) 
    {  
        launch(args);  
    }  
}
