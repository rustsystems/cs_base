

# import os

# def main():
#     directory = './'
#     root = os.walk(directory)
#     print(f"root: {root}")

#     for d in root:
#         print(f"\t dir: {d}")
#     # for f in files:
#     #     print(f"\t file: {f}")


import time
import os
from glob import glob
from pathlib import Path
import re

directory = r"./"
RUNS = 1


def run_os_walk():
    a = time.time_ns()
    for i in range(RUNS):
        fu = [x[0] for x in os.walk(directory)]
    print(f"os.walk\t\t\ttook {(time.time_ns() - a) / 1000 / 1000 / RUNS:.0f} ms. Found dirs: {len(fu)}")


def run_glob():
    a = time.time_ns()
    for i in range(RUNS):
        fu = glob(directory + "/*/")
    print(f"glob.glob\t\ttook {(time.time_ns() - a) / 1000 / 1000 / RUNS:.0f} ms. Found dirs: {len(fu)}")


def run_pathlib_iterdir():
    a = time.time_ns()
    for i in range(RUNS):
        dirname = Path(directory)
        fu = [f for f in dirname.iterdir() if f.is_dir()]
    print(f"pathlib.iterdir\ttook {(time.time_ns() - a) / 1000 / 1000 / RUNS:.0f} ms. Found dirs: {len(fu)}")


def run_os_listdir():
    a = time.time_ns()
    for i in range(RUNS):
        dirname = Path(directory)
        fu = [os.path.join(directory, o) for o in os.listdir(directory) if os.path.isdir(os.path.join(directory, o))]
    print(f"os.listdir\t\ttook {(time.time_ns() - a) / 1000 / 1000 / RUNS:.0f} ms. Found dirs: {len(fu)}")

exts = [
    "c", "cpp", "java", "py", "rb", "go", "rs",   # Primary Imperative
    "clj", "hs", "rkt",    # Functional "Aged"/"Mature"
    "ts", "js",  # Web/Modern
    "kt", "swift",  # Weird/Misc....
]
s
def run_os_scandir():
    a = time.time_ns()
    for i in range(RUNS):
        fu = [f.path for f in os.scandir(directory) if f.is_dir()]
        for f in fu:
            # print(f)


            sd = str(f)
            sd = sd.lower()
            sdr = re.sub('lc\d+_', '', sd)
            # print(sdr)
            sdr = sdr.replace('./', '')
            for ext in exts:
                ext_file = sdr + '.' + ext
                ext_path = os.path.join(f, ext)
                ext_new_file = os.path.join(ext_path, ext_file)
                
                # os.mkdir(ext_path)
                # Path('path/to/file.txt').touch()
                # print(full_new_ext)
                print(ext_path)
                print(ext_file)
                print(ext_new_file)

                os.mkdir(ext_path)
                Path(ext_new_file).touch()

if __name__ == '__main__':
    # run_os_walk()
    # run_glob()
    # run_pathlib_iterdir()
    # run_os_listdir()
    run_os_scandir()

# if __name__ == '__main__':
#     main()