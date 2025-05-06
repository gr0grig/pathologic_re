GlobalVarCount = 0

Strings:
	warehouse_gangster
	cs_k4q01_grabitel
	cs_play_all.bin
	ForceGeometryLoad
	player
	space
	cs_k4q01_camera.mot
	quest_k4_01
	cutscene_end
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
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	self (1 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x39 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object)
0x1: Push("warehouse_gangster")
0x2: @ GetSceneByName(Stack[-4], Stack[-1])
0x3: Pop(1)
0x4: Push("cs_k4q01_grabitel")
0x5: Push("cs_play_all.bin")
0x6: Push(CVector(0.0, 0.0, 0.0))
0x7: @ AddScriptedActor(Stack[-5], Stack[-3], Stack[-2], Stack[-6], Stack[-1])
0x8: Pop(3)
0x9: @@ ForceGeometryLoad()
0xa: Pop(0)
0xb: Push("player")
0xc: @ FindActor(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: PushEmpty()
0xf: Call2 0x7a

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call2 0x3d

0x14: Pop(1)
0x15: Push("space")
0x16: @ RegisterKeyCallback(Stack[-1])
0x17: Pop(1)
0x18: Push("cs_k4q01_camera.mot")
0x19: @ CameraPlay(Stack[-1])
0x1a: Pop(1)
0x1b: @ CameraWaitForPlayFinish()
0x1c: Pop(0)
0x1d: Push("space")
0x1e: @ UnregisterKeyCallback(Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object)
0x21: Stack[-1] = Stack[-2]
0x22: Call2 0x54

0x23: Pop(1)
0x24: PushEmpty()
0x25: Call2 0x7f

0x26: Pop(0)
0x27: @ RemoveActor(Stack[-2])
0x28: Pop(0)
0x29: @ CameraSwitchToNormal()
0x2a: Pop(0)
0x2b: PushEmpty(bool, string, string)
0x2c: Stack[-2] = "quest_k4_01"
0x2d: Stack[-1] = "cutscene_end"
0x2e: Call2 0x6e

0x2f: Pop(3)
0x30: PushEmpty(object)
0x31: Call2 0x68

0x32: Pop(0)
0x33: @ RemoveActor(Stack[-1])
0x34: Pop(1)
0x35: Return(); Pop(6)

0x36: Stack[-1] = 0
0x37: Stack[-2] = 0
0x38: Stack[-3] = 0
0x39: PushEmpty()
0x3a: @ CameraSwitchToNormal()
0x3b: Pop(0)
0x3c: Return(); Pop(0)

0x3d: PushEmpty(bool, int, bool, int)
0x3e: Pop(0); Push((bool) Stack[-5] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x40: Return(); Pop(4)

0x41: Push("noaccess")
0x42: @@ HasProperty(Stack[-1], Stack[-3])
0x43: Pop(1)
0x44: Push(Stack[-2])
0x45: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x46: Push("noaccess")
0x47: @@ GetProperty(Stack[-1], Stack[-2])
0x48: Pop(1)
0x49: Push("noaccess")
0x4a: Push((int) 1)
0x4b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4c: @@ SetProperty(Stack[-2], Stack[-1])
0x4d: Pop(2)
0x4e: GOTO 0x53

0x4f: Push("noaccess")
0x50: Push((int) 1)
0x51: @@ SetProperty(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: Return(); Pop(4)

0x54: PushEmpty(int, int)
0x55: Pop(0); Push((bool) Stack[-3] == 0)
0x56: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x57: Return(); Pop(2)

0x58: Push("noaccess")
0x59: @@ GetProperty(Stack[-1], Stack[-2])
0x5a: Pop(1)
0x5b: Push((int) 1)
0x5c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: Push("noaccess")
0x5f: Push((int) 1)
0x60: Pop(1); Push(Stack[-3] - Stack[-1]);
0x61: @@ SetProperty(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: GOTO 0x67

0x64: Push("noaccess")
0x65: @@ RemoveProperty(Stack[-1])
0x66: Pop(1)
0x67: Return(); Pop(2)

0x68: PushEmpty(object, object)
0x69: @ self(Stack[-1])
0x6a: Pop(0)
0x6b: Stack[-3] = Stack[-1]
0x6c: Return(); Pop(2)

0x6d: Stack[-1] = 0
0x6e: PushEmpty(object, object)
0x6f: @ FindActor(Stack[-1], Stack[-4])
0x70: Pop(0)
0x71: Pop(0); Push((bool) Stack[-1] == 0)
0x72: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x73: Stack[-5] = (bool) 0
0x74: Return(); Pop(2)

0x75: @ Trigger(Stack[-1], Stack[-3])
0x76: Pop(0)
0x77: Stack[-5] = (bool) 1
0x78: Return(); Pop(2)

0x79: Stack[-1] = 0
0x7a: Push((float)0.5)
0x7b: Push((float)0.886)
0x7c: @ SetSepia(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: Return(); Pop(0)

0x7f: Push((int) 0)
0x80: Push((int) 0)
0x81: @ SetSepia(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: Return(); Pop(0)

