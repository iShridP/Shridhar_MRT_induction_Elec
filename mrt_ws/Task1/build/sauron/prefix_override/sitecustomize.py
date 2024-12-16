import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/shridhar/Workspaces/mrt_ws/Task1/install/sauron'
