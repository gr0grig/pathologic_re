GlobalVarCount = 0

Strings:
	factory
	cs_factory_grabitel1
	cs_play_all.bin
	cs_factory_grabitel2
	cs_factory_patrol1
	cs_factory_patrol2
	cs_factory_patrol3
	ForceGeometryLoad
	player
	space
	cs_factory1.mot
	cs_d5_factory.ogg
	quest_d5_01
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
	PlayGlobalMusic (1 args)
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
		EVENT_24 Op = 0x63 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object, object, object)
0x1: Push("factory")
0x2: @ GetSceneByName(Stack[-8], Stack[-1])
0x3: Pop(1)
0x4: Push("cs_factory_grabitel1")
0x5: Push("cs_play_all.bin")
0x6: Push(CVector(0.0, 0.0, 0.0))
0x7: @ AddScriptedActor(Stack[-9], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x8: Pop(3)
0x9: Push("cs_factory_grabitel2")
0xa: Push("cs_play_all.bin")
0xb: Push(CVector(0.0, 0.0, 0.0))
0xc: @ AddScriptedActor(Stack[-8], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0xd: Pop(3)
0xe: Push("cs_factory_patrol1")
0xf: Push("cs_play_all.bin")
0x10: Push(CVector(0.0, 0.0, 0.0))
0x11: @ AddScriptedActor(Stack[-7], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x12: Pop(3)
0x13: Push("cs_factory_patrol2")
0x14: Push("cs_play_all.bin")
0x15: Push(CVector(0.0, 0.0, 0.0))
0x16: @ AddScriptedActor(Stack[-6], Stack[-3], Stack[-2], Stack[-10], Stack[-1])
0x17: Pop(3)
0x18: Push("cs_factory_patrol3")
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
0x23: Push("player")
0x24: @ FindActor(Stack[-2], Stack[-1])
0x25: Pop(1)
0x26: PushEmpty()
0x27: Call2 0xa4

0x28: Pop(0)
0x29: PushEmpty(object)
0x2a: Stack[-1] = Stack[-2]
0x2b: Call2 0x67

0x2c: Pop(1)
0x2d: Push("space")
0x2e: @ RegisterKeyCallback(Stack[-1])
0x2f: Pop(1)
0x30: Push("cs_factory1.mot")
0x31: @ CameraPlay(Stack[-1])
0x32: Pop(1)
0x33: Push("cs_d5_factory.ogg")
0x34: @ PlayGlobalMusic(Stack[-1])
0x35: Pop(1)
0x36: @ CameraWaitForPlayFinish()
0x37: Pop(0)
0x38: Push("")
0x39: @ PlayGlobalMusic(Stack[-1])
0x3a: Pop(1)
0x3b: Push("space")
0x3c: @ UnregisterKeyCallback(Stack[-1])
0x3d: Pop(1)
0x3e: PushEmpty(object)
0x3f: Stack[-1] = Stack[-2]
0x40: Call2 0x7e

0x41: Pop(1)
0x42: PushEmpty()
0x43: Call2 0xa9

0x44: Pop(0)
0x45: @ RemoveActor(Stack[-6])
0x46: Pop(0)
0x47: @ RemoveActor(Stack[-5])
0x48: Pop(0)
0x49: @ RemoveActor(Stack[-4])
0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-3])
0x4c: Pop(0)
0x4d: @ RemoveActor(Stack[-2])
0x4e: Pop(0)
0x4f: @ CameraSwitchToNormal()
0x50: Pop(0)
0x51: PushEmpty(bool, string, string)
0x52: Stack[-2] = "quest_d5_01"
0x53: Stack[-1] = "cutscene_end"
0x54: Call2 0x98

0x55: Pop(3)
0x56: PushEmpty(object)
0x57: Call2 0x92

0x58: Pop(0)
0x59: @ RemoveActor(Stack[-1])
0x5a: Pop(1)
0x5b: Return(); Pop(14)

0x5c: Stack[-1] = 0
0x5d: Stack[-2] = 0
0x5e: Stack[-3] = 0
0x5f: Stack[-4] = 0
0x60: Stack[-5] = 0
0x61: Stack[-6] = 0
0x62: Stack[-7] = 0
0x63: PushEmpty()
0x64: @ CameraSwitchToNormal()
0x65: Pop(0)
0x66: Return(); Pop(0)

0x67: PushEmpty(bool, int, bool, int)
0x68: Pop(0); Push((bool) Stack[-5] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Return(); Pop(4)

0x6b: Push("noaccess")
0x6c: @@ HasProperty(Stack[-1], Stack[-3])
0x6d: Pop(1)
0x6e: Push(Stack[-2])
0x6f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x70: Push("noaccess")
0x71: @@ GetProperty(Stack[-1], Stack[-2])
0x72: Pop(1)
0x73: Push("noaccess")
0x74: Push((int) 1)
0x75: Pop(1); Push(Stack[-3] + Stack[-1]);
0x76: @@ SetProperty(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: GOTO 0x7d

0x79: Push("noaccess")
0x7a: Push((int) 1)
0x7b: @@ SetProperty(Stack[-2], Stack[-1])
0x7c: Pop(2)
0x7d: Return(); Pop(4)

0x7e: PushEmpty(int, int)
0x7f: Pop(0); Push((bool) Stack[-3] == 0)
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Return(); Pop(2)

0x82: Push("noaccess")
0x83: @@ GetProperty(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Push((int) 1)
0x86: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x88: Push("noaccess")
0x89: Push((int) 1)
0x8a: Pop(1); Push(Stack[-3] - Stack[-1]);
0x8b: @@ SetProperty(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: GOTO 0x91

0x8e: Push("noaccess")
0x8f: @@ RemoveProperty(Stack[-1])
0x90: Pop(1)
0x91: Return(); Pop(2)

0x92: PushEmpty(object, object)
0x93: @ self(Stack[-1])
0x94: Pop(0)
0x95: Stack[-3] = Stack[-1]
0x96: Return(); Pop(2)

0x97: Stack[-1] = 0
0x98: PushEmpty(object, object)
0x99: @ FindActor(Stack[-1], Stack[-4])
0x9a: Pop(0)
0x9b: Pop(0); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-5] = (bool) 0
0x9e: Return(); Pop(2)

0x9f: @ Trigger(Stack[-1], Stack[-3])
0xa0: Pop(0)
0xa1: Stack[-5] = (bool) 1
0xa2: Return(); Pop(2)

0xa3: Stack[-1] = 0
0xa4: Push((float)0.5)
0xa5: Push((float)0.886)
0xa6: @ SetSepia(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Return(); Pop(0)

0xa9: Push((int) 0)
0xaa: Push((int) 0)
0xab: @ SetSepia(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: Return(); Pop(0)

