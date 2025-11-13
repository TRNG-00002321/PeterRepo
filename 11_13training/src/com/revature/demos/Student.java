package com.revature.demos;

public class Student {
    String name;
    static int countOfStudents=0;

    public Student(String newname){
        this.name = newname;
        countOfStudents ++;
    }

    public static void main(String[] args) {
        Student s1 = new Student("Eggbert");
        System.out.println(Student.countOfStudents);
        Student s2 = new Student("Gaben");
        System.out.println(Student.countOfStudents);
    }
}
