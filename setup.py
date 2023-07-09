import sys
import os
import argparse
import subprocess
import shutil


def exit_program():
    print("Exiting the program...")
    sys.exit(0)


def on_clear_arg():
    cwd = os.getcwd()
    bin_fold = os.path.join(cwd, "bin")

    if(os.path.exists(bin_fold)):
        try:
            shutil.rmtree(bin_fold)
        except OSError as error:
            print("════════════════════════════════════")
            print("Directory '% s' can not be removed" % bin_fold)
            print("*** Error ***")
            print(error)
            return False
    else:
        print("Nothing to clear, file not found")
    return True


def check_bin_folder():
    cwd = os.getcwd()
    bin_fold = os.path.join(cwd, "bin")

    if(not os.path.exists(bin_fold)):
        os.mkdir(bin_fold)
        print("Bin folder not found, created!")


def generate_cmake():
    cwd = os.getcwd()
    bin_fold = os.path.join(cwd, "bin")
    subprocess.run(["cmake", "-B", bin_fold,"."])


def cmake_build():
    cwd = os.getcwd()
    bin_fold = os.path.join(cwd, "bin")
    subprocess.run(["cmake", "--build", bin_fold])


def main():
    parser = argparse.ArgumentParser(description="CosmosEngine Generation/Build script")
    parser.add_argument("-c", "--clear",
                        help="Defines if should clear the results before action",
                        action="store_true")

    parser.add_argument( "-a", "--action",
                        help="Defines what will be done with Cmake",
                        type=str, metavar="",
                        choices=["GEN", "GB", "B"])

    args = parser.parse_args()


    if(args.clear and not on_clear_arg()): exit_program()
    if(args.action):
        match args.action:
            case "GEN":
                check_bin_folder()
                generate_cmake()

            case "GB":
                
                check_bin_folder()
                generate_cmake()
                cmake_build()

            case "B":
                cmake_build()

    else:
        print("╔══................................══╗")
        print("║              Exiting ...           ║")
        print("╚════════════════════════════════════╝")


if __name__ == "__main__":
    main()