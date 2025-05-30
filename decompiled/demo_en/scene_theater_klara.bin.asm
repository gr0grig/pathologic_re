GlobalVarCount = 0

Strings:
	quest_k7_01
	theater_load
	quest_k12_01
	theater_unload
	Performance
	cs_mask_klara
	cs_mask_klara.xml
	ForceGeometryLoad
	.mot
	nightmask
	.ogg
	NightMasks
	.wmv
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	Hold (0 args)
	SetVariable (2 args)
	AddActor (6 args)
	CameraPlay (1 args)
	PlayGlobalMusic (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	PlayMovie (1 args)
	FindActor (2 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0x14
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0xe Vars = ()


0x0: PushEmpty()
0x1: Call2 0x18

0x2: Pop(0)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_k7_01"
0x5: Stack[-1] = "theater_load"
0x6: Call2 0x99

0x7: Pop(3)
0x8: PushEmpty(bool, string, string)
0x9: Stack[-2] = "quest_k12_01"
0xa: Stack[-1] = "theater_load"
0xb: Call2 0x99

0xc: Pop(3)
0xd: Return(); Pop(0)

0xe: PushEmpty(bool, string, string)
0xf: Stack[-2] = "quest_k12_01"
0x10: Stack[-1] = "theater_unload"
0x11: Call2 0x99

0x12: Pop(3)
0x13: Return(); Pop(0)

0x14: @ Hold()
0x15: Pop(0)
0x16: GOTO 0x14

0x17: Return(); Pop(0)

0x18: PushEmpty(int, int, object, object, int, int, object, object)
0x19: PushEmpty(bool)
0x1a: Call2 0xb6

0x1b: Pop(0)
0x1c: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x1d: PushEmpty(int)
0x1e: Call2 0xa5

0x1f: Stack[-5] = Stack[-1]
0x20: Pop(1)
0x21: Push("Performance")
0x22: Pop(1); Push(Stack[-1] + Stack[-5]);
0x23: Push((int) 1)
0x24: @ SetVariable(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: Push("cs_mask_klara")
0x27: PushEmpty(object)
0x28: Call2 0x93

0x29: Pop(0)
0x2a: Push(CVector(0.0, 0.0, 0.0))
0x2b: Push(CVector(0.0, 0.0, 1.0))
0x2c: Push("cs_mask_klara.xml")
0x2d: @ AddActor(Stack[-7], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2e: Pop(5)
0x2f: @@ ForceGeometryLoad()
0x30: Pop(0)
0x31: PushEmpty(object)
0x32: Call2 0x61

0x33: Stack[-2] = Stack[-1]
0x34: Pop(1)
0x35: PushEmpty(object)
0x36: Stack[-1] = Stack[-2]
0x37: Call2 0x68

0x38: Pop(1)
0x39: Push("cs_mask_klara")
0x3a: Push((int) 1)
0x3b: Pop(1); Push(Stack[-6] - Stack[-1]);
0x3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d: Push(".mot")
0x3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f: @ CameraPlay(Stack[-1])
0x40: Pop(1)
0x41: Push("nightmask")
0x42: Push((int) 1)
0x43: Pop(1); Push(Stack[-6] - Stack[-1]);
0x44: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45: Push(".ogg")
0x46: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47: @ PlayGlobalMusic(Stack[-1])
0x48: Pop(1)
0x49: @ CameraWaitForPlayFinish()
0x4a: Pop(0)
0x4b: Push("")
0x4c: @ PlayGlobalMusic(Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object)
0x4f: Stack[-1] = Stack[-2]
0x50: Call2 0x7f

0x51: Pop(1)
0x52: @ CameraSwitchToNormal()
0x53: Pop(0)
0x54: @ RemoveActor(Stack[-2])
0x55: Pop(0)
0x56: Push("NightMasks")
0x57: Push((int) 1)
0x58: Pop(1); Push(Stack[-6] - Stack[-1]);
0x59: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5a: Push(".wmv")
0x5b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c: @ PlayMovie(Stack[-1])
0x5d: Pop(1)
0x5e: Stack[-1] = 0
0x5f: Stack[-2] = 0
0x60: Return(); Pop(8)

0x61: PushEmpty(object, object)
0x62: Push("player")
0x63: @ FindActor(Stack[-2], Stack[-1])
0x64: Pop(1)
0x65: Stack[-3] = Stack[-1]
0x66: Return(); Pop(2)

0x67: Stack[-1] = 0
0x68: PushEmpty(bool, int, bool, int)
0x69: Pop(0); Push((bool) Stack[-5] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6b: Return(); Pop(4)

0x6c: Push("noaccess")
0x6d: @@ HasProperty(Stack[-1], Stack[-3])
0x6e: Pop(1)
0x6f: Push(Stack[-2])
0x70: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x71: Push("noaccess")
0x72: @@ GetProperty(Stack[-1], Stack[-2])
0x73: Pop(1)
0x74: Push("noaccess")
0x75: Push((int) 1)
0x76: Pop(1); Push(Stack[-3] + Stack[-1]);
0x77: @@ SetProperty(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: GOTO 0x7e

0x7a: Push("noaccess")
0x7b: Push((int) 1)
0x7c: @@ SetProperty(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: Return(); Pop(4)

0x7f: PushEmpty(int, int)
0x80: Pop(0); Push((bool) Stack[-3] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Return(); Pop(2)

0x83: Push("noaccess")
0x84: @@ GetProperty(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Push((int) 1)
0x87: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: Push("noaccess")
0x8a: Push((int) 1)
0x8b: Pop(1); Push(Stack[-3] - Stack[-1]);
0x8c: @@ SetProperty(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x92

0x8f: Push("noaccess")
0x90: @@ RemoveProperty(Stack[-1])
0x91: Pop(1)
0x92: Return(); Pop(2)

0x93: PushEmpty(object, object)
0x94: @ self(Stack[-1])
0x95: Pop(0)
0x96: Stack[-3] = Stack[-1]
0x97: Return(); Pop(2)

0x98: Stack[-1] = 0
0x99: PushEmpty(object, object)
0x9a: @ FindActor(Stack[-1], Stack[-4])
0x9b: Pop(0)
0x9c: Pop(0); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9e: Stack[-5] = (bool) 0
0x9f: Return(); Pop(2)

0xa0: @ Trigger(Stack[-1], Stack[-3])
0xa1: Pop(0)
0xa2: Stack[-5] = (bool) 1
0xa3: Return(); Pop(2)

0xa4: Stack[-1] = 0
0xa5: PushEmpty(float, float)
0xa6: @ GetGameTime(Stack[-1])
0xa7: Pop(0)
0xa8: Push((int) 1)
0xa9: PushEmpty(int)
0xaa: Push((int) 24)
0xab: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xac: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xad: Return(); Pop(2)

0xae: PushEmpty(float, float)
0xaf: @ GetGameTime(Stack[-1])
0xb0: Pop(0)
0xb1: PushEmpty(int)
0xb2: Stack[-1] = Stack[-2]
0xb3: Push((int) 24)
0xb4: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xb5: Return(); Pop(2)

0xb6: PushEmpty(int, int, int, int, int, int)
0xb7: PushEmpty(int)
0xb8: Call2 0xae

0xb9: Stack[-4] = Stack[-1]
0xba: Pop(1)
0xbb: Push((int) 7)
0xbc: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xbe: PushEmpty(int)
0xbf: Call2 0xa5

0xc0: Stack[-3] = Stack[-1]
0xc1: Pop(1)
0xc2: Push((int) 1)
0xc3: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc5: Push("Performance")
0xc6: Pop(1); Push(Stack[-1] + Stack[-3]);
0xc7: @ GetVariable(Stack[-1], Stack[-2])
0xc8: Pop(1)
0xc9: Push((int) 0)
0xca: Stack[-8] = Stack[-2] == Stack[-1]; Pop(1);
0xcb: Return(); Pop(6)

0xcc: Stack[-7] = (bool) 0
0xcd: Return(); Pop(6)

