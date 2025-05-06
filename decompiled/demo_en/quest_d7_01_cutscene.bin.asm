GlobalVarCount = 0

Strings:
	sobor
	cs_d7q01_Aglaja
	cs_d7q01_Aglaja.xml
	cs_d7q01_birdmask
	cs_play_all.bin
	space
	cs_d7q01.mot
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	GetSceneByName (2 args)
	AddActor (6 args)
	AddScriptedActor (5 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	FindActor (2 args)
	self (1 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x3c Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object)
0x1: Push("sobor")
0x2: @ GetSceneByName(Stack[-5], Stack[-1])
0x3: Pop(1)
0x4: Push("cs_d7q01_Aglaja")
0x5: Push(CVector(0.0, 0.0, 0.0))
0x6: Push(CVector(0.0, 0.0, 1.0))
0x7: Push("cs_d7q01_Aglaja.xml")
0x8: @ AddActor(Stack[-7], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x9: Pop(4)
0xa: Push("cs_d7q01_birdmask")
0xb: Push("cs_play_all.bin")
0xc: Push(CVector(0.0, 0.0, 0.0))
0xd: @ AddScriptedActor(Stack[-5], Stack[-3], Stack[-2], Stack[-7], Stack[-1])
0xe: Pop(3)
0xf: PushEmpty(object)
0x10: Call2 0x40

0x11: Stack[-2] = Stack[-1]
0x12: Pop(1)
0x13: PushEmpty()
0x14: Call2 0x78

0x15: Pop(0)
0x16: PushEmpty(object)
0x17: Stack[-1] = Stack[-2]
0x18: Call2 0x47

0x19: Pop(1)
0x1a: Push("space")
0x1b: @ RegisterKeyCallback(Stack[-1])
0x1c: Pop(1)
0x1d: Push("cs_d7q01.mot")
0x1e: @ CameraPlay(Stack[-1])
0x1f: Pop(1)
0x20: @ CameraWaitForPlayFinish()
0x21: Pop(0)
0x22: Push("space")
0x23: @ UnregisterKeyCallback(Stack[-1])
0x24: Pop(1)
0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-2]
0x27: Call2 0x5e

0x28: Pop(1)
0x29: PushEmpty()
0x2a: Call2 0x7d

0x2b: Pop(0)
0x2c: @ RemoveActor(Stack[-2])
0x2d: Pop(0)
0x2e: @ RemoveActor(Stack[-3])
0x2f: Pop(0)
0x30: @ CameraSwitchToNormal()
0x31: Pop(0)
0x32: PushEmpty(object)
0x33: Call2 0x72

0x34: Pop(0)
0x35: @ RemoveActor(Stack[-1])
0x36: Pop(1)
0x37: Return(); Pop(8)

0x38: Stack[-1] = 0
0x39: Stack[-2] = 0
0x3a: Stack[-3] = 0
0x3b: Stack[-4] = 0
0x3c: PushEmpty()
0x3d: @ CameraSwitchToNormal()
0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(object, object)
0x41: Push("player")
0x42: @ FindActor(Stack[-2], Stack[-1])
0x43: Pop(1)
0x44: Stack[-3] = Stack[-1]
0x45: Return(); Pop(2)

0x46: Stack[-1] = 0
0x47: PushEmpty(bool, int, bool, int)
0x48: Pop(0); Push((bool) Stack[-5] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x4a: Return(); Pop(4)

0x4b: Push("noaccess")
0x4c: @@ HasProperty(Stack[-1], Stack[-3])
0x4d: Pop(1)
0x4e: Push(Stack[-2])
0x4f: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x50: Push("noaccess")
0x51: @@ GetProperty(Stack[-1], Stack[-2])
0x52: Pop(1)
0x53: Push("noaccess")
0x54: Push((int) 1)
0x55: Pop(1); Push(Stack[-3] + Stack[-1]);
0x56: @@ SetProperty(Stack[-2], Stack[-1])
0x57: Pop(2)
0x58: GOTO 0x5d

0x59: Push("noaccess")
0x5a: Push((int) 1)
0x5b: @@ SetProperty(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: Return(); Pop(4)

0x5e: PushEmpty(int, int)
0x5f: Pop(0); Push((bool) Stack[-3] == 0)
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: Return(); Pop(2)

0x62: Push("noaccess")
0x63: @@ GetProperty(Stack[-1], Stack[-2])
0x64: Pop(1)
0x65: Push((int) 1)
0x66: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: Push("noaccess")
0x69: Push((int) 1)
0x6a: Pop(1); Push(Stack[-3] - Stack[-1]);
0x6b: @@ SetProperty(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: GOTO 0x71

0x6e: Push("noaccess")
0x6f: @@ RemoveProperty(Stack[-1])
0x70: Pop(1)
0x71: Return(); Pop(2)

0x72: PushEmpty(object, object)
0x73: @ self(Stack[-1])
0x74: Pop(0)
0x75: Stack[-3] = Stack[-1]
0x76: Return(); Pop(2)

0x77: Stack[-1] = 0
0x78: Push((float)0.5)
0x79: Push((float)0.886)
0x7a: @ SetSepia(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: Return(); Pop(0)

0x7d: Push((int) 0)
0x7e: Push((int) 0)
0x7f: @ SetSepia(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: Return(); Pop(0)

