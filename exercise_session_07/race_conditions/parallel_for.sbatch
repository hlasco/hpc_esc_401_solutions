#!/bin/bash -l
#SBATCH --job-name="race_cond"
#SBATCH --account="uzh8"
#SBATCH --time=00:05:00
#SBATCH --nodes=1
#SBATCH --ntasks-per-core=1
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=36
#SBATCH --partition=debug
#SBATCH --constraint=mc
#SBATCH --hint=nomultithread
#SBATCH --output=serial.out

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

for i in {1..4}
do
    echo "parallel_for run $i"
    srun ../parallel_for
done