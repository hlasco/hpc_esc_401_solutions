#!/bin/bash -l
#SBATCH --job-name="size_test_cuda"
#SBATCH --account="uzg2"
#SBATCH --time=00:05:00
#SBATCH --nodes=1
#SBATCH --ntasks-per-core=1
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=12
#SBATCH --partition=debug
#SBATCH --constraint=gpu
#SBATCH --hint=nomultithread
#SBATCH --output=size_test_cuda.out

srun ~/hpc_esc_401_solutions/exercise_session_10/cuda/size_test_cuda/size_test_cuda
