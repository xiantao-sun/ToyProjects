function sorting(array)
  n_size = size(array, 1)
  for i in 1:n_size, j in i+1:n_size
    array[i] > array[j] ? (array[i], array[j]) = (array[j], array[i]) : continue
  end
end
array_size = 100000
array = [i::Int64 for i in array_size:-1:1]

print("it took me this long to sort ", array_size, " intergers:")
@time sorting(array)


#=it took me this long to sort 100000 intergers:
  9.665209 seconds (4.48 k allocations: 217.255 KB)=#
