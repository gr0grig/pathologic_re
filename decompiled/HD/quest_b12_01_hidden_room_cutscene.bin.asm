GlobalVarCount = 0

Strings:
	quest_b12_01
	hidden_room_cutscene_end
	hidden_room
	cs_d12_littlegirl_big
	cs_play_all.bin
	cs_d12_littleboy_big
	ForceGeometryLoad
	player
	cs_d12_hidden_room.mot
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty

Import:
	RemoveActor (1 args)
	GetSceneByName (2 args)
	AddScriptedActor (5 args)
	FindActor (2 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	self (1 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x41 Vars = (int)


0x0: PushEmpty()
0x1: Call2 0xe

0x2: Pop(0)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_b12_01"
0x5: Stack[-1] = "hidden_room_cutscene_end"
0x6: Call2 0x76

0x7: Pop(3)
0x8: PushEmpty(object)
0x9: Call2 0x70

0xa: Pop(0)
0xb: @ RemoveActor(Stack[-1])
0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object, object, object, object, object, object, object)
0xf: Push("hidden_room")
0x10: @ GetSceneByName(Stack[-5], Stack[-1])
0x11: Pop(1)
0x12: Push("cs_d12_littlegirl_big")
0x13: Push("cs_play_all.bin")
0x14: Push(CVector(0.0, 0.0, 0.0))
0x15: @ AddScriptedActor(Stack[-6], Stack[-3], Stack[-2], Stack[-7], Stack[-1])
0x16: Pop(3)
0x17: Push("cs_d12_littleboy_big")
0x18: Push("cs_play_all.bin")
0x19: Push(CVector(0.0, 0.0, 0.0))
0x1a: @ AddScriptedActor(Stack[-5], Stack[-3], Stack[-2], Stack[-7], Stack[-1])
0x1b: Pop(3)
0x1c: @@ ForceGeometryLoad()
0x1d: Pop(0)
0x1e: @@ ForceGeometryLoad()
0x1f: Pop(0)
0x20: Push("player")
0x21: @ FindActor(Stack[-2], Stack[-1])
0x22: Pop(1)
0x23: PushEmpty()
0x24: Call2 0x82

0x25: Pop(0)
0x26: PushEmpty(object)
0x27: Stack[-1] = Stack[-2]
0x28: Call2 0x45

0x29: Pop(1)
0x2a: Push("cs_d12_hidden_room.mot")
0x2b: @ CameraPlay(Stack[-1])
0x2c: Pop(1)
0x2d: @ CameraWaitForPlayFinish()
0x2e: Pop(0)
0x2f: PushEmpty(object)
0x30: Stack[-1] = Stack[-2]
0x31: Call2 0x5c

0x32: Pop(1)
0x33: PushEmpty()
0x34: Call2 0x87

0x35: Pop(0)
0x36: @ RemoveActor(Stack[-3])
0x37: Pop(0)
0x38: @ RemoveActor(Stack[-2])
0x39: Pop(0)
0x3a: @ CameraSwitchToNormal()
0x3b: Pop(0)
0x3c: Return(); Pop(8)

0x3d: Stack[-1] = 0
0x3e: Stack[-2] = 0
0x3f: Stack[-3] = 0
0x40: Stack[-4] = 0
0x41: PushEmpty()
0x42: @ CameraSwitchToNormal()
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(bool, int, bool, int)
0x46: Pop(0); Push((bool) Stack[-5] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x48: Return(); Pop(4)

0x49: Push("noaccess")
0x4a: @@ HasProperty(Stack[-1], Stack[-3])
0x4b: Pop(1)
0x4c: Push(Stack[-2])
0x4d: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x4e: Push("noaccess")
0x4f: @@ GetProperty(Stack[-1], Stack[-2])
0x50: Pop(1)
0x51: Push("noaccess")
0x52: Push((int) 1)
0x53: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54: @@ SetProperty(Stack[-2], Stack[-1])
0x55: Pop(2)
0x56: GOTO 0x5b

0x57: Push("noaccess")
0x58: Push((int) 1)
0x59: @@ SetProperty(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: Return(); Pop(4)

0x5c: PushEmpty(int, int)
0x5d: Pop(0); Push((bool) Stack[-3] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Return(); Pop(2)

0x60: Push("noaccess")
0x61: @@ GetProperty(Stack[-1], Stack[-2])
0x62: Pop(1)
0x63: Push((int) 1)
0x64: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x66: Push("noaccess")
0x67: Push((int) 1)
0x68: Pop(1); Push(Stack[-3] - Stack[-1]);
0x69: @@ SetProperty(Stack[-2], Stack[-1])
0x6a: Pop(2)
0x6b: GOTO 0x6f

0x6c: Push("noaccess")
0x6d: @@ RemoveProperty(Stack[-1])
0x6e: Pop(1)
0x6f: Return(); Pop(2)

0x70: PushEmpty(object, object)
0x71: @ self(Stack[-1])
0x72: Pop(0)
0x73: Stack[-3] = Stack[-1]
0x74: Return(); Pop(2)

0x75: Stack[-1] = 0
0x76: PushEmpty(object, object)
0x77: @ FindActor(Stack[-1], Stack[-4])
0x78: Pop(0)
0x79: Pop(0); Push((bool) Stack[-1] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7b: Stack[-5] = (bool) 0
0x7c: Return(); Pop(2)

0x7d: @ Trigger(Stack[-1], Stack[-3])
0x7e: Pop(0)
0x7f: Stack[-5] = (bool) 1
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
0x82: Push((float)0.5)
0x83: Push((float)0.886)
0x84: @ SetSepia(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: Return(); Pop(0)

0x87: Push((int) 0)
0x88: Push((int) 0)
0x89: @ SetSepia(Stack[-2], Stack[-1])
0x8a: Pop(2)
0x8b: Return(); Pop(0)

