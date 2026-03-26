GlobalVarCount = 0

Strings:
	W:cs_b6q01_morlok1
	W:cs_play_all.bin
	W:cs_b6q01_morlok2
	W:cs_b6q01_bull
	A:ForceGeometryLoad
	W:space
	W:cs_b6q01.mot
	W:b6q01_dead_bull.xml
	W:quest_b6_01
	W:Bull
	A:SetScriptProperty
	W:sacrifice_end
	W:cleanup
	W:player
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
// @pool_raw:630073005f00620036007100300031005f006d006f0072006c006f006b0031000000630073005f0070006c00610079005f0061006c006c002e00620069006e000000630073005f00620036007100300031005f006d006f0072006c006f006b0032000000630073005f00620036007100300031005f00620075006c006c000000466f72636547656f6d657472794c6f616400730070006100630065000000630073005f00620036007100300031002e006d006f0074000000620036007100300031005f0064006500610064005f00620075006c006c002e0078006d006c000000710075006500730074005f00620036005f00300031000000420075006c006c00000053657453637269707450726f7065727479007300610063007200690066006900630065005f0065006e006400000063006c00650061006e0075007000000070006c00610079006500720000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f706572747900

Import:
	GetMainOutdoorScene (1 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)
	sync (0 args)
	self (1 args)
	AddScriptedActor (6 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_24 Op = 0x66 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object, object, object, object, object)
0x1: @ GetMainOutdoorScene(Stack[-6])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string)
0x4: Stack[-10] = Stack[-3]
0x5: Stack[-2] = "cs_b6q01_morlok1" // @poff=0
0x6: Stack[-1] = "cs_play_all.bin" // @poff=34
0x7: Call2 0xa2

0x8: Stack[-4] = Stack[-9]
0x9: Pop(4)
0xa: PushEmpty(object, object, string, string)
0xb: Stack[-10] = Stack[-3]
0xc: Stack[-2] = "cs_b6q01_morlok2" // @poff=66
0xd: Stack[-1] = "cs_play_all.bin" // @poff=34
0xe: Call2 0xa2

0xf: Stack[-4] = Stack[-8]
0x10: Pop(4)
0x11: PushEmpty(object, object, string, string)
0x12: Stack[-10] = Stack[-3]
0x13: Stack[-2] = "cs_b6q01_bull" // @poff=100
0x14: Stack[-1] = "cs_play_all.bin" // @poff=34
0x15: Call2 0xa2

0x16: Stack[-4] = Stack[-7]
0x17: Pop(4)
0x18: @@ ForceGeometryLoad(); Obj=5 // @poff=128
0x19: Pop(0)
0x1a: @@ ForceGeometryLoad(); Obj=4 // @poff=128
0x1b: Pop(0)
0x1c: @@ ForceGeometryLoad(); Obj=3 // @poff=128
0x1d: Pop(0)
0x1e: PushEmpty(object)
0x1f: Call2 0x6a

0x20: Stack[-1] = Stack[-3]
0x21: Pop(1)
0x22: PushEmpty()
0x23: Call2 0xaa

0x24: Pop(0)
0x25: PushEmpty(object)
0x26: Stack[-3] = Stack[-1]
0x27: Call2 0x71

0x28: Pop(1)
0x29: Push("space") // @poff=146
0x2a: @ RegisterKeyCallback(Stack[-1])
0x2b: Pop(1)
0x2c: Push("cs_b6q01.mot") // @poff=158
0x2d: @ CameraPlay(Stack[-1])
0x2e: Pop(1)
0x2f: @ CameraWaitForPlayFinish()
0x30: Pop(0)
0x31: Push("space") // @poff=146
0x32: @ UnregisterKeyCallback(Stack[-1])
0x33: Pop(1)
0x34: PushEmpty(object)
0x35: Stack[-3] = Stack[-1]
0x36: Call2 0x88

0x37: Pop(1)
0x38: @ CameraSwitchToNormal()
0x39: Pop(0)
0x3a: PushEmpty()
0x3b: Call2 0xaf

