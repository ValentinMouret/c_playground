all:
	@[ -d "dist" ] || mkdir dist
	@gcc src/point.c -o dist/point
