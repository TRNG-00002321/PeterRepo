"""

Requirements:

    Store questions and answers in a dictionary or JSON file.
    Ask user questions one by one.
    Keep score and show the result at the end.


"""
import json


def question_prompt(data: dict):
    print(data["Question"])
    ans = input("Enter your answer: ")
    if ans == data["Answer"]:
        return True
    return False





if __name__ == "__main__":

    with open("data.txt", "r") as f:
        lines = f.readlines()
        obj =[]
        for i in lines:
            obj.append(json.loads(i))
        print(lines)

    score = 0
    questions = 0
    for i in obj:
        if(question_prompt(i)):
            score += 1
        questions += 1



    print(f"you scored {score} out of {questions}")