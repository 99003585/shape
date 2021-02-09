src = shape.cpp test_shape.cpp
project = target
target: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out