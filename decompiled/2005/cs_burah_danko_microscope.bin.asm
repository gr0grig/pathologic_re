GlobalVarCount = 0

Strings:
	cot_eva
	cs_burah_danko_microscope
	cs_burah_danko_microscope.xml
	space
	cs_burah_danko_microscope.mot
	quest_b2_01
	cutscene_end
	quest_b3_01
	quest_b4_01
	quest_b5_01
	quest_b6_01
	player
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	GetSceneByName (2 args)
	AddActor (6 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	FindActor (2 args)
	self (1 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x4d Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object)
0x1: Push("cot_eva")
0x2: @ GetSceneByName(Stack[-4], Stack[-1])
0x3: Pop(1)
0x4: Push("cs_burah_danko_microscope")
0x5: Push(CVector(0.0, 0.0, 0.0))
0x6: Push(CVector(0.0, 0.0, 1.0))
0x7: Push("cs_burah_danko_microscope.xml")
0x8: @ AddActor(Stack[-6], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x9: Pop(4)
0xa: PushEmpty(object)
0xb: Call2 0x51

0xc: Stack[-2] = Stack[-1]
0xd: Pop(1)
0xe: PushEmpty()
0xf: Call2 0x95

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call2 0x58

0x14: Pop(1)
0x15: Push("space")
0x16: @ RegisterKeyCallback(Stack[-1])
0x17: Pop(1)
0x18: Push("cs_burah_danko_microscope.mot")
0x19: @ CameraPlay(Stack[-1])
0x1a: Pop(1)
0x1b: @ CameraWaitForPlayFinish()
0x1c: Pop(0)
0x1d: Push("space")
0x1e: @ UnregisterKeyCallback(Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object)
0x21: Stack[-1] = Stack[-2]
0x22: Call2 0x6f

0x23: Pop(1)
0x24: PushEmpty()
0x25: Call2 0x9a

0x26: Pop(0)
0x27: @ RemoveActor(Stack[-2])
0x28: Pop(0)
0x29: @ CameraSwitchToNormal()
0x2a: Pop(0)
0x2b: PushEmpty(bool, string, string)
0x2c: Stack[-2] = "quest_b2_01"
0x2d: Stack[-1] = "cutscene_end"
0x2e: Call2 0x89

0x2f: Pop(3)
0x30: PushEmpty(bool, string, string)
0x31: Stack[-2] = "quest_b3_01"
0x32: Stack[-1] = "cutscene_end"
0x33: Call2 0x89

0x34: Pop(3)
0x35: PushEmpty(bool, string, string)
0x36: Stack[-2] = "quest_b4_01"
0x37: Stack[-1] = "cutscene_end"
0x38: Call2 0x89

0x39: Pop(3)
0x3a: PushEmpty(bool, string, string)
0x3b: Stack[-2] = "quest_b5_01"
0x3c: Stack[-1] = "cutscene_end"
0x3d: Call2 0x89

0x3e: Pop(3)
0x3f: PushEmpty(bool, string, string)
0x40: Stack[-2] = "quest_b6_01"
0x41: Stack[-1] = "cutscene_end"
0x42: Call2 0x89

0x43: Pop(3)
0x44: PushEmpty(object)
0x45: Call2 0x83

0x46: Pop(0)
0x47: @ RemoveActor(Stack[-1])
0x48: Pop(1)
0x49: Return(); Pop(6)

0x4a: Stack[-1] = 0
0x4b: Stack[-2] = 0
0x4c: Stack[-3] = 0
0x4d: PushEmpty()
0x4e: @ CameraSwitchToNormal()
0x4f: Pop(0)
0x50: Return(); Pop(0)

0x51: PushEmpty(object, object)
0x52: Push("player")
0x53: @ FindActor(Stack[-2], Stack[-1])
0x54: Pop(1)
0x55: Stack[-3] = Stack[-1]
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: PushEmpty(bool, int, bool, int)
0x59: Pop(0); Push((bool) Stack[-5] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Return(); Pop(4)

0x5c: Push("noaccess")
0x5d: @@ HasProperty(Stack[-1], Stack[-3])
0x5e: Pop(1)
0x5f: Push(Stack[-2])
0x60: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x61: Push("noaccess")
0x62: @@ GetProperty(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Push("noaccess")
0x65: Push((int) 1)
0x66: Pop(1); Push(Stack[-3] + Stack[-1]);
0x67: @@ SetProperty(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: GOTO 0x6e

0x6a: Push("noaccess")
0x6b: Push((int) 1)
0x6c: @@ SetProperty(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: Return(); Pop(4)

0x6f: PushEmpty(int, int)
0x70: Pop(0); Push((bool) Stack[-3] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Return(); Pop(2)

0x73: Push("noaccess")
0x74: @@ GetProperty(Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: Push((int) 1)
0x77: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: Push("noaccess")
0x7a: Push((int) 1)
0x7b: Pop(1); Push(Stack[-3] - Stack[-1]);
0x7c: @@ SetProperty(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: GOTO 0x82

0x7f: Push("noaccess")
0x80: @@ RemoveProperty(Stack[-1])
0x81: Pop(1)
0x82: Return(); Pop(2)

0x83: PushEmpty(object, object)
0x84: @ self(Stack[-1])
0x85: Pop(0)
0x86: Stack[-3] = Stack[-1]
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
0x89: PushEmpty(object, object)
0x8a: @ FindActor(Stack[-1], Stack[-4])
0x8b: Pop(0)
0x8c: Pop(0); Push((bool) Stack[-1] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-5] = (bool) 0
0x8f: Return(); Pop(2)

0x90: @ Trigger(Stack[-1], Stack[-3])
0x91: Pop(0)
0x92: Stack[-5] = (bool) 1
0x93: Return(); Pop(2)

0x94: Stack[-1] = 0
0x95: Push((float)0.5)
0x96: Push((float)0.886)
0x97: @ SetSepia(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: Return(); Pop(0)

0x9a: Push((int) 0)
0x9b: Push((int) 0)
0x9c: @ SetSepia(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: Return(); Pop(0)

