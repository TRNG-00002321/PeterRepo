import numpy as np


#1 dimensional array
arr = np.array([1,2,3,4,5])
print(arr)
print(type(arr))


arr0 = np.array(42)
arr1 = np.array([1,2,3])
arr2 = np.array([[1,2],[3,4]])
arr3 = np.array([[[1],[2],[3]]])
print(arr0.ndim, arr1.ndim, arr2.ndim, arr3.ndim)
print(arr2[1,1], arr2[1][1], arr2[1][::-1])

arr5 = np.array([[1,2,3,4],[5,6,7,8]], ndmin=5)
print(arr5, arr5.ndim)

#slicing

arrslice = np.array([1,2,3,4,5,6,7])
print(arrslice[1:5])
print(arrslice[4:])
print(arrslice[:4])
print(arrslice[::-2])
print(arrslice[-3:-1])
arrsl2 = np.array([[1,2,3,4,5],[6,7,8,9,0]])
print(arrsl2[::-1, 1:4])

arrres = np.array([1,2,3,4,5,6,7,8,9,0,1,2])
arrres = arrres.reshape(2,3,2)
print(arrres)
arrres = arrres.reshape(-1)
print(arrres)


for x in arrres:
    print(x)

arrj1 = np.array([[1,2,3],[2,3,4]])
arrj2 = np.array([[9,8,7],[8,7,6]])

arrex1 = np.concatenate((arrj1, arrj2))
arrex2 = np.concatenate((arrj1,arrj2), axis=1)
print(arrex1)
print(arrex2)

stex1 = np.array([1,2,3])
stex2 = np.array([4,5,6])
stex3 = np.stack((stex1, stex2))
stex4 = np.stack((stex1, stex2), axis = 1)
print(stex3)
print(stex4)
stexd1 = np.array([[1,2,3],[2,3,4]])
stexd2 = np.array([[8,7,6],[7,6,5]])
stexh = np.hstack((stexd1, stexd2))
print(stexh)


arrsearch1 = np.array([[1,2,3,4,5,6,4],[4,4,5,6,1,2,4]])
print(np.where(arrsearch1 == 4))


arrfold = np.array([1,4,5,6,3,9,10])
#filters only evens
arrfilt1 = arrfold % 2 == 0
#filters these specific indices
arrfilt2 = [True, False, True, True, False, True, False]
arrfn1 = arrfold[arrfilt1]
arrfn2 = arrfold[arrfilt2]
print(arrfn1)
print(arrfn2)