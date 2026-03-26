GlobalVarCount = 0

Strings:
	W:pt_avrox
	W:pers_avrox
	W:b11q01_avrox.xml
	W:cs_b11q01_starshina
	W:cs_play_all.bin
	W:cs_b11q01.mot
	W:pt_Starshina
	W:pers_starshina_fight
	W:b11q01_starshina.xml
	W:player
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:700074005f006100760072006f007800000070006500720073005f006100760072006f00780000006200310031007100300031005f006100760072006f0078002e0078006d006c000000630073005f006200310031007100300031005f0073007400610072007300680069006e0061000000630073005f0070006c00610079005f0061006c006c002e00620069006e000000630073005f006200310031007100300031002e006d006f0074000000700074005f0053007400610072007300680069006e006100000070006500720073005f0073007400610072007300680069006e0061005f006600690067006800740000006200310031007100300031005f0073007400610072007300680069006e0061002e0078006d006c00000070006c00610079006500720000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f7065727479004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	Hold (0 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	sync (0 args)
	FindActor (2 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x4 Vars = ()
		EVENT_6 Op = 0x45 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, object, object)
0x5: PushEmpty(object, object, string, string, string)
0x6: PushEmpty(object)
0x7: Call2 0x80

0x8: Stack[-1] = Stack[-5]
0x9: Pop(1)
0xa: Stack[-3] = "pt_avrox" // @poff=0
0xb: Stack[-2] = "pers_avrox" // @poff=18
0xc: Stack[-1] = "b11q01_avrox.xml" // @poff=40
0xd: Call2 0x86

0xe: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0xf: Pop(5)
0x10: PushEmpty(object, object, string, string)
0x11: PushEmpty(object)
0x12: Call2 0x80

0x13: Stack[-1] = Stack[-4]
0x14: Pop(1)
0x15: Stack[-2] = "cs_b11q01_starshina" // @poff=74
0x16: Stack[-1] = "cs_play_all.bin" // @poff=114
0x17: Call2 0x98

0x18: Stack[-4] = Stack[-6]
0x19: Pop(4)
0x1a: PushEmpty(object)
0x1b: Call2 0x4e

0x1c: Stack[-1] = Stack[-2]
0x1d: Pop(1)
0x1e: PushEmpty()
0x1f: Call2 0xa0

0x20: Pop(0)
0x21: PushEmpty(object)
0x22: Stack[-2] = Stack[-1]
0x23: Call2 0x55

0x24: Pop(1)
0x25: Push("cs_b11q01.mot") // @poff=146
0x26: @ CameraPlay(Stack[-1])
0x27: Pop(1)
0x28: @ CameraWaitForPlayFinish()
0x29: Pop(0)
0x2a: PushEmpty(object)
0x2b: Stack[-2] = Stack[-1]
0x2c: Call2 0x6c

0x2d: Pop(1)
0x2e: @ CameraSwitchToNormal()
0x2f: Pop(0)
0x30: PushEmpty()
0x31: Call2 0xa5

0x32: Pop(0)
0x33: @ RemoveActor(Stack[-2])
0x34: Pop(0)
0x35: @ sync()
0x36: Pop(0)
0x37: PushEmpty(object, object, string, string, string)
0x38: PushEmpty(object)
0x39: Call2 0x80

0x3a: Stack[-1] = Stack[-5]
0x3b: Pop(1)
0x3c: Stack[-3] = "pt_Starshina" // @poff=174
0x3d: Stack[-2] = "pers_starshina_fight" // @poff=200
0x3e: Stack[-1] = "b11q01_starshina.xml" // @poff=242
0x3f: Call2 0x86

0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x41: Pop(5)
0x42: Return(); Pop(4)

0x43: Stack[-1] = 0
0x44: Stack[-2] = 0
0x45: Push( Stack[0 + Tasks[-1].StackPointer] )
0x46: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x47: @ RemoveActor(Stack[-0]T)
0x48: Pop(0)
0x49: Push( Stack[1 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4b: @ RemoveActor(Stack[-1]T)
0x4c: Pop(0)
0x4d: Return(); Pop(0)

0x4e: PushEmpty(object, object)
0x4f: Push("player") // @poff=284
0x50: @ FindActor(Stack[-2], Stack[-1])
0x51: Pop(1)
0x52: Stack[-1] = Stack[-3]
0x53: Return(); Pop(2)

0x54: Stack[-1] = 0
0x55: PushEmpty(bool, int, bool, int)
0x56: Pop(0); Push((bool) Stack[-5] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: Return(); Pop(4)

0x59: Push("noaccess") // @poff=298
0x5a: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=316
0x5b: Pop(1)
0x5c: Push(Stack[-2])
0x5d: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x5e: Push("noaccess") // @poff=298
0x5f: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=328
0x60: Pop(1)
0x61: Push("noaccess") // @poff=298
0x62: Push((int) 1)
0x63: Pop(1); Push(Stack[-3] + Stack[-1]);
0x64: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=340
0x65: Pop(2)
0x66: GOTO 0x6b

0x67: Push("noaccess") // @poff=298
0x68: Push((int) 1)
0x69: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=340
0x6a: Pop(2)
0x6b: Return(); Pop(4)

0x6c: PushEmpty(int, int)
0x6d: Pop(0); Push((bool) Stack[-3] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: Return(); Pop(2)

0x70: Push("noaccess") // @poff=298
0x71: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=328
0x72: Pop(1)
0x73: Push((int) 1)
0x74: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x76: Push("noaccess") // @poff=298
0x77: Push((int) 1)
0x78: Pop(1); Push(Stack[-3] - Stack[-1]);
0x79: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=340
0x7a: Pop(2)
0x7b: GOTO 0x7f

0x7c: Push("noaccess") // @poff=298
0x7d: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=352
0x7e: Pop(1)
0x7f: Return(); Pop(2)

0x80: PushEmpty(object, object)
0x81: @ self(Stack[-1])
0x82: Pop(0)
0x83: Stack[-1] = Stack[-3]
0x84: Return(); Pop(2)

0x85: Stack[-1] = 0
0x86: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x87: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=367
0x88: Pop(0)
0x89: Pop(0); Push((bool) Stack[-4] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8b: Push("Locator ") // @poff=378
0x8c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x8d: Push(" doesn't exist") // @poff=396
0x8e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8f: @ Trace(Stack[-1])
0x90: Pop(1)
0x91: Stack[-1] = 0
0x92: GOTO 0x95

0x93: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x94: Pop(0)
0x95: Stack[-1] = Stack[-13]
0x96: Return(); Pop(8)

0x97: Stack[-1] = 0
0x98: PushEmpty(object, object)
0x99: Push(CVector(0.0, 0.0, 0.0))
0x9a: Push(CVector(0.0, 0.0, 1.0))
0x9b: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: Stack[-1] = Stack[-6]
0x9e: Return(); Pop(2)

0x9f: Stack[-1] = 0
0xa0: Push((float)0.5)
0xa1: Push((float)0.8859999775886536)
0xa2: @ SetSepia(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: Return(); Pop(0)

0xa5: Push((int) 0)
0xa6: Push((int) 0)
0xa7: @ SetSepia(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: Return(); Pop(0)

