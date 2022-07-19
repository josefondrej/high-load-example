from multiprocessing import Process


def do_intensive_stuff(index):
    print(f'Starting: {index}')
    for i in range(1000):
        for j in range(1000):
            for k in range(1000):
                l = i * j * k
    print(f'Completed: {index}')


if __name__ == '__main__':
    print('Running main.py')

    for process_index in range(1000):
        process = Process(target=do_intensive_stuff, args=[process_index])
        process.start()
