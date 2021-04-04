import numpy as np
import matplotlib.pyplot as plt

data_omp = np.genfromtxt('./speedup_omp.txt')
data_serial = np.genfromtxt('./speedup_serial.txt')

fig,ax = plt.subplots()
ax.plot(data_omp[:,0],data_omp[:,1],'-g',label = 'omp')
ax.plot(data_serial[:,0],data_serial[:,1], '-b', label = 'serial')
ax.legend()
ax.set_xlabel('particles')
ax.set_ylabel('time')
fig.savefig('./serial_omp.png',dpi=350)
