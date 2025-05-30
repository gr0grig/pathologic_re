GlobalVarCount = 0

Strings:
	cleanup
	restore
	b10q02Cutscene
	cs_b10q02_girl
	cs_play_all.bin
	ForceGeometryLoad
	add
	cs_b10q02_boy
	cs_b10q02_doberman
	cs_b10q02_littleboy
	space
	cs_b10q02.mot
	quest_b10_02
	place_bomb
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	size
	get
	clear

Import:
	IsPlayerActor (2 args)
	CameraSwitchToNormal (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	FindActor (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddScriptedActor (6 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x11
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_23 Op = 0x0 Vars = (object)
		EVENT_24 Op = 0xd Vars = (int)
		EVENT_26 Op = 0x15 Vars = (string)
		EVENT_6 Op = 0x31 Vars = ()
	GTASK_1  Params = 0


0x0: PushEmpty(bool, bool)
0x1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x2: Pop(0)
0x3: Pop(0); Push((bool) Stack[-1] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x6; Pop(1)

0x5: Return(); Pop(2)

0x6: EventDisable(23)
0x7: PushEmpty()
0x8: Push(-0, 0); TaskCall(1)
0x9: Call2 0x43

0xa: Pop(-0, 0); TaskReturn
0xb: Pop(0)
0xc: Return(); Pop(2)

0xd: PushEmpty()
0xe: @ CameraSwitchToNormal()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(0)

0x15: PushEmpty(bool, bool)
0x16: Push("cleanup")
0x17: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x19: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1a: @ IsLoaded(Stack[-1])
0x1b: Pop(0)
0x1c: PushEmpty(bool)
0x1d: Stack[-1] = (bool) 0
0x1e: Pop(0); Push((bool) Stack[-2] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x20: PushEmpty(bool)
0x21: Call2 0x41

0x22: Pop(0)
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: Stack[-1] = (bool) 1
0x25: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x26: PushEmpty(object)
0x27: Call2 0xde

0x28: Pop(0)
0x29: @ RemoveActor(Stack[-1])
0x2a: Pop(1)
0x2b: GOTO 0x30

0x2c: Push("restore")
0x2d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x30: Return(); Pop(2)

0x31: PushEmpty(bool)
0x32: Stack[-1] = (bool) 0
0x33: Push( Stack[0 + Tasks[-1].StackPointer] )
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: PushEmpty(bool)
0x36: Call2 0x41

0x37: Pop(0)
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[-1] = (bool) 1
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: PushEmpty(object)
0x3c: Call2 0xde

0x3d: Pop(0)
0x3e: @ RemoveActor(Stack[-1])
0x3f: Pop(1)
0x40: Return(); Pop(0)

0x41: Stack[-1] = (bool) 1
0x42: Return(); Pop(0)

0x43: PushEmpty(object, object, object, object, object, object, object, object)
0x44: Push("b10q02Cutscene")
0x45: Push((int) 1)
0x46: @ SetVariable(Stack[-2], Stack[-1])
0x47: Pop(2)
0x48: @ GetMainOutdoorScene(Stack[-4])
0x49: Pop(0)
0x4a: PushEmpty(object)
0x4b: Call2 0xe4

0x4c: Stack[-4] = Stack[-1]
0x4d: Pop(1)
0x4e: PushEmpty(object, object, string, string)
0x4f: Stack[-3] = Stack[-8]
0x50: Stack[-2] = "cs_b10q02_girl"
0x51: Stack[-1] = "cs_play_all.bin"
0x52: Call2 0xea

0x53: Stack[-6] = Stack[-4]
0x54: Pop(4)
0x55: @@ ForceGeometryLoad()
0x56: Pop(0)
0x57: @@ add(Stack[-2])
0x58: Pop(0)
0x59: PushEmpty(object, object, string, string)
0x5a: Stack[-3] = Stack[-8]
0x5b: Stack[-2] = "cs_b10q02_boy"
0x5c: Stack[-1] = "cs_play_all.bin"
0x5d: Call2 0xea

0x5e: Stack[-6] = Stack[-4]
0x5f: Pop(4)
0x60: @@ ForceGeometryLoad()
0x61: Pop(0)
0x62: @@ add(Stack[-2])
0x63: Pop(0)
0x64: PushEmpty(object, object, string, string)
0x65: Stack[-3] = Stack[-8]
0x66: Stack[-2] = "cs_b10q02_doberman"
0x67: Stack[-1] = "cs_play_all.bin"
0x68: Call2 0xea

0x69: Stack[-6] = Stack[-4]
0x6a: Pop(4)
0x6b: @@ ForceGeometryLoad()
0x6c: Pop(0)
0x6d: @@ add(Stack[-2])
0x6e: Pop(0)
0x6f: PushEmpty(object, object, string, string)
0x70: Stack[-3] = Stack[-8]
0x71: Stack[-2] = "cs_b10q02_littleboy"
0x72: Stack[-1] = "cs_play_all.bin"
0x73: Call2 0xea

0x74: Stack[-6] = Stack[-4]
0x75: Pop(4)
0x76: @@ ForceGeometryLoad()
0x77: Pop(0)
0x78: @@ add(Stack[-2])
0x79: Pop(0)
0x7a: PushEmpty(object)
0x7b: Call2 0xac

0x7c: Stack[-2] = Stack[-1]
0x7d: Pop(1)
0x7e: PushEmpty()
0x7f: Call2 0x113

0x80: Pop(0)
0x81: PushEmpty(object)
0x82: Stack[-1] = Stack[-2]
0x83: Call2 0xb3

0x84: Pop(1)
0x85: Push("space")
0x86: @ RegisterKeyCallback(Stack[-1])
0x87: Pop(1)
0x88: Push("cs_b10q02.mot")
0x89: @ CameraPlay(Stack[-1])
0x8a: Pop(1)
0x8b: @ CameraWaitForPlayFinish()
0x8c: Pop(0)
0x8d: Push("space")
0x8e: @ UnregisterKeyCallback(Stack[-1])
0x8f: Pop(1)
0x90: PushEmpty(object)
0x91: Stack[-1] = Stack[-2]
0x92: Call2 0xca

0x93: Pop(1)
0x94: PushEmpty()
0x95: Call2 0x118

0x96: Pop(0)
0x97: @ CameraSwitchToNormal()
0x98: Pop(0)
0x99: PushEmpty(object)
0x9a: Stack[-1] = Stack[-4]
0x9b: Call2 0xfe

0x9c: Pop(1)
0x9d: PushEmpty(bool, string, string)
0x9e: Stack[-2] = "quest_b10_02"
0x9f: Stack[-1] = "place_bomb"
0xa0: Call2 0xf2

0xa1: Pop(3)
0xa2: PushEmpty(object)
0xa3: Call2 0xde

0xa4: Pop(0)
0xa5: @ RemoveActor(Stack[-1])
0xa6: Pop(1)
0xa7: Return(); Pop(8)

0xa8: Stack[-1] = 0
0xa9: Stack[-2] = 0
0xaa: Stack[-3] = 0
0xab: Stack[-4] = 0
0xac: PushEmpty(object, object)
0xad: Push("player")
0xae: @ FindActor(Stack[-2], Stack[-1])
0xaf: Pop(1)
0xb0: Stack[-3] = Stack[-1]
0xb1: Return(); Pop(2)

0xb2: Stack[-1] = 0
0xb3: PushEmpty(bool, int, bool, int)
0xb4: Pop(0); Push((bool) Stack[-5] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(4)

0xb7: Push("noaccess")
0xb8: @@ HasProperty(Stack[-1], Stack[-3])
0xb9: Pop(1)
0xba: Push(Stack[-2])
0xbb: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbc: Push("noaccess")
0xbd: @@ GetProperty(Stack[-1], Stack[-2])
0xbe: Pop(1)
0xbf: Push("noaccess")
0xc0: Push((int) 1)
0xc1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc2: @@ SetProperty(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: GOTO 0xc9

0xc5: Push("noaccess")
0xc6: Push((int) 1)
0xc7: @@ SetProperty(Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: Return(); Pop(4)

0xca: PushEmpty(int, int)
0xcb: Pop(0); Push((bool) Stack[-3] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: Return(); Pop(2)

0xce: Push("noaccess")
0xcf: @@ GetProperty(Stack[-1], Stack[-2])
0xd0: Pop(1)
0xd1: Push((int) 1)
0xd2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd4: Push("noaccess")
0xd5: Push((int) 1)
0xd6: Pop(1); Push(Stack[-3] - Stack[-1]);
0xd7: @@ SetProperty(Stack[-2], Stack[-1])
0xd8: Pop(2)
0xd9: GOTO 0xdd

0xda: Push("noaccess")
0xdb: @@ RemoveProperty(Stack[-1])
0xdc: Pop(1)
0xdd: Return(); Pop(2)

0xde: PushEmpty(object, object)
0xdf: @ self(Stack[-1])
0xe0: Pop(0)
0xe1: Stack[-3] = Stack[-1]
0xe2: Return(); Pop(2)

0xe3: Stack[-1] = 0
0xe4: PushEmpty(object, object)
0xe5: @ CreateObjectVector(Stack[-1])
0xe6: Pop(0)
0xe7: Stack[-3] = Stack[-1]
0xe8: Return(); Pop(2)

0xe9: Stack[-1] = 0
0xea: PushEmpty(object, object)
0xeb: Push(CVector(0.0, 0.0, 0.0))
0xec: Push(CVector(0.0, 0.0, 1.0))
0xed: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: Stack[-6] = Stack[-1]
0xf0: Return(); Pop(2)

0xf1: Stack[-1] = 0
0xf2: PushEmpty(object, object)
0xf3: @ FindActor(Stack[-1], Stack[-4])
0xf4: Pop(0)
0xf5: Pop(0); Push((bool) Stack[-1] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: Stack[-5] = (bool) 0
0xf8: Return(); Pop(2)

0xf9: @ Trigger(Stack[-1], Stack[-3])
0xfa: Pop(0)
0xfb: Stack[-5] = (bool) 1
0xfc: Return(); Pop(2)

0xfd: Stack[-1] = 0
0xfe: PushEmpty(int, int, object, int, int, object)
0xff: Push(Stack[-7])
0x100: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x101: @@ size(Stack[-3])
0x102: Pop(0)
0x103: Stack[-2] = (int) 0
0x104: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x105: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x106: @@ get(Stack[-1], Stack[-2])
0x107: Pop(0)
0x108: Push(Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10a: @ RemoveActor(Stack[-1])
0x10b: Pop(0)
0x10c: Stack[-1] = 0
0x10d: Push((int) 1)
0x10e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x10f: GOTO 0x104

0x110: @@ clear()
0x111: Pop(0)
0x112: Return(); Pop(6)

0x113: Push((float)0.5)
0x114: Push((float)0.886)
0x115: @ SetSepia(Stack[-2], Stack[-1])
0x116: Pop(2)
0x117: Return(); Pop(0)

0x118: Push((int) 0)
0x119: Push((int) 0)
0x11a: @ SetSepia(Stack[-2], Stack[-1])
0x11b: Pop(2)
0x11c: Return(); Pop(0)

