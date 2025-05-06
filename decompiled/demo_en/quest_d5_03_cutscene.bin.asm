GlobalVarCount = 0

Strings:
	uprava_prison
	cs_uprava_prisoner1
	cs_play_all.bin
	cs_uprava_prisoner2
	cs_uprava_prisoner3
	cs_uprava_prisoner4
	cs_uprava_prisoner5
	ForceGeometryLoad
	player
	space
	cs_uprava_prison1.mot
	cs_d5_uprava.ogg
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	GetSceneByName (2 args)
	AddScriptedActor (5 args)
	FindActor (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	PlayGlobalMusic (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	self (1 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x62 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object, object, object)
0x1: Push("uprava_prison")
0x2: @ GetSceneByName(Stack[-8], Stack[-1])
0x3: Pop(1)
0x4: Push("cs_uprava_prisoner1")
0x5: Push("cs_play_all.bin")
0x6: Push(CVector(0.0, 0.0, 0.0))
0x7: @ AddScriptedActor(Stack[-9], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x8: Pop(3)
0x9: Push("cs_uprava_prisoner2")
0xa: Push("cs_play_all.bin")
0xb: Push(CVector(0.0, 0.0, 0.0))
0xc: @ AddScriptedActor(Stack[-8], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0xd: Pop(3)
0xe: Push("cs_uprava_prisoner3")
0xf: Push("cs_play_all.bin")
0x10: Push(CVector(0.0, 0.0, 0.0))
0x11: @ AddScriptedActor(Stack[-7], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x12: Pop(3)
0x13: Push("cs_uprava_prisoner4")
0x14: Push("cs_play_all.bin")
0x15: Push(CVector(0.0, 0.0, 0.0))
0x16: @ AddScriptedActor(Stack[-6], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x17: Pop(3)
0x18: Push("cs_uprava_prisoner5")
0x19: Push("cs_play_all.bin")
0x1a: Push(CVector(0.0, 0.0, 0.0))
0x1b: @ AddScriptedActor(Stack[-5], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x1c: Pop(3)
0x1d: @@ ForceGeometryLoad()
0x1e: Pop(0)
0x1f: @@ ForceGeometryLoad()
0x20: Pop(0)
0x21: @@ ForceGeometryLoad()
0x22: Pop(0)
0x23: @@ ForceGeometryLoad()
0x24: Pop(0)
0x25: @@ ForceGeometryLoad()
0x26: Pop(0)
0x27: Push("player")
0x28: @ FindActor(Stack[-2], Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty()
0x2b: Call2 0x97

0x2c: Pop(0)
0x2d: PushEmpty(object)
0x2e: Stack[-1] = Stack[-2]
0x2f: Call2 0x66

0x30: Pop(1)
0x31: Push("space")
0x32: @ RegisterKeyCallback(Stack[-1])
0x33: Pop(1)
0x34: Push("cs_uprava_prison1.mot")
0x35: @ CameraPlay(Stack[-1])
0x36: Pop(1)
0x37: Push("cs_d5_uprava.ogg")
0x38: @ PlayGlobalMusic(Stack[-1])
0x39: Pop(1)
0x3a: @ CameraWaitForPlayFinish()
0x3b: Pop(0)
0x3c: Push("")
0x3d: @ PlayGlobalMusic(Stack[-1])
0x3e: Pop(1)
0x3f: Push("space")
0x40: @ UnregisterKeyCallback(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(object)
0x43: Stack[-1] = Stack[-2]
0x44: Call2 0x7d

0x45: Pop(1)
0x46: PushEmpty()
0x47: Call2 0x9c

0x48: Pop(0)
0x49: @ RemoveActor(Stack[-6])
0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-5])
0x4c: Pop(0)
0x4d: @ RemoveActor(Stack[-4])
0x4e: Pop(0)
0x4f: @ RemoveActor(Stack[-3])
0x50: Pop(0)
0x51: @ RemoveActor(Stack[-2])
0x52: Pop(0)
0x53: @ CameraSwitchToNormal()
0x54: Pop(0)
0x55: PushEmpty(object)
0x56: Call2 0x91

0x57: Pop(0)
0x58: @ RemoveActor(Stack[-1])
0x59: Pop(1)
0x5a: Return(); Pop(14)

0x5b: Stack[-1] = 0
0x5c: Stack[-2] = 0
0x5d: Stack[-3] = 0
0x5e: Stack[-4] = 0
0x5f: Stack[-5] = 0
0x60: Stack[-6] = 0
0x61: Stack[-7] = 0
0x62: PushEmpty()
0x63: @ CameraSwitchToNormal()
0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: PushEmpty(bool, int, bool, int)
0x67: Pop(0); Push((bool) Stack[-5] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: Return(); Pop(4)

0x6a: Push("noaccess")
0x6b: @@ HasProperty(Stack[-1], Stack[-3])
0x6c: Pop(1)
0x6d: Push(Stack[-2])
0x6e: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x6f: Push("noaccess")
0x70: @@ GetProperty(Stack[-1], Stack[-2])
0x71: Pop(1)
0x72: Push("noaccess")
0x73: Push((int) 1)
0x74: Pop(1); Push(Stack[-3] + Stack[-1]);
0x75: @@ SetProperty(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: GOTO 0x7c

0x78: Push("noaccess")
0x79: Push((int) 1)
0x7a: @@ SetProperty(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: Return(); Pop(4)

0x7d: PushEmpty(int, int)
0x7e: Pop(0); Push((bool) Stack[-3] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Return(); Pop(2)

0x81: Push("noaccess")
0x82: @@ GetProperty(Stack[-1], Stack[-2])
0x83: Pop(1)
0x84: Push((int) 1)
0x85: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: Push("noaccess")
0x88: Push((int) 1)
0x89: Pop(1); Push(Stack[-3] - Stack[-1]);
0x8a: @@ SetProperty(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x90

0x8d: Push("noaccess")
0x8e: @@ RemoveProperty(Stack[-1])
0x8f: Pop(1)
0x90: Return(); Pop(2)

0x91: PushEmpty(object, object)
0x92: @ self(Stack[-1])
0x93: Pop(0)
0x94: Stack[-3] = Stack[-1]
0x95: Return(); Pop(2)

0x96: Stack[-1] = 0
0x97: Push((float)0.5)
0x98: Push((float)0.886)
0x99: @ SetSepia(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: Return(); Pop(0)

0x9c: Push((int) 0)
0x9d: Push((int) 0)
0x9e: @ SetSepia(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: Return(); Pop(0)

