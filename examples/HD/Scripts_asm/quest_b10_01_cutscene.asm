GlobalVarCount = 0

Strings:
	W:cs_b10q01_burah
	W:cs_b10q01_burah.xml
	W:cs_b10q01_whitemask
	W:cs_play_all.bin
	A:ForceGeometryLoad
	W:space
	W:cs_b10q01.mot
	W:quest_b10_01
	W:place_butchers
	W:player
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
// @pool_raw:630073005f006200310030007100300031005f00620075007200610068000000630073005f006200310030007100300031005f00620075007200610068002e0078006d006c000000630073005f006200310030007100300031005f00770068006900740065006d00610073006b000000630073005f0070006c00610079005f0061006c006c002e00620069006e000000466f72636547656f6d657472794c6f616400730070006100630065000000630073005f006200310030007100300031002e006d006f0074000000710075006500730074005f006200310030005f0030003100000070006c006100630065005f0062007500740063006800650072007300000070006c00610079006500720000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f706572747900

Import:
	GetMainOutdoorScene (1 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	CameraSwitchToNormal (0 args)
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
		EVENT_24 Op = 0x47 Vars = (int)


0x0: PushEmpty(object, object, object, object, object, object, object, object)
0x1: @ GetMainOutdoorScene(Stack[-4])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string)
0x4: Stack[-8] = Stack[-3]
0x5: Stack[-2] = "cs_b10q01_burah" // @poff=0
0x6: Stack[-1] = "cs_b10q01_burah.xml" // @poff=32
0x7: Call2 0x83

0x8: Stack[-4] = Stack[-7]
0x9: Pop(4)
0xa: PushEmpty(object, object, string, string)
0xb: Stack[-8] = Stack[-3]
0xc: Stack[-2] = "cs_b10q01_whitemask" // @poff=72
0xd: Stack[-1] = "cs_play_all.bin" // @poff=112
0xe: Call2 0x8b

0xf: Stack[-4] = Stack[-6]
0x10: Pop(4)
0x11: @@ ForceGeometryLoad(); Obj=3 // @poff=144
0x12: Pop(0)
0x13: @@ ForceGeometryLoad(); Obj=2 // @poff=144
0x14: Pop(0)
0x15: PushEmpty(object)
0x16: Call2 0x4b

0x17: Stack[-1] = Stack[-2]
0x18: Pop(1)
0x19: PushEmpty()
0x1a: Call2 0x9f

0x1b: Pop(0)
0x1c: PushEmpty(object)
0x1d: Stack[-2] = Stack[-1]
0x1e: Call2 0x52

0x1f: Pop(1)
0x20: Push("space") // @poff=162
0x21: @ RegisterKeyCallback(Stack[-1])
0x22: Pop(1)
0x23: Push("cs_b10q01.mot") // @poff=174
0x24: @ CameraPlay(Stack[-1])
0x25: Pop(1)
0x26: @ CameraWaitForPlayFinish()
0x27: Pop(0)
0x28: Push("space") // @poff=162
0x29: @ UnregisterKeyCallback(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty(object)
0x2c: Stack[-2] = Stack[-1]
0x2d: Call2 0x69

0x2e: Pop(1)
0x2f: PushEmpty()
0x30: Call2 0xa4

0x31: Pop(0)
0x32: @ CameraSwitchToNormal()
0x33: Pop(0)
0x34: @ RemoveActor(Stack[-3])
0x35: Pop(0)
0x36: @ RemoveActor(Stack[-2])
0x37: Pop(0)
0x38: PushEmpty(bool, string, string)
0x39: Stack[-2] = "quest_b10_01" // @poff=202
0x3a: Stack[-1] = "place_butchers" // @poff=228
0x3b: Call2 0x93

0x3c: Pop(3)
0x3d: PushEmpty(object)
0x3e: Call2 0x7d

0x3f: Pop(0)
0x40: @ RemoveActor(Stack[-1])
0x41: Pop(1)
0x42: Return(); Pop(8)

0x43: Stack[-1] = 0
0x44: Stack[-2] = 0
0x45: Stack[-3] = 0
0x46: Stack[-4] = 0
0x47: PushEmpty()
0x48: @ CameraSwitchToNormal()
0x49: Pop(0)
0x4a: Return(); Pop(0)

0x4b: PushEmpty(object, object)
0x4c: Push("player") // @poff=258
0x4d: @ FindActor(Stack[-2], Stack[-1])
0x4e: Pop(1)
0x4f: Stack[-1] = Stack[-3]
0x50: Return(); Pop(2)

0x51: Stack[-1] = 0
0x52: PushEmpty(bool, int, bool, int)
0x53: Pop(0); Push((bool) Stack[-5] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: Return(); Pop(4)

0x56: Push("noaccess") // @poff=272
0x57: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=290
0x58: Pop(1)
0x59: Push(Stack[-2])
0x5a: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5b: Push("noaccess") // @poff=272
0x5c: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=302
0x5d: Pop(1)
0x5e: Push("noaccess") // @poff=272
0x5f: Push((int) 1)
0x60: Pop(1); Push(Stack[-3] + Stack[-1]);
0x61: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=314
0x62: Pop(2)
0x63: GOTO 0x68

0x64: Push("noaccess") // @poff=272
0x65: Push((int) 1)
0x66: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=314
0x67: Pop(2)
0x68: Return(); Pop(4)

0x69: PushEmpty(int, int)
0x6a: Pop(0); Push((bool) Stack[-3] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Return(); Pop(2)

0x6d: Push("noaccess") // @poff=272
0x6e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=302
0x6f: Pop(1)
0x70: Push((int) 1)
0x71: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x73: Push("noaccess") // @poff=272
0x74: Push((int) 1)
0x75: Pop(1); Push(Stack[-3] - Stack[-1]);
0x76: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=314
0x77: Pop(2)
0x78: GOTO 0x7c

0x79: Push("noaccess") // @poff=272
0x7a: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=326
0x7b: Pop(1)
0x7c: Return(); Pop(2)

0x7d: PushEmpty(object, object)
0x7e: @ self(Stack[-1])
0x7f: Pop(0)
0x80: Stack[-1] = Stack[-3]
0x81: Return(); Pop(2)

0x82: Stack[-1] = 0
0x83: PushEmpty(object, object)
0x84: Push(CVector(0.0, 0.0, 0.0))
0x85: Push(CVector(0.0, 0.0, 1.0))
0x86: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x87: Pop(2)
0x88: Stack[-1] = Stack[-6]
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
0x8b: PushEmpty(object, object)
0x8c: Push(CVector(0.0, 0.0, 0.0))
0x8d: Push(CVector(0.0, 0.0, 1.0))
0x8e: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: Stack[-1] = Stack[-6]
0x91: Return(); Pop(2)

0x92: Stack[-1] = 0
0x93: PushEmpty(object, object)
0x94: @ FindActor(Stack[-1], Stack[-4])
0x95: Pop(0)
0x96: Pop(0); PushNull((bool) Stack[-1] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-5] = (bool) 0
0x99: Return(); Pop(2)

0x9a: @ Trigger(Stack[-1], Stack[-3])
0x9b: Pop(0)
0x9c: Stack[-5] = (bool) 1
0x9d: Return(); Pop(2)

0x9e: Stack[-1] = 0
0x9f: Push((float)0.5)
0xa0: Push((float)0.8859999775886536)
0xa1: @ SetSepia(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: Return(); Pop(0)

0xa4: Push((int) 0)
0xa5: Push((int) 0)
0xa6: @ SetSepia(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Return(); Pop(0)

