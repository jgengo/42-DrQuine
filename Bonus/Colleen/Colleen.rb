#
# outside
#
def foo
1
end
def main
#
# inside
#
foo()
str = "#%c# outside%c#%cdef foo%c1%cend%cdef main%c#%c# inside%c#%cfoo()%cstr = %c%s%c%cprintf(str, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10)%cend%cmain()"
printf(str, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10)
end
main()