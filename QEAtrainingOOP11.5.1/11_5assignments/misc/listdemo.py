

#two lists
#1 list of 5 string elements
#2nd list having element of the rpevious list containing the character a



def onlya(elements: []):
    containsa = [x for x in elements if "a" in x]
    # for i in elements:
    #     if "a" in i:
    #         containsa.append(i)
    return containsa


arr = ["apple","mango","soursop","dragonfruit","coconut"]
print(onlya(arr))