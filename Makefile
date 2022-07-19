IMAGE_NAME = "high-load-example:0.0.1"

build:
	docker build --no-cache --tag ${IMAGE_NAME} .

run:
	docker run --cpus=1 ${IMAGE_NAME}