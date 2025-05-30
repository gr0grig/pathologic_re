GlobalVarCount = 0

Strings:
	quest_d12_01
	theater_load
	theater_unload
	Performance
	cs_mask_danko
	cs_mask_danko.xml
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

RunOp = 0xf
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0x9 Vars = ()


0x0: PushEmpty()
0x1: Call2 0x13

0x2: Pop(0)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_d12_01"
0x5: Stack[-1] = "theater_load"
0x6: Call2 0x94

0x7: Pop(3)
0x8: Return(); Pop(0)

0x9: PushEmpty(bool, string, string)
0xa: Stack[-2] = "quest_d12_01"
0xb: Stack[-1] = "theater_unload"
0xc: Call2 0x94

0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: @ Hold()
0x10: Pop(0)
0x11: GOTO 0xf

0x12: Return(); Pop(0)

0x13: PushEmpty(int, int, object, object, int, int, object, object)
0x14: PushEmpty(bool)
0x15: Call2 0xb1

0x16: Pop(0)
0x17: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x18: PushEmpty(int)
0x19: Call2 0xa0

0x1a: Stack[-5] = Stack[-1]
0x1b: Pop(1)
0x1c: Push("Performance")
0x1d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1e: Push((int) 1)
0x1f: @ SetVariable(Stack[-2], Stack[-1])
0x20: Pop(2)
0x21: Push("cs_mask_danko")
0x22: PushEmpty(object)
0x23: Call2 0x8e

0x24: Pop(0)
0x25: Push(CVector(0.0, 0.0, 0.0))
0x26: Push(CVector(0.0, 0.0, 1.0))
0x27: Push("cs_mask_danko.xml")
0x28: @ AddActor(Stack[-7], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(5)
0x2a: @@ ForceGeometryLoad()
0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Call2 0x5c

0x2e: Stack[-2] = Stack[-1]
0x2f: Pop(1)
0x30: PushEmpty(object)
0x31: Stack[-1] = Stack[-2]
0x32: Call2 0x63

0x33: Pop(1)
0x34: Push("cs_mask_danko")
0x35: Push((int) 1)
0x36: Pop(1); Push(Stack[-6] - Stack[-1]);
0x37: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38: Push(".mot")
0x39: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a: @ CameraPlay(Stack[-1])
0x3b: Pop(1)
0x3c: Push("nightmask")
0x3d: Push((int) 1)
0x3e: Pop(1); Push(Stack[-6] - Stack[-1]);
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push(".ogg")
0x41: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42: @ PlayGlobalMusic(Stack[-1])
0x43: Pop(1)
0x44: @ CameraWaitForPlayFinish()
0x45: Pop(0)
0x46: Push("")
0x47: @ PlayGlobalMusic(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(object)
0x4a: Stack[-1] = Stack[-2]
0x4b: Call2 0x7a

0x4c: Pop(1)
0x4d: @ CameraSwitchToNormal()
0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-2])
0x50: Pop(0)
0x51: Push("NightMasks")
0x52: Push((int) 1)
0x53: Pop(1); Push(Stack[-6] - Stack[-1]);
0x54: Pop(2); Push(Stack[-2] + Stack[-1]);
0x55: Push(".wmv")
0x56: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57: @ PlayMovie(Stack[-1])
0x58: Pop(1)
0x59: Stack[-1] = 0
0x5a: Stack[-2] = 0
0x5b: Return(); Pop(8)

0x5c: PushEmpty(object, object)
0x5d: Push("player")
0x5e: @ FindActor(Stack[-2], Stack[-1])
0x5f: Pop(1)
0x60: Stack[-3] = Stack[-1]
0x61: Return(); Pop(2)

0x62: Stack[-1] = 0
0x63: PushEmpty(bool, int, bool, int)
0x64: Pop(0); Push((bool) Stack[-5] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Return(); Pop(4)

0x67: Push("noaccess")
0x68: @@ HasProperty(Stack[-1], Stack[-3])
0x69: Pop(1)
0x6a: Push(Stack[-2])
0x6b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6c: Push("noaccess")
0x6d: @@ GetProperty(Stack[-1], Stack[-2])
0x6e: Pop(1)
0x6f: Push("noaccess")
0x70: Push((int) 1)
0x71: Pop(1); Push(Stack[-3] + Stack[-1]);
0x72: @@ SetProperty(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: GOTO 0x79

0x75: Push("noaccess")
0x76: Push((int) 1)
0x77: @@ SetProperty(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: Return(); Pop(4)

0x7a: PushEmpty(int, int)
0x7b: Pop(0); Push((bool) Stack[-3] == 0)
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(2)

0x7e: Push("noaccess")
0x7f: @@ GetProperty(Stack[-1], Stack[-2])
0x80: Pop(1)
0x81: Push((int) 1)
0x82: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x84: Push("noaccess")
0x85: Push((int) 1)
0x86: Pop(1); Push(Stack[-3] - Stack[-1]);
0x87: @@ SetProperty(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x8d

0x8a: Push("noaccess")
0x8b: @@ RemoveProperty(Stack[-1])
0x8c: Pop(1)
0x8d: Return(); Pop(2)

0x8e: PushEmpty(object, object)
0x8f: @ self(Stack[-1])
0x90: Pop(0)
0x91: Stack[-3] = Stack[-1]
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
0x94: PushEmpty(object, object)
0x95: @ FindActor(Stack[-1], Stack[-4])
0x96: Pop(0)
0x97: Pop(0); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x99: Stack[-5] = (bool) 0
0x9a: Return(); Pop(2)

0x9b: @ Trigger(Stack[-1], Stack[-3])
0x9c: Pop(0)
0x9d: Stack[-5] = (bool) 1
0x9e: Return(); Pop(2)

0x9f: Stack[-1] = 0
0xa0: PushEmpty(float, float)
0xa1: @ GetGameTime(Stack[-1])
0xa2: Pop(0)
0xa3: Push((int) 1)
0xa4: PushEmpty(int)
0xa5: Push((int) 24)
0xa6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xa7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa8: Return(); Pop(2)

0xa9: PushEmpty(float, float)
0xaa: @ GetGameTime(Stack[-1])
0xab: Pop(0)
0xac: PushEmpty(int)
0xad: Stack[-1] = Stack[-2]
0xae: Push((int) 24)
0xaf: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xb0: Return(); Pop(2)

0xb1: PushEmpty(int, int, int, int, int, int)
0xb2: PushEmpty(int)
0xb3: Call2 0xa9

0xb4: Stack[-4] = Stack[-1]
0xb5: Pop(1)
0xb6: Push((int) 7)
0xb7: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb9: PushEmpty(int)
0xba: Call2 0xa0

0xbb: Stack[-3] = Stack[-1]
0xbc: Pop(1)
0xbd: Push((int) 1)
0xbe: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc0: Push("Performance")
0xc1: Pop(1); Push(Stack[-1] + Stack[-3]);
0xc2: @ GetVariable(Stack[-1], Stack[-2])
0xc3: Pop(1)
0xc4: Push((int) 0)
0xc5: Stack[-8] = Stack[-2] == Stack[-1]; Pop(1);
0xc6: Return(); Pop(6)

0xc7: Stack[-7] = (bool) 0
0xc8: Return(); Pop(6)