0x3c: Pop(0)
0x3d: @ RemoveActor(Stack[-5])
0x3e: Pop(0)
0x3f: @ RemoveActor(Stack[-4])
0x40: Pop(0)
0x41: @ RemoveActor(Stack[-3])
0x42: Pop(0)
0x43: Push("b6q01_bull") // @poff=106
0x44: Push(CVector(0.0, 0.0, 0.0))
0x45: Push(CVector(0.0, 0.0, 1.0))
0x46: Push("b6q01_dead_bull.xml") // @poff=184
0x47: @ AddActor(Stack[-7], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x48: Pop(4)
0x49: Push("quest_b6_01") // @poff=224
0x4a: @ FindActor(Stack[-2], Stack[-1])
0x4b: Pop(1)
0x4c: Push(Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4e: Push("Bull") // @poff=248
0x4f: @@ SetScriptProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=258
0x50: Pop(1)
0x51: Push("sacrifice_end") // @poff=276
0x52: @ Trigger(Stack[-2], Stack[-1])
0x53: Pop(1)
0x54: GOTO 0x5a

0x55: @ sync()
0x56: Pop(0)
0x57: Push("cleanup") // @poff=304
0x58: @ Trigger(Stack[-4], Stack[-1])
0x59: Pop(1)
0x5a: PushEmpty(object)
0x5b: Call2 0x9c

0x5c: Pop(0)
0x5d: @ RemoveActor(Stack[-1])
0x5e: Pop(1)
0x5f: Return(); Pop(12)

0x60: Stack[-1] = 0
0x61: Stack[-2] = 0
0x62: Stack[-3] = 0
0x63: Stack[-4] = 0
0x64: Stack[-5] = 0
0x65: Stack[-6] = 0
0x66: PushEmpty()
0x67: @ CameraSwitchToNormal()
0x68: Pop(0)
0x69: Return(); Pop(0)

0x6a: PushEmpty(object, object)
0x6b: Push("player") // @poff=320
0x6c: @ FindActor(Stack[-2], Stack[-1])
0x6d: Pop(1)
0x6e: Stack[-1] = Stack[-3]
0x6f: Return(); Pop(2)

0x70: Stack[-1] = 0
0x71: PushEmpty(bool, int, bool, int)
0x72: Pop(0); Push((bool) Stack[-5] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x74: Return(); Pop(4)

0x75: Push("noaccess") // @poff=334
0x76: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=352
0x77: Pop(1)
0x78: Push(Stack[-2])
0x79: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7a: Push("noaccess") // @poff=334
0x7b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=364
0x7c: Pop(1)
0x7d: Push("noaccess") // @poff=334
0x7e: Push((int) 1)
0x7f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x80: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=376
0x81: Pop(2)
0x82: GOTO 0x87

0x83: Push("noaccess") // @poff=334
0x84: Push((int) 1)
0x85: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=376
0x86: Pop(2)
0x87: Return(); Pop(4)

0x88: PushEmpty(int, int)
0x89: Pop(0); Push((bool) Stack[-3] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: Return(); Pop(2)

0x8c: Push("noaccess") // @poff=334
0x8d: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=364
0x8e: Pop(1)
0x8f: Push((int) 1)
0x90: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x92: Push("noaccess") // @poff=334
0x93: Push((int) 1)
0x94: Pop(1); Push(Stack[-3] - Stack[-1]);
0x95: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=376
0x96: Pop(2)
0x97: GOTO 0x9b

0x98: Push("noaccess") // @poff=334
0x99: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=388
0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(object, object)
0x9d: @ self(Stack[-1])
0x9e: Pop(0)
0x9f: Stack[-1] = Stack[-3]
0xa0: Return(); Pop(2)

0xa1: Stack[-1] = 0
0xa2: PushEmpty(object, object)
0xa3: Push(CVector(0.0, 0.0, 0.0))
0xa4: Push(CVector(0.0, 0.0, 1.0))
0xa5: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: Stack[-1] = Stack[-6]
0xa8: Return(); Pop(2)

0xa9: Stack[-1] = 0
0xaa: Push((float)0.5)
0xab: Push((float)0.8859999775886536)
0xac: @ SetSepia(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: Return(); Pop(0)

0xaf: Push((int) 0)
0xb0: Push((int) 0)
0xb1: @ SetSepia(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: Return(); Pop(0)

