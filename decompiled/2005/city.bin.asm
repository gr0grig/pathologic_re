GlobalVarCount = 7
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 object 
	G_VAR_3 object 
	G_VAR_4 object 
	G_VAR_5 object 
	G_VAR_6 object 

Strings:
	scenes/
	.mot
	play
	playing: 
	space
	escape
	size
	s_
	n_
	get
	.isc
	City manager: can't replace indoor scene "
	" because it doesn't exist
	horror
	Replaced
	Invalid region index
	night time
	day time

Import:
	SetTimeEvent (2 args)
	Hold (0 args)
	Trace (1 args)
	RegisterKeyCallback (1 args)
	CameraPlay (2 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	CreateObjectSet (1 args)
	CreateObjectVector (1 args)
	GetSceneByName (2 args)
	ReplaceScene (2 args)
	_strtoi (2 args)
	SwitchLights (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_9 Op = 0x52 Vars = (int, float)
		EVENT_26 Op = 0x59 Vars = (string)
		EVENT_1000 Op = 0x64 Vars = (string, string)
	GTASK_1  Params = 1
		EVENT_9 Op = 0x8e Vars = (int, float)
		EVENT_24 Op = 0x95 Vars = (int)

Events:
EVENT_1000 Op = 0xcb Vars = (string, string)

0x0: PushEmpty(int, int)
0x1: Push(GlobalVars[0])
0x2: PushEmpty(object)
0x3: Call2 0x99

0x4: Stack[-2] = Stack[-1]
0x5: Pop(1)
0x6: GlobalVars[0] = Stack[-1]; Pop(1)
0x7: Push(GlobalVars[1])
0x8: PushEmpty(object)
0x9: Call2 0x99

0xa: Stack[-2] = Stack[-1]
0xb: Pop(1)
0xc: GlobalVars[1] = Stack[-1]; Pop(1)
0xd: Push(GlobalVars[2])
0xe: PushEmpty(object)
0xf: Call2 0x99

0x10: Stack[-2] = Stack[-1]
0x11: Pop(1)
0x12: GlobalVars[2] = Stack[-1]; Pop(1)
0x13: Push(GlobalVars[3])
0x14: PushEmpty(object)
0x15: Call2 0x99

0x16: Stack[-2] = Stack[-1]
0x17: Pop(1)
0x18: GlobalVars[3] = Stack[-1]; Pop(1)
0x19: Push(GlobalVars[4])
0x1a: PushEmpty(object)
0x1b: Call2 0x99

0x1c: Stack[-2] = Stack[-1]
0x1d: Pop(1)
0x1e: GlobalVars[4] = Stack[-1]; Pop(1)
0x1f: Push(GlobalVars[5])
0x20: PushEmpty(object)
0x21: Call2 0x99

0x22: Stack[-2] = Stack[-1]
0x23: Pop(1)
0x24: GlobalVars[5] = Stack[-1]; Pop(1)
0x25: Push(GlobalVars[6])
0x26: PushEmpty(object)
0x27: Call2 0x9f

0x28: Stack[-2] = Stack[-1]
0x29: Pop(1)
0x2a: GlobalVars[6] = Stack[-1]; Pop(1)
0x2b: PushEmpty()
0x2c: Call2 0x51

0x2d: Pop(0)
0x2e: Stack[-1] = (int) 0
0x2f: Push((int) 16)
0x30: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x32: Push((int) 2)
0x33: Pop(1); Push(Stack[-2] * Stack[-1]);
0x34: Push((int) 1)
0x35: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36: Push((int) 19)
0x37: Push((int) 24)
0x38: Pop(1); Push(Stack[-4] * Stack[-1]);
0x39: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a: @ SetTimeEvent(Stack[-2], Stack[-1])
0x3b: Pop(2)
0x3c: Push((int) 2)
0x3d: Pop(1); Push(Stack[-2] * Stack[-1]);
0x3e: Push((int) 2)
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push((int) 10)
0x41: Push((int) 24)
0x42: Pop(1); Push(Stack[-4] * Stack[-1]);
0x43: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44: @ SetTimeEvent(Stack[-2], Stack[-1])
0x45: Pop(2)
0x46: Push((int) 1)
0x47: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x48: GOTO 0x2f

0x49: PushEmpty(bool)
0x4a: Stack[-1] = (bool) 1
0x4b: Call2 0xf5

0x4c: Pop(1)
0x4d: @ Hold()
0x4e: Pop(0)
0x4f: GOTO 0x4d

0x50: Return(); Pop(2)

0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: PushEmpty(int, float)
0x54: Stack[-2] = Stack[-4]
0x55: Stack[-1] = Stack[-3]
0x56: Call2 0xee

0x57: Pop(2)
0x58: Return(); Pop(0)

0x59: PushEmpty()
0x5a: PushEmpty(string)
0x5b: Push("scenes/")
0x5c: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5d: Push(".mot")
0x5e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5f: Push(-1, 0); TaskCall(1)
0x60: Call2 0x75

0x61: Pop(-1, 0); TaskReturn
0x62: Pop(1)
0x63: Return(); Pop(0)

0x64: PushEmpty()
0x65: Push("play")
0x66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x68: PushEmpty(string)
0x69: Stack[-1] = Stack[-2]
0x6a: Push(-1, 0); TaskCall(1)
0x6b: Call2 0x75

0x6c: Pop(-1, 0); TaskReturn
0x6d: Pop(1)
0x6e: GOTO 0x74

0x6f: PushEmpty(string, string)
0x70: Stack[-2] = Stack[-4]
0x71: Stack[-1] = Stack[-3]
0x72: Call2 0xcb

0x73: Pop(2)
0x74: Return(); Pop(0)

0x75: PushEmpty()
0x76: Push("playing: ")
0x77: Pop(1); Push(Stack[-1] + Stack[-2]);
0x78: @ Trace(Stack[-1])
0x79: Pop(1)
0x7a: Push("space")
0x7b: @ RegisterKeyCallback(Stack[-1])
0x7c: Pop(1)
0x7d: Push("escape")
0x7e: @ RegisterKeyCallback(Stack[-1])
0x7f: Pop(1)
0x80: Push((bool) 0)
0x81: @ CameraPlay(Stack[-2], Stack[-1])
0x82: Pop(1)
0x83: @ CameraWaitForPlayFinish()
0x84: Pop(0)
0x85: Push("escape")
0x86: @ UnregisterKeyCallback(Stack[-1])
0x87: Pop(1)
0x88: Push("space")
0x89: @ UnregisterKeyCallback(Stack[-1])
0x8a: Pop(1)
0x8b: @ CameraSwitchToNormal()
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(int, float)
0x90: Stack[-2] = Stack[-4]
0x91: Stack[-1] = Stack[-3]
0x92: Call2 0xee

0x93: Pop(2)
0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: @ CameraSwitchToNormal()
0x97: Pop(0)
0x98: Return(); Pop(0)

0x99: PushEmpty(object, object)
0x9a: @ CreateObjectSet(Stack[-1])
0x9b: Pop(0)
0x9c: Stack[-3] = Stack[-1]
0x9d: Return(); Pop(2)

0x9e: Stack[-1] = 0
0x9f: PushEmpty(object, object)
0xa0: @ CreateObjectVector(Stack[-1])
0xa1: Pop(0)
0xa2: Stack[-3] = Stack[-1]
0xa3: Return(); Pop(2)

0xa4: Stack[-1] = 0
0xa5: PushEmpty(int, string, int, string, string, object, int, string, int, string, string, object)
0xa6: @@ size(Stack[-6])
0xa7: Pop(0)
0xa8: Push((int) 1)
0xa9: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xab: Stack[-5] = "s_"
0xac: GOTO 0xb1

0xad: Push((int) 2)
0xae: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Stack[-5] = "n_"
0xb1: Stack[-4] = (int) 0
0xb2: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0xb3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xb4: @@ get(Stack[-3], Stack[-4])
0xb5: Pop(0)
0xb6: Pop(0); Push(Stack[-5] + Stack[-3]);
0xb7: Push(".isc")
0xb8: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xb9: @ GetSceneByName(Stack[-1], Stack[-3])
0xba: Pop(0)
0xbb: Pop(0); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbd: Push("City manager: can't replace indoor scene "")
0xbe: Pop(1); Push(Stack[-1] + Stack[-4]);
0xbf: Push("" because it doesn't exist")
0xc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1: @ Trace(Stack[-1])
0xc2: Pop(1)
0xc3: GOTO 0xc6

0xc4: @ ReplaceScene(Stack[-1], Stack[-2])
0xc5: Pop(0)
0xc6: Stack[-1] = 0
0xc7: Push((int) 1)
0xc8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc9: GOTO 0xb2

0xca: Return(); Pop(12)

0xcb: PushEmpty(int, int, object, int, int, object)
0xcc: Push("horror")
0xcd: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xcf: @ _strtoi(Stack[-3], Stack[-7])
0xd0: Pop(0)
0xd1: Push(GlobalVars[6])
0xd2: @@ size(Stack[-3])
0xd3: Pop(1)
0xd4: PushEmpty(bool)
0xd5: Stack[-1] = (bool) 0
0xd6: Push((int) 0)
0xd7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd9: Pop(0); Push((bool) Stack[-4] < Stack[-3])
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Stack[-1] = (bool) 1
0xdc: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xdd: Push(GlobalVars[6])
0xde: @@ get(Stack[-2], Stack[-4])
0xdf: Pop(1)
0xe0: PushEmpty(object, int)
0xe1: Stack[-2] = Stack[-3]
0xe2: Stack[-1] = (bool) 0
0xe3: Call2 0xa5

0xe4: Pop(2)
0xe5: Push("Replaced")
0xe6: @ Trace(Stack[-1])
0xe7: Pop(1)
0xe8: Stack[-1] = 0
0xe9: GOTO 0xed

0xea: Push("Invalid region index")
0xeb: @ Trace(Stack[-1])
0xec: Pop(1)
0xed: Return(); Pop(6)

0xee: PushEmpty()
0xef: PushEmpty(bool)
0xf0: Push((int) 2)
0xf1: Stack[-2] = Stack[-4] % Stack[-1]; Pop(1);
0xf2: Call2 0xf5

0xf3: Pop(1)
0xf4: Return(); Pop(0)

0xf5: PushEmpty()
0xf6: Push(Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf8: Push("night time")
0xf9: @ Trace(Stack[-1])
0xfa: Pop(1)
0xfb: Push((int) 0)
0xfc: Push((bool) 1)
0xfd: @ SwitchLights(Stack[-2], Stack[-1])
0xfe: Pop(2)
0xff: GOTO 0x107

0x100: Push("day time")
0x101: @ Trace(Stack[-1])
0x102: Pop(1)
0x103: Push((int) 0)
0x104: Push((bool) 0)
0x105: @ SwitchLights(Stack[-2], Stack[-1])
0x106: Pop(2)
0x107: Return(); Pop(0)

