GlobalVarCount = 0

Strings:
	W:cot_anna
	W:cs_k1q01_worker
	W:cs_play_all.bin
	W:cs_k1q01_klara
	W:cs_k1q01_klara.xml
	A:ForceGeometryLoad
	W:space
	W:cs_k1q01.mot
	W:pt_cs_player
	A:GetLocator
	W:quest_k1_01
	W:cutscene_end
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
// @pool_raw:63006f0074005f0061006e006e0061000000630073005f006b0031007100300031005f0077006f0072006b00650072000000630073005f0070006c00610079005f0061006c006c002e00620069006e000000630073005f006b0031007100300031005f006b006c006100720061000000630073005f006b0031007100300031005f006b006c006100720061002e0078006d006c000000466f72636547656f6d657472794c6f616400730070006100630065000000630073005f006b0031007100300031002e006d006f0074000000700074005f00630073005f0070006c00610079006500720000004765744c6f6361746f7200710075006500730074005f006b0031005f003000310000006300750074007300630065006e0065005f0065006e00640000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f706572747900

Import:
	GetSceneByName (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	Teleport (4 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	Trigger (2 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x4d Vars = (int)


0x0: PushEmpty(object, object, object, object, bool, cvector, cvector, object, object, object, object, bool, cvector, cvector)
0x1: Push("cot_anna") // @poff=0
0x2: @ GetSceneByName(Stack[-8], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object, object, string, string)
0x5: Stack[-11] = Stack[-3]
0x6: Stack[-2] = "cs_k1q01_worker" // @poff=18
0x7: Stack[-1] = "cs_play_all.bin" // @poff=50
0x8: Call2 0x91

0x9: Stack[-4] = Stack[-10]
0xa: Pop(4)
0xb: PushEmpty(object, object, string, string)
0xc: Stack[-11] = Stack[-3]
0xd: Stack[-2] = "cs_k1q01_klara" // @poff=82
0xe: Stack[-1] = "cs_k1q01_klara.xml" // @poff=112
0xf: Call2 0x89

0x10: Stack[-4] = Stack[-9]
0x11: Pop(4)
0x12: @@ ForceGeometryLoad(); Obj=6 // @poff=150
0x13: Pop(0)
0x14: @@ ForceGeometryLoad(); Obj=5 // @poff=150
0x15: Pop(0)
0x16: PushEmpty(object)
0x17: Call2 0x51

0x18: Stack[-1] = Stack[-5]
0x19: Pop(1)
0x1a: PushEmpty()
0x1b: Call2 0xa5

0x1c: Pop(0)
0x1d: PushEmpty(object)
0x1e: Stack[-5] = Stack[-1]
0x1f: Call2 0x58

0x20: Pop(1)
0x21: Push("space") // @poff=168
0x22: @ RegisterKeyCallback(Stack[-1])
0x23: Pop(1)
0x24: Push("cs_k1q01.mot") // @poff=180
0x25: @ CameraPlay(Stack[-1])
0x26: Pop(1)
0x27: @ CameraWaitForPlayFinish()
0x28: Pop(0)
0x29: Push("space") // @poff=168
0x2a: @ UnregisterKeyCallback(Stack[-1])
0x2b: Pop(1)
0x2c: PushEmpty(object)
0x2d: Stack[-5] = Stack[-1]
0x2e: Call2 0x6f

0x2f: Pop(1)
0x30: PushEmpty()
0x31: Call2 0xaa

0x32: Pop(0)
0x33: @ CameraSwitchToNormal()
0x34: Pop(0)
0x35: Push("pt_cs_player") // @poff=206
0x36: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=8 // @poff=232
0x37: Pop(1)
0x38: @ Teleport(Stack[-4], Stack[-7], Stack[-2], Stack[-1])
0x39: Pop(0)
0x3a: @ RemoveActor(Stack[-6])
0x3b: Pop(0)
0x3c: @ RemoveActor(Stack[-5])
0x3d: Pop(0)
0x3e: PushEmpty(bool, string, string)
0x3f: Stack[-2] = "quest_k1_01" // @poff=243
0x40: Stack[-1] = "cutscene_end" // @poff=267
0x41: Call2 0x99

0x42: Pop(3)
0x43: PushEmpty(object)
0x44: Call2 0x83

0x45: Pop(0)
0x46: @ RemoveActor(Stack[-1])
0x47: Pop(1)
0x48: Return(); Pop(14)

0x49: Stack[-4] = 0
0x4a: Stack[-5] = 0
0x4b: Stack[-6] = 0
0x4c: Stack[-7] = 0
0x4d: PushEmpty()
0x4e: @ CameraSwitchToNormal()
0x4f: Pop(0)
0x50: Return(); Pop(0)

0x51: PushEmpty(object, object)
0x52: Push("player") // @poff=218
0x53: @ FindActor(Stack[-2], Stack[-1])
0x54: Pop(1)
0x55: Stack[-1] = Stack[-3]
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: PushEmpty(bool, int, bool, int)
0x59: Pop(0); Push((bool) Stack[-5] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Return(); Pop(4)

0x5c: Push("noaccess") // @poff=293
0x5d: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=311
0x5e: Pop(1)
0x5f: Push(Stack[-2])
0x60: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x61: Push("noaccess") // @poff=293
0x62: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=323
0x63: Pop(1)
0x64: Push("noaccess") // @poff=293
0x65: Push((int) 1)
0x66: Pop(1); Push(Stack[-3] + Stack[-1]);
0x67: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=335
0x68: Pop(2)
0x69: GOTO 0x6e

0x6a: Push("noaccess") // @poff=293
0x6b: Push((int) 1)
0x6c: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=335
0x6d: Pop(2)
0x6e: Return(); Pop(4)

0x6f: PushEmpty(int, int)
0x70: Pop(0); Push((bool) Stack[-3] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Return(); Pop(2)

0x73: Push("noaccess") // @poff=293
0x74: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=323
0x75: Pop(1)
0x76: Push((int) 1)
0x77: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: Push("noaccess") // @poff=293
0x7a: Push((int) 1)
0x7b: Pop(1); Push(Stack[-3] - Stack[-1]);
0x7c: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=335
0x7d: Pop(2)
0x7e: GOTO 0x82

0x7f: Push("noaccess") // @poff=293
0x80: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=347
0x81: Pop(1)
0x82: Return(); Pop(2)

0x83: PushEmpty(object, object)
0x84: @ self(Stack[-1])
0x85: Pop(0)
0x86: Stack[-1] = Stack[-3]
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
0x89: PushEmpty(object, object)
0x8a: Push(CVector(0.0, 0.0, 0.0))
0x8b: Push(CVector(0.0, 0.0, 1.0))
0x8c: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x8d: Pop(2)
0x8e: Stack[-1] = Stack[-6]
0x8f: Return(); Pop(2)

0x90: Stack[-1] = 0
0x91: PushEmpty(object, object)
0x92: Push(CVector(0.0, 0.0, 0.0))
0x93: Push(CVector(0.0, 0.0, 1.0))
0x94: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: Stack[-1] = Stack[-6]
0x97: Return(); Pop(2)

0x98: Stack[-1] = 0
0x99: PushEmpty(object, object)
0x9a: @ FindActor(Stack[-1], Stack[-4])
0x9b: Pop(0)
0x9c: Pop(0); PushNull((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9e: Stack[-5] = (bool) 0
0x9f: Return(); Pop(2)

0xa0: @ Trigger(Stack[-1], Stack[-3])
0xa1: Pop(0)
0xa2: Stack[-5] = (bool) 1
0xa3: Return(); Pop(2)

0xa4: Stack[-1] = 0
0xa5: Push((float)0.5)
0xa6: Push((float)0.8859999775886536)
0xa7: @ SetSepia(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: Return(); Pop(0)

0xaa: Push((int) 0)
0xab: Push((int) 0)
0xac: @ SetSepia(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: Return(); Pop(0)

