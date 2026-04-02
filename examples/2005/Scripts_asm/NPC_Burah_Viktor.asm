GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	W:icot_viktor_NPC_Trigger
	W:stand
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:ui/NPC_Viktor.png
	W:ui/NPC_Viktor_b.png
	W:b7q01
	W:b7q01DankoGotoSobor
	W:pt_map_aglaja
	A:AddMark
	W:quest_b7_01
	W:place_aglaja
	W:oob6Viktor1
	W:b6q03ViktorGotoMaria
	W:pt_map_maria
	W:cot_maria@door1
	W:b6ViktorVisit
	W:playsound
	W:mapmark
	W:b6q03NinaTalk
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	W:branch
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000690063006f0074005f00760069006b0074006f0072005f004e00500043005f00540072006900670067006500720000007300740061006e0064000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d00000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900750069002f004e00500043005f00560069006b0074006f0072002e0070006e0067000000750069002f004e00500043005f00560069006b0074006f0072005f0062002e0070006e006700000062003700710030003100000062003700710030003100440061006e006b006f0047006f0074006f0053006f0062006f0072000000700074005f006d00610070005f00610067006c0061006a00610000004164644d61726b00710075006500730074005f00620037005f0030003100000070006c006100630065005f00610067006c0061006a00610000006f006f0062003600560069006b0074006f0072003100000062003600710030003300560069006b0074006f00720047006f0074006f004d0061007200690061000000700074005f006d00610070005f006d006100720069006100000063006f0074005f006d006100720069006100400064006f006f0072003100000062003600560069006b0074006f00720056006900730069007400000070006c006100790073006f0075006e00640000006d00610070006d00610072006b000000620036007100300033004e0069006e006100540061006c006b000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170006200720061006e00630068000000
// @pool_encoding:utf8

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	SetPosition (1 args)
	SetDirection (1 args)
	LockAnimation (3 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x64f
RunTask = 11

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b1 Vars = (int, int)
	GTASK_5 Vars = (object) Params = 2
	GTASK_6 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2be Vars = (int, int)
	GTASK_7 Vars = (object) Params = 2
	GTASK_8 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x498 Vars = (int, int)
	GTASK_9 Vars = (object) Params = 2
	GTASK_10 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x625 Vars = (int, int)
	GTASK_11 Vars = (bool, cvector, cvector) Params = 0
		EVENT_26 Op = 0x656 Vars = (string)
		EVENT_6 Op = 0x68f Vars = ()
		EVENT_0 Op = 0x698 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x6bd

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf: PushEmpty(bool, object)
0x10: PushEmpty(object)
0x11: Call2 0x7c4

0x12: Stack[-1] = Stack[-2]
0x13: Pop(1)
0x14: Call2 0x717

0x15: Pop(2)
0x16: PushEmpty(bool, object, float)
0x17: Stack[-12] = Stack[-2]
0x18: Stack[-1] = (float) 70.0
0x19: Call2 0x6c2

0x1a: Pop(2)
0x1b: Pop(1); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1d: Stack[-10] = (int) -2
0x1e: Return(); Pop(8)

0x1f: @ CreateDialog(Stack[-4])
0x20: Pop(0)
0x21: PushEmpty(int)
0x22: Call2 0x80c

0x23: Pop(0)
0x24: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x25: Pop(1)
0x26: PushEmpty(int)
0x27: Call2 0x80a

0x28: Pop(0)
0x29: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x2a: Pop(1)
0x2b: PushEmpty(string)
0x2c: Call2 0x80e

0x2d: Pop(0)
0x2e: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x2f: Pop(1)
0x30: PushEmpty(string)
0x31: Call2 0x810

0x32: Pop(0)
0x33: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x34: Pop(1)
0x35: PushEmpty(int)
0x36: Call2 0x8c4

0x37: Pop(0)
0x38: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x39: Pop(1)
0x3a: Stack[-2] = (int) -1
0x3b: @ IsOverrideActive(Stack[-3])
0x3c: Pop(0)
0x3d: Push(Stack[-3])
0x3e: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3f: Stack[-10] = (int) -2
0x40: Return(); Pop(8)

0x41: @ DoDialog(Stack[-4])
0x42: Pop(0)
0x43: PushEmpty(object, object)
0x44: Stack[-11] = Stack[-2]
0x45: Stack[-6] = Stack[-1]
0x46: Push(-2, 4); TaskCall(2)
0x47: Call2 0x5e

0x48: Pop(-2, 4); TaskReturn
0x49: Pop(2)
0x4a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x4b: Pop(0)
0x4c: Pop(0); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4e: @ sync()
0x4f: Pop(0)
0x50: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x51: Pop(0)
0x52: GOTO 0x4c

0x53: PushEmpty(object)
0x54: Stack[-10] = Stack[-1]
0x55: Call2 0x706

0x56: Pop(1)
0x57: @ StopDialog(Stack[-4])
0x58: Pop(0)
0x59: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5a: Pop(0)
0x5b: Stack[-2] = Stack[-10]
0x5c: Return(); Pop(8)

0x5d: Stack[-4] = 0
0x5e: PushEmpty()
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x60: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62: Push((int) 1)
0x63: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral" // @poff=89
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 535231)
0x69: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x6a: Pop(1)
0x6b: @@@ ClearReplies(); Obj=0 // @poff=116
0x6c: Pop(0)
0x6d: Push((int) 535232)
0x6e: Push((int) 36953)
0x6f: Push((int) 36907)
0x70: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x71: Pop(3)
0x72: Push((int) 535233)
0x73: Push((int) -1)
0x74: Push((int) 36908)
0x75: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x76: Pop(3)
0x77: Push((int) 535280)
0x78: Push((int) -1)
0x79: Push((int) 36956)
0x7a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x62

0x7f: PushEmpty(bool)
0x80: Call2 0x812

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x7a1

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all") // @poff=138
0x8f: Push("idle") // @poff=146
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all") // @poff=138
0x98: Push("idle") // @poff=146
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x812

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-3] = Stack[-2]
0xa9: Push("") // @poff=102
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x7a8

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x7bd

0xb8: Pop(0)
0xb9: Push((int) 36906)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xbc: PushEmpty(string)
0xbd: Stack[-1] = "Neutral" // @poff=89
0xbe: Call2 0x9d

0xbf: Pop(1)
0xc0: Push((int) 535231)
0xc1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc2: Pop(1)
0xc3: @@@ ClearReplies(); Obj=0 // @poff=116
0xc4: Pop(0)
0xc5: Push((int) 535232)
0xc6: Push((int) 36953)
0xc7: Push((int) 36907)
0xc8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc9: Pop(3)
0xca: Push((int) 535233)
0xcb: Push((int) -1)
0xcc: Push((int) 36908)
0xcd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xce: Pop(3)
0xcf: Push((int) 535280)
0xd0: Push((int) -1)
0xd1: Push((int) 36956)
0xd2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 36953)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral" // @poff=89
0xda: Call2 0x9d

0xdb: Pop(1)
0xdc: Push((int) 535277)
0xdd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xde: Pop(1)
0xdf: @@@ ClearReplies(); Obj=0 // @poff=116
0xe0: Pop(0)
0xe1: Push((int) 535278)
0xe2: Push((int) 36957)
0xe3: Push((int) 36954)
0xe4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xe5: Pop(3)
0xe6: Push((int) 535279)
0xe7: Push((int) 36957)
0xe8: Push((int) 36955)
0xe9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 36957)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral" // @poff=89
0xf1: Call2 0x9d

0xf2: Pop(1)
0xf3: Push((int) 535281)
0xf4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xf5: Pop(1)
0xf6: @@@ ClearReplies(); Obj=0 // @poff=116
0xf7: Pop(0)
0xf8: Push((int) 535282)
0xf9: Push((int) -1)
0xfa: Push((int) 36958)
0xfb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xfc: Pop(3)
0xfd: Push((int) 535283)
0xfe: Push((int) -1)
0xff: Push((int) 36959)
0x100: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x812

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xb4

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object)
0x113: PushEmpty(object)
0x114: Call2 0x7c4

0x115: Stack[-1] = Stack[-2]
0x116: Pop(1)
0x117: Call2 0x717

0x118: Pop(2)
0x119: PushEmpty(bool, object, float)
0x11a: Stack[-12] = Stack[-2]
0x11b: Stack[-1] = (float) 70.0
0x11c: Call2 0x6c2

0x11d: Pop(2)
0x11e: Pop(1); Push((bool) Stack[-1] == 0)
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-10] = (int) -2
0x121: Return(); Pop(8)

0x122: @ CreateDialog(Stack[-4])
0x123: Pop(0)
0x124: PushEmpty(int)
0x125: Call2 0x80c

0x126: Pop(0)
0x127: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x128: Pop(1)
0x129: PushEmpty(int)
0x12a: Call2 0x80a

0x12b: Pop(0)
0x12c: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x12d: Pop(1)
0x12e: PushEmpty(string)
0x12f: Call2 0x80e

0x130: Pop(0)
0x131: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x132: Pop(1)
0x133: PushEmpty(string)
0x134: Call2 0x810

0x135: Pop(0)
0x136: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x137: Pop(1)
0x138: PushEmpty(int)
0x139: Call2 0x8c4

0x13a: Pop(0)
0x13b: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x13c: Pop(1)
0x13d: Stack[-2] = (int) -1
0x13e: @ IsOverrideActive(Stack[-3])
0x13f: Pop(0)
0x140: Push(Stack[-3])
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ DoDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(object, object)
0x147: Stack[-11] = Stack[-2]
0x148: Stack[-6] = Stack[-1]
0x149: Push(-2, 4); TaskCall(4)
0x14a: Call2 0x161

0x14b: Pop(-2, 4); TaskReturn
0x14c: Pop(2)
0x14d: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-1] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: @ sync()
0x152: Pop(0)
0x153: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x154: Pop(0)
0x155: GOTO 0x14f

0x156: PushEmpty(object)
0x157: Stack[-10] = Stack[-1]
0x158: Call2 0x706

0x159: Pop(1)
0x15a: @ StopDialog(Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x15d: Pop(0)
0x15e: Stack[-2] = Stack[-10]
0x15f: Return(); Pop(8)

0x160: Stack[-4] = 0
0x161: PushEmpty()
0x162: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x163: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x164: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x165: Push((int) 1)
0x166: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral" // @poff=89
0x169: Call2 0x19b

0x16a: Pop(1)
0x16b: Push((int) 518051)
0x16c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16d: Pop(1)
0x16e: @@@ ClearReplies(); Obj=0 // @poff=116
0x16f: Pop(0)
0x170: Push((int) 518052)
0x171: Push((int) 29827)
0x172: Push((int) 19185)
0x173: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x174: Pop(3)
0x175: Push((int) 528440)
0x176: Push((int) -1)
0x177: Push((int) 29826)
0x178: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x179: Pop(3)
0x17a: GOTO 0x17d

0x17b: Return(); Pop(0)

0x17c: GOTO 0x165

0x17d: PushEmpty(bool)
0x17e: Call2 0x812

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x181: @ lshWaitForAnimEnd()
0x182: Pop(0)
0x183: Push( Stack[3 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: GOTO 0x18b

0x186: PushEmpty(string)
0x187: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x188: Call2 0x7a1

0x189: Pop(1)
0x18a: GOTO 0x181

0x18b: GOTO 0x19a

0x18c: Push("all") // @poff=138
0x18d: Push("idle") // @poff=146
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd()
0x191: Pop(0)
0x192: Push( Stack[3 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19a

0x195: Push("all") // @poff=138
0x196: Push("idle") // @poff=146
0x197: @ PlayAnimation(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: GOTO 0x190

0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool)
0x19d: Call2 0x812

0x19e: Pop(0)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(string, bool)
0x1a6: Stack[-3] = Stack[-2]
0x1a7: Push("") // @poff=102
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-1] = (bool) 0
0x1ab: GOTO 0x1ad

0x1ac: Stack[-1] = (bool) 1
0x1ad: Call2 0x7a8

0x1ae: Pop(2)
0x1af: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push((int) 1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x7bd

0x1b6: Pop(0)
0x1b7: Push((int) 19184)
0x1b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ba: PushEmpty(string)
0x1bb: Stack[-1] = "Neutral" // @poff=89
0x1bc: Call2 0x19b

0x1bd: Pop(1)
0x1be: Push((int) 518051)
0x1bf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c0: Pop(1)
0x1c1: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c2: Pop(0)
0x1c3: Push((int) 518052)
0x1c4: Push((int) 29827)
0x1c5: Push((int) 19185)
0x1c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1c7: Pop(3)
0x1c8: Push((int) 528440)
0x1c9: Push((int) -1)
0x1ca: Push((int) 29826)
0x1cb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cc: Pop(3)
0x1cd: Return(); Pop(0)

0x1ce: Push((int) 29827)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d1: PushEmpty(string)
0x1d2: Stack[-1] = "Neutral" // @poff=89
0x1d3: Call2 0x19b

0x1d4: Pop(1)
0x1d5: Push((int) 528441)
0x1d6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1d7: Pop(1)
0x1d8: @@@ ClearReplies(); Obj=0 // @poff=116
0x1d9: Pop(0)
0x1da: Push((int) 528442)
0x1db: Push((int) 29830)
0x1dc: Push((int) 29828)
0x1dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1de: Pop(3)
0x1df: Push((int) 528443)
0x1e0: Push((int) -1)
0x1e1: Push((int) 29829)
0x1e2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 29830)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Neutral" // @poff=89
0x1ea: Call2 0x19b

0x1eb: Pop(1)
0x1ec: Push((int) 528444)
0x1ed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1ee: Pop(1)
0x1ef: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f0: Pop(0)
0x1f1: Push((int) 528445)
0x1f2: Push((int) -1)
0x1f3: Push((int) 29831)
0x1f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1f5: Pop(3)
0x1f6: Push((int) 528446)
0x1f7: Push((int) -1)
0x1f8: Push((int) 29832)
0x1f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fd: PushEmpty(bool)
0x1fe: Call2 0x812

0x1ff: Pop(0)
0x200: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x201: @ lshStopAnimation()
0x202: Pop(0)
0x203: GOTO 0x206

0x204: @ StopAnimation()
0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: GOTO 0x1b2

0x208: Return(); Pop(0)

0x209: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x20a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x20b: PushEmpty(bool, object)
0x20c: PushEmpty(object)
0x20d: Call2 0x7c4

0x20e: Stack[-1] = Stack[-2]
0x20f: Pop(1)
0x210: Call2 0x717

0x211: Pop(2)
0x212: PushEmpty(bool, object, float)
0x213: Stack[-12] = Stack[-2]
0x214: Stack[-1] = (float) 70.0
0x215: Call2 0x6c2

0x216: Pop(2)
0x217: Pop(1); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: Stack[-10] = (int) -2
0x21a: Return(); Pop(8)

0x21b: @ CreateDialog(Stack[-4])
0x21c: Pop(0)
0x21d: PushEmpty(int)
0x21e: Call2 0x80c

0x21f: Pop(0)
0x220: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x221: Pop(1)
0x222: PushEmpty(int)
0x223: Call2 0x80a

0x224: Pop(0)
0x225: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x226: Pop(1)
0x227: PushEmpty(string)
0x228: Call2 0x80e

0x229: Pop(0)
0x22a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x22b: Pop(1)
0x22c: PushEmpty(string)
0x22d: Call2 0x810

0x22e: Pop(0)
0x22f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x230: Pop(1)
0x231: PushEmpty(int)
0x232: Call2 0x8c4

0x233: Pop(0)
0x234: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x235: Pop(1)
0x236: Stack[-2] = (int) -1
0x237: @ IsOverrideActive(Stack[-3])
0x238: Pop(0)
0x239: Push(Stack[-3])
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: Stack[-10] = (int) -2
0x23c: Return(); Pop(8)

0x23d: @ DoDialog(Stack[-4])
0x23e: Pop(0)
0x23f: PushEmpty(object, object)
0x240: Stack[-11] = Stack[-2]
0x241: Stack[-6] = Stack[-1]
0x242: Push(-2, 4); TaskCall(6)
0x243: Call2 0x25a

0x244: Pop(-2, 4); TaskReturn
0x245: Pop(2)
0x246: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x247: Pop(0)
0x248: Pop(0); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24a: @ sync()
0x24b: Pop(0)
0x24c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x24d: Pop(0)
0x24e: GOTO 0x248

0x24f: PushEmpty(object)
0x250: Stack[-10] = Stack[-1]
0x251: Call2 0x706

0x252: Pop(1)
0x253: @ StopDialog(Stack[-4])
0x254: Pop(0)
0x255: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x256: Pop(0)
0x257: Stack[-2] = Stack[-10]
0x258: Return(); Pop(8)

0x259: Stack[-4] = 0
0x25a: PushEmpty()
0x25b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x25c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x25d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25e: Push((int) 1)
0x25f: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x260: PushEmpty(bool, object)
0x261: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x262: Call2 0x871

0x263: Pop(1)
0x264: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral" // @poff=89
0x267: Call2 0x2a8

0x268: Pop(1)
0x269: Push((int) 521037)
0x26a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x26b: Pop(1)
0x26c: @@@ ClearReplies(); Obj=0 // @poff=116
0x26d: Pop(0)
0x26e: Push((int) 528490)
0x26f: Push((int) 29880)
0x270: Push((int) 29879)
0x271: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x272: Pop(3)
0x273: Push((int) 528510)
0x274: Push((int) 29882)
0x275: Push((int) 29899)
0x276: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x277: Pop(3)
0x278: GOTO 0x28a

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Neutral" // @poff=89
0x27b: Call2 0x2a8

0x27c: Pop(1)
0x27d: Push((int) 521039)
0x27e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x27f: Pop(1)
0x280: @@@ ClearReplies(); Obj=0 // @poff=116
0x281: Pop(0)
0x282: Push((int) 521040)
0x283: Push((int) -1)
0x284: Push((int) 22236)
0x285: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x286: Pop(3)
0x287: GOTO 0x28a

0x288: Return(); Pop(0)

0x289: GOTO 0x25e

0x28a: PushEmpty(bool)
0x28b: Call2 0x812

0x28c: Pop(0)
0x28d: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28e: @ lshWaitForAnimEnd()
0x28f: Pop(0)
0x290: Push( Stack[3 + Tasks[-1].StackPointer] )
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x298

0x293: PushEmpty(string)
0x294: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x295: Call2 0x7a1

0x296: Pop(1)
0x297: GOTO 0x28e

0x298: GOTO 0x2a7

0x299: Push("all") // @poff=138
0x29a: Push("idle") // @poff=146
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: @ WaitForAnimEnd()
0x29e: Pop(0)
0x29f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2a7

0x2a2: Push("all") // @poff=138
0x2a3: Push("idle") // @poff=146
0x2a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a5: Pop(2)
0x2a6: GOTO 0x29d

0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: PushEmpty(bool)
0x2aa: Call2 0x812

0x2ab: Pop(0)
0x2ac: Pop(1); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Return(); Pop(0)

0x2af: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(string, bool)
0x2b3: Stack[-3] = Stack[-2]
0x2b4: Push("") // @poff=102
0x2b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b7: Stack[-1] = (bool) 0
0x2b8: GOTO 0x2ba

0x2b9: Stack[-1] = (bool) 1
0x2ba: Call2 0x7a8

0x2bb: Pop(2)
0x2bc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2bd: Return(); Pop(0)

0x2be: PushEmpty()
0x2bf: Push((int) 1)
0x2c0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x2c1: PushEmpty()
0x2c2: Call2 0x7bd

0x2c3: Pop(0)
0x2c4: Push((int) 22234)
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(object, object)
0x2c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0x814

0x2cb: Pop(2)
0x2cc: Push((int) 22233)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Call2 0x871

0x2d2: Pop(1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d4: PushEmpty(string)
0x2d5: Stack[-1] = "Neutral" // @poff=89
0x2d6: Call2 0x2a8

0x2d7: Pop(1)
0x2d8: Push((int) 521037)
0x2d9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2da: Pop(1)
0x2db: @@@ ClearReplies(); Obj=0 // @poff=116
0x2dc: Pop(0)
0x2dd: Push((int) 528490)
0x2de: Push((int) 29880)
0x2df: Push((int) 29879)
0x2e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e1: Pop(3)
0x2e2: Push((int) 528510)
0x2e3: Push((int) 29882)
0x2e4: Push((int) 29899)
0x2e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2e6: Pop(3)
0x2e7: Return(); Pop(0)

0x2e8: PushEmpty(string)
0x2e9: Stack[-1] = "Neutral" // @poff=89
0x2ea: Call2 0x2a8

0x2eb: Pop(1)
0x2ec: Push((int) 521039)
0x2ed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2ee: Pop(1)
0x2ef: @@@ ClearReplies(); Obj=0 // @poff=116
0x2f0: Pop(0)
0x2f1: Push((int) 521040)
0x2f2: Push((int) -1)
0x2f3: Push((int) 22236)
0x2f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f5: Pop(3)
0x2f6: Return(); Pop(0)

0x2f7: Push((int) 29880)
0x2f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2fa: PushEmpty(string)
0x2fb: Stack[-1] = "Neutral" // @poff=89
0x2fc: Call2 0x2a8

0x2fd: Pop(1)
0x2fe: Push((int) 528491)
0x2ff: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x300: Pop(1)
0x301: @@@ ClearReplies(); Obj=0 // @poff=116
0x302: Pop(0)
0x303: Push((int) 528492)
0x304: Push((int) 29882)
0x305: Push((int) 29881)
0x306: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x307: Pop(3)
0x308: Return(); Pop(0)

0x309: Push((int) 29882)
0x30a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30b: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x30c: PushEmpty(string)
0x30d: Stack[-1] = "Neutral" // @poff=89
0x30e: Call2 0x2a8

0x30f: Pop(1)
0x310: Push((int) 528493)
0x311: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x312: Pop(1)
0x313: @@@ ClearReplies(); Obj=0 // @poff=116
0x314: Pop(0)
0x315: Push((int) 528494)
0x316: Push((int) 29884)
0x317: Push((int) 29883)
0x318: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x319: Pop(3)
0x31a: Push((int) 528511)
0x31b: Push((int) 29902)
0x31c: Push((int) 29901)
0x31d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x31e: Pop(3)
0x31f: Return(); Pop(0)

0x320: Push((int) 29902)
0x321: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x323: PushEmpty(string)
0x324: Stack[-1] = "Neutral" // @poff=89
0x325: Call2 0x2a8

0x326: Pop(1)
0x327: Push((int) 528512)
0x328: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x329: Pop(1)
0x32a: @@@ ClearReplies(); Obj=0 // @poff=116
0x32b: Pop(0)
0x32c: Push((int) 528513)
0x32d: Push((int) 29904)
0x32e: Push((int) 29903)
0x32f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x330: Pop(3)
0x331: Return(); Pop(0)

0x332: Push((int) 29904)
0x333: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral" // @poff=89
0x337: Call2 0x2a8

0x338: Pop(1)
0x339: Push((int) 528514)
0x33a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x33b: Pop(1)
0x33c: @@@ ClearReplies(); Obj=0 // @poff=116
0x33d: Pop(0)
0x33e: Push((int) 528515)
0x33f: Push((int) 29886)
0x340: Push((int) 29905)
0x341: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x342: Pop(3)
0x343: Return(); Pop(0)

0x344: Push((int) 29884)
0x345: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x347: PushEmpty(string)
0x348: Stack[-1] = "Neutral" // @poff=89
0x349: Call2 0x2a8

0x34a: Pop(1)
0x34b: Push((int) 528495)
0x34c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x34d: Pop(1)
0x34e: @@@ ClearReplies(); Obj=0 // @poff=116
0x34f: Pop(0)
0x350: Push((int) 528496)
0x351: Push((int) 29886)
0x352: Push((int) 29885)
0x353: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: Push((int) 29886)
0x357: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x359: PushEmpty(string)
0x35a: Stack[-1] = "Neutral" // @poff=89
0x35b: Call2 0x2a8

0x35c: Pop(1)
0x35d: Push((int) 528497)
0x35e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x35f: Pop(1)
0x360: @@@ ClearReplies(); Obj=0 // @poff=116
0x361: Pop(0)
0x362: Push((int) 528498)
0x363: Push((int) 29888)
0x364: Push((int) 29887)
0x365: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 29888)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral" // @poff=89
0x36d: Call2 0x2a8

0x36e: Pop(1)
0x36f: Push((int) 528499)
0x370: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x371: Pop(1)
0x372: @@@ ClearReplies(); Obj=0 // @poff=116
0x373: Pop(0)
0x374: Push((int) 528500)
0x375: Push((int) 29890)
0x376: Push((int) 29889)
0x377: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 29890)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Neutral" // @poff=89
0x37f: Call2 0x2a8

0x380: Pop(1)
0x381: Push((int) 528501)
0x382: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x383: Pop(1)
0x384: @@@ ClearReplies(); Obj=0 // @poff=116
0x385: Pop(0)
0x386: Push((int) 528504)
0x387: Push((int) 29894)
0x388: Push((int) 29893)
0x389: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38a: Pop(3)
0x38b: Push((int) 528517)
0x38c: Push((int) 29896)
0x38d: Push((int) 29908)
0x38e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x38f: Pop(3)
0x390: Return(); Pop(0)

0x391: Push((int) 29894)
0x392: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x394: PushEmpty(string)
0x395: Stack[-1] = "Neutral" // @poff=89
0x396: Call2 0x2a8

0x397: Pop(1)
0x398: Push((int) 528505)
0x399: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x39a: Pop(1)
0x39b: @@@ ClearReplies(); Obj=0 // @poff=116
0x39c: Pop(0)
0x39d: Push((int) 528506)
0x39e: Push((int) 29896)
0x39f: Push((int) 29895)
0x3a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 29896)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Neutral" // @poff=89
0x3a8: Call2 0x2a8

0x3a9: Pop(1)
0x3aa: Push((int) 528507)
0x3ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3ac: Pop(1)
0x3ad: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ae: Pop(0)
0x3af: Push((int) 528508)
0x3b0: Push((int) 29898)
0x3b1: Push((int) 29897)
0x3b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3b3: Pop(3)
0x3b4: Return(); Pop(0)

0x3b5: Push((int) 29898)
0x3b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3b8: PushEmpty(string)
0x3b9: Stack[-1] = "Neutral" // @poff=89
0x3ba: Call2 0x2a8

0x3bb: Pop(1)
0x3bc: Push((int) 528509)
0x3bd: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3be: Pop(1)
0x3bf: @@@ ClearReplies(); Obj=0 // @poff=116
0x3c0: Pop(0)
0x3c1: Push((int) 521038)
0x3c2: Push((int) -1)
0x3c3: Push((int) 22234)
0x3c4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3c5: Pop(3)
0x3c6: Return(); Pop(0)

0x3c7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3c8: PushEmpty(bool)
0x3c9: Call2 0x812

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cc: @ lshStopAnimation()
0x3cd: Pop(0)
0x3ce: GOTO 0x3d1

0x3cf: @ StopAnimation()
0x3d0: Pop(0)
0x3d1: Return(); Pop(0)

0x3d2: GOTO 0x2bf

0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3d5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3d6: PushEmpty(bool, object)
0x3d7: PushEmpty(object)
0x3d8: Call2 0x7c4

0x3d9: Stack[-1] = Stack[-2]
0x3da: Pop(1)
0x3db: Call2 0x717

0x3dc: Pop(2)
0x3dd: PushEmpty(bool, object, float)
0x3de: Stack[-12] = Stack[-2]
0x3df: Stack[-1] = (float) 70.0
0x3e0: Call2 0x6c2

0x3e1: Pop(2)
0x3e2: Pop(1); Push((bool) Stack[-1] == 0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-10] = (int) -2
0x3e5: Return(); Pop(8)

0x3e6: @ CreateDialog(Stack[-4])
0x3e7: Pop(0)
0x3e8: PushEmpty(int)
0x3e9: Call2 0x80c

0x3ea: Pop(0)
0x3eb: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x3ec: Pop(1)
0x3ed: PushEmpty(int)
0x3ee: Call2 0x80a

0x3ef: Pop(0)
0x3f0: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x3f1: Pop(1)
0x3f2: PushEmpty(string)
0x3f3: Call2 0x80e

0x3f4: Pop(0)
0x3f5: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x3f6: Pop(1)
0x3f7: PushEmpty(string)
0x3f8: Call2 0x810

0x3f9: Pop(0)
0x3fa: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x3fb: Pop(1)
0x3fc: PushEmpty(int)
0x3fd: Call2 0x8c4

0x3fe: Pop(0)
0x3ff: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x400: Pop(1)
0x401: Stack[-2] = (int) -1
0x402: @ IsOverrideActive(Stack[-3])
0x403: Pop(0)
0x404: Push(Stack[-3])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-10] = (int) -2
0x407: Return(); Pop(8)

0x408: @ DoDialog(Stack[-4])
0x409: Pop(0)
0x40a: PushEmpty(object, object)
0x40b: Stack[-11] = Stack[-2]
0x40c: Stack[-6] = Stack[-1]
0x40d: Push(-2, 4); TaskCall(8)
0x40e: Call2 0x425

0x40f: Pop(-2, 4); TaskReturn
0x410: Pop(2)
0x411: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x412: Pop(0)
0x413: Pop(0); Push((bool) Stack[-1] == 0)
0x414: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x415: @ sync()
0x416: Pop(0)
0x417: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x418: Pop(0)
0x419: GOTO 0x413

0x41a: PushEmpty(object)
0x41b: Stack[-10] = Stack[-1]
0x41c: Call2 0x706

0x41d: Pop(1)
0x41e: @ StopDialog(Stack[-4])
0x41f: Pop(0)
0x420: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x421: Pop(0)
0x422: Stack[-2] = Stack[-10]
0x423: Return(); Pop(8)

0x424: Stack[-4] = 0
0x425: PushEmpty()
0x426: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x427: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x428: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x429: Push((int) 1)
0x42a: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x42b: PushEmpty(bool)
0x42c: Stack[-1] = (bool) 0
0x42d: PushEmpty(bool, object)
0x42e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42f: Call2 0x859

0x430: Pop(1)
0x431: Pop(1); Push((bool) Stack[-1] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x435: Call2 0x865

0x436: Pop(1)
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: Stack[-1] = (bool) 1
0x439: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x43a: PushEmpty(object, object)
0x43b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x43c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43d: Call2 0x830

0x43e: Pop(2)
0x43f: PushEmpty(object, object)
0x440: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x441: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x442: Call2 0x84d

0x443: Pop(2)
0x444: PushEmpty(string)
0x445: Stack[-1] = "Neutral" // @poff=89
0x446: Call2 0x482

0x447: Pop(1)
0x448: Push((int) 521320)
0x449: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x44a: Pop(1)
0x44b: @@@ ClearReplies(); Obj=0 // @poff=116
0x44c: Pop(0)
0x44d: Push((int) 528448)
0x44e: Push((int) 29835)
0x44f: Push((int) 29834)
0x450: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x451: Pop(3)
0x452: GOTO 0x464

0x453: PushEmpty(string)
0x454: Stack[-1] = "Neutral" // @poff=89
0x455: Call2 0x482

0x456: Pop(1)
0x457: Push((int) 521323)
0x458: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x459: Pop(1)
0x45a: @@@ ClearReplies(); Obj=0 // @poff=116
0x45b: Pop(0)
0x45c: Push((int) 521324)
0x45d: Push((int) -1)
0x45e: Push((int) 22518)
0x45f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x460: Pop(3)
0x461: GOTO 0x464

0x462: Return(); Pop(0)

0x463: GOTO 0x429

0x464: PushEmpty(bool)
0x465: Call2 0x812

0x466: Pop(0)
0x467: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x468: @ lshWaitForAnimEnd()
0x469: Pop(0)
0x46a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: GOTO 0x472

0x46d: PushEmpty(string)
0x46e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x46f: Call2 0x7a1

0x470: Pop(1)
0x471: GOTO 0x468

0x472: GOTO 0x481

0x473: Push("all") // @poff=138
0x474: Push("idle") // @poff=146
0x475: @ PlayAnimation(Stack[-2], Stack[-1])
0x476: Pop(2)
0x477: @ WaitForAnimEnd()
0x478: Pop(0)
0x479: Push( Stack[3 + Tasks[-1].StackPointer] )
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: GOTO 0x481

0x47c: Push("all") // @poff=138
0x47d: Push("idle") // @poff=146
0x47e: @ PlayAnimation(Stack[-2], Stack[-1])
0x47f: Pop(2)
0x480: GOTO 0x477

0x481: Return(); Pop(0)

0x482: PushEmpty()
0x483: PushEmpty(bool)
0x484: Call2 0x812

0x485: Pop(0)
0x486: Pop(1); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: Return(); Pop(0)

0x489: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: Return(); Pop(0)

0x48c: PushEmpty(string, bool)
0x48d: Stack[-3] = Stack[-2]
0x48e: Push("") // @poff=102
0x48f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-1] = (bool) 0
0x492: GOTO 0x494

0x493: Stack[-1] = (bool) 1
0x494: Call2 0x7a8

0x495: Pop(2)
0x496: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: Push((int) 1)
0x49a: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x49b: PushEmpty()
0x49c: Call2 0x7bd

0x49d: Pop(0)
0x49e: Push((int) 22516)
0x49f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a1: PushEmpty(object, object)
0x4a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a4: Call2 0x836

0x4a5: Pop(2)
0x4a6: PushEmpty(object, object)
0x4a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x853

0x4aa: Pop(2)
0x4ab: PushEmpty(object, object)
0x4ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ae: Call2 0x846

0x4af: Pop(2)
0x4b0: Push((int) 29846)
0x4b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4b3: PushEmpty(object, object)
0x4b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b6: Call2 0x836

0x4b7: Pop(2)
0x4b8: PushEmpty(object, object)
0x4b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bb: Call2 0x853

0x4bc: Pop(2)
0x4bd: PushEmpty(object, object)
0x4be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c0: Call2 0x846

0x4c1: Pop(2)
0x4c2: Push((int) 22515)
0x4c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4c5: PushEmpty(object, object)
0x4c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c8: Call2 0x836

0x4c9: Pop(2)
0x4ca: PushEmpty(object, object)
0x4cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cd: Call2 0x853

0x4ce: Pop(2)
0x4cf: PushEmpty(object, object)
0x4d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d2: Call2 0x846

0x4d3: Pop(2)
0x4d4: Push((int) 22514)
0x4d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 0
0x4d9: PushEmpty(bool, object)
0x4da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4db: Call2 0x859

0x4dc: Pop(1)
0x4dd: Pop(1); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e1: Call2 0x865

0x4e2: Pop(1)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e4: Stack[-1] = (bool) 1
0x4e5: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4e6: PushEmpty(object, object)
0x4e7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e9: Call2 0x830

0x4ea: Pop(2)
0x4eb: PushEmpty(object, object)
0x4ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ee: Call2 0x84d

0x4ef: Pop(2)
0x4f0: PushEmpty(string)
0x4f1: Stack[-1] = "Neutral" // @poff=89
0x4f2: Call2 0x482

0x4f3: Pop(1)
0x4f4: Push((int) 521320)
0x4f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x4f6: Pop(1)
0x4f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x4f8: Pop(0)
0x4f9: Push((int) 528448)
0x4fa: Push((int) 29835)
0x4fb: Push((int) 29834)
0x4fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x4fd: Pop(3)
0x4fe: Return(); Pop(0)

0x4ff: PushEmpty(string)
0x500: Stack[-1] = "Neutral" // @poff=89
0x501: Call2 0x482

0x502: Pop(1)
0x503: Push((int) 521323)
0x504: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x505: Pop(1)
0x506: @@@ ClearReplies(); Obj=0 // @poff=116
0x507: Pop(0)
0x508: Push((int) 521324)
0x509: Push((int) -1)
0x50a: Push((int) 22518)
0x50b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x50c: Pop(3)
0x50d: Return(); Pop(0)

0x50e: Push((int) 29835)
0x50f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x511: PushEmpty(string)
0x512: Stack[-1] = "Neutral" // @poff=89
0x513: Call2 0x482

0x514: Pop(1)
0x515: Push((int) 528449)
0x516: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x517: Pop(1)
0x518: @@@ ClearReplies(); Obj=0 // @poff=116
0x519: Pop(0)
0x51a: Push((int) 528450)
0x51b: Push((int) 29837)
0x51c: Push((int) 29836)
0x51d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x51e: Pop(3)
0x51f: Return(); Pop(0)

0x520: Push((int) 29837)
0x521: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x523: PushEmpty(string)
0x524: Stack[-1] = "Neutral" // @poff=89
0x525: Call2 0x482

0x526: Pop(1)
0x527: Push((int) 528451)
0x528: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x529: Pop(1)
0x52a: @@@ ClearReplies(); Obj=0 // @poff=116
0x52b: Pop(0)
0x52c: Push((int) 528452)
0x52d: Push((int) 29840)
0x52e: Push((int) 29838)
0x52f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x530: Pop(3)
0x531: Push((int) 528453)
0x532: Push((int) 29840)
0x533: Push((int) 29839)
0x534: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x535: Pop(3)
0x536: Return(); Pop(0)

0x537: Push((int) 29840)
0x538: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x539: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x53a: PushEmpty(string)
0x53b: Stack[-1] = "Neutral" // @poff=89
0x53c: Call2 0x482

0x53d: Pop(1)
0x53e: Push((int) 528454)
0x53f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x540: Pop(1)
0x541: @@@ ClearReplies(); Obj=0 // @poff=116
0x542: Pop(0)
0x543: Push((int) 528455)
0x544: Push((int) 29842)
0x545: Push((int) 29841)
0x546: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x547: Pop(3)
0x548: Push((int) 521321)
0x549: Push((int) -1)
0x54a: Push((int) 22515)
0x54b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x54c: Pop(3)
0x54d: Return(); Pop(0)

0x54e: Push((int) 29842)
0x54f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x551: PushEmpty(string)
0x552: Stack[-1] = "Neutral" // @poff=89
0x553: Call2 0x482

0x554: Pop(1)
0x555: Push((int) 528456)
0x556: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x557: Pop(1)
0x558: @@@ ClearReplies(); Obj=0 // @poff=116
0x559: Pop(0)
0x55a: Push((int) 528457)
0x55b: Push((int) 29845)
0x55c: Push((int) 29844)
0x55d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x55e: Pop(3)
0x55f: Return(); Pop(0)

0x560: Push((int) 29845)
0x561: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x563: PushEmpty(string)
0x564: Stack[-1] = "Neutral" // @poff=89
0x565: Call2 0x482

0x566: Pop(1)
0x567: Push((int) 528458)
0x568: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x569: Pop(1)
0x56a: @@@ ClearReplies(); Obj=0 // @poff=116
0x56b: Pop(0)
0x56c: Push((int) 521322)
0x56d: Push((int) -1)
0x56e: Push((int) 22516)
0x56f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x570: Pop(3)
0x571: Push((int) 528459)
0x572: Push((int) -1)
0x573: Push((int) 29846)
0x574: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x575: Pop(3)
0x576: Return(); Pop(0)

0x577: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x578: PushEmpty(bool)
0x579: Call2 0x812

0x57a: Pop(0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57c: @ lshStopAnimation()
0x57d: Pop(0)
0x57e: GOTO 0x581

0x57f: @ StopAnimation()
0x580: Pop(0)
0x581: Return(); Pop(0)

0x582: GOTO 0x499

0x583: Return(); Pop(0)

0x584: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x585: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x586: PushEmpty(bool, object)
0x587: PushEmpty(object)
0x588: Call2 0x7c4

0x589: Stack[-1] = Stack[-2]
0x58a: Pop(1)
0x58b: Call2 0x717

0x58c: Pop(2)
0x58d: PushEmpty(bool, object, float)
0x58e: Stack[-12] = Stack[-2]
0x58f: Stack[-1] = (float) 70.0
0x590: Call2 0x6c2

0x591: Pop(2)
0x592: Pop(1); Push((bool) Stack[-1] == 0)
0x593: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x594: Stack[-10] = (int) -2
0x595: Return(); Pop(8)

0x596: @ CreateDialog(Stack[-4])
0x597: Pop(0)
0x598: PushEmpty(int)
0x599: Call2 0x80c

0x59a: Pop(0)
0x59b: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x59c: Pop(1)
0x59d: PushEmpty(int)
0x59e: Call2 0x80a

0x59f: Pop(0)
0x5a0: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x5a1: Pop(1)
0x5a2: PushEmpty(string)
0x5a3: Call2 0x80e

0x5a4: Pop(0)
0x5a5: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x5a6: Pop(1)
0x5a7: PushEmpty(string)
0x5a8: Call2 0x810

0x5a9: Pop(0)
0x5aa: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x5ab: Pop(1)
0x5ac: PushEmpty(int)
0x5ad: Call2 0x8c4

0x5ae: Pop(0)
0x5af: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x5b0: Pop(1)
0x5b1: Stack[-2] = (int) -1
0x5b2: @ IsOverrideActive(Stack[-3])
0x5b3: Pop(0)
0x5b4: Push(Stack[-3])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b6: Stack[-10] = (int) -2
0x5b7: Return(); Pop(8)

0x5b8: @ DoDialog(Stack[-4])
0x5b9: Pop(0)
0x5ba: PushEmpty(object, object)
0x5bb: Stack[-11] = Stack[-2]
0x5bc: Stack[-6] = Stack[-1]
0x5bd: Push(-2, 4); TaskCall(10)
0x5be: Call2 0x5d5

0x5bf: Pop(-2, 4); TaskReturn
0x5c0: Pop(2)
0x5c1: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5c2: Pop(0)
0x5c3: Pop(0); Push((bool) Stack[-1] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c5: @ sync()
0x5c6: Pop(0)
0x5c7: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x5c8: Pop(0)
0x5c9: GOTO 0x5c3

0x5ca: PushEmpty(object)
0x5cb: Stack[-10] = Stack[-1]
0x5cc: Call2 0x706

0x5cd: Pop(1)
0x5ce: @ StopDialog(Stack[-4])
0x5cf: Pop(0)
0x5d0: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x5d1: Pop(0)
0x5d2: Stack[-2] = Stack[-10]
0x5d3: Return(); Pop(8)

0x5d4: Stack[-4] = 0
0x5d5: PushEmpty()
0x5d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5d7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5d8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5d9: Push((int) 1)
0x5da: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5db: PushEmpty(string)
0x5dc: Stack[-1] = "Neutral" // @poff=89
0x5dd: Call2 0x60f

0x5de: Pop(1)
0x5df: Push((int) 540554)
0x5e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5e1: Pop(1)
0x5e2: @@@ ClearReplies(); Obj=0 // @poff=116
0x5e3: Pop(0)
0x5e4: Push((int) 540555)
0x5e5: Push((int) -1)
0x5e6: Push((int) 42564)
0x5e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5e8: Pop(3)
0x5e9: Push((int) 540794)
0x5ea: Push((int) -1)
0x5eb: Push((int) 42843)
0x5ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5ed: Pop(3)
0x5ee: GOTO 0x5f1

0x5ef: Return(); Pop(0)

0x5f0: GOTO 0x5d9

0x5f1: PushEmpty(bool)
0x5f2: Call2 0x812

0x5f3: Pop(0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5f5: @ lshWaitForAnimEnd()
0x5f6: Pop(0)
0x5f7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f9: GOTO 0x5ff

0x5fa: PushEmpty(string)
0x5fb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5fc: Call2 0x7a1

0x5fd: Pop(1)
0x5fe: GOTO 0x5f5

0x5ff: GOTO 0x60e

0x600: Push("all") // @poff=138
0x601: Push("idle") // @poff=146
0x602: @ PlayAnimation(Stack[-2], Stack[-1])
0x603: Pop(2)
0x604: @ WaitForAnimEnd()
0x605: Pop(0)
0x606: Push( Stack[3 + Tasks[-1].StackPointer] )
0x607: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x608: GOTO 0x60e

0x609: Push("all") // @poff=138
0x60a: Push("idle") // @poff=146
0x60b: @ PlayAnimation(Stack[-2], Stack[-1])
0x60c: Pop(2)
0x60d: GOTO 0x604

0x60e: Return(); Pop(0)

0x60f: PushEmpty()
0x610: PushEmpty(bool)
0x611: Call2 0x812

0x612: Pop(0)
0x613: Pop(1); Push((bool) Stack[-1] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x615: Return(); Pop(0)

0x616: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Return(); Pop(0)

0x619: PushEmpty(string, bool)
0x61a: Stack[-3] = Stack[-2]
0x61b: Push("") // @poff=102
0x61c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61e: Stack[-1] = (bool) 0
0x61f: GOTO 0x621

0x620: Stack[-1] = (bool) 1
0x621: Call2 0x7a8

0x622: Pop(2)
0x623: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x624: Return(); Pop(0)

0x625: PushEmpty()
0x626: Push((int) 1)
0x627: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x628: PushEmpty()
0x629: Call2 0x7bd

0x62a: Pop(0)
0x62b: Push((int) 42563)
0x62c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x62e: PushEmpty(string)
0x62f: Stack[-1] = "Neutral" // @poff=89
0x630: Call2 0x60f

0x631: Pop(1)
0x632: Push((int) 540554)
0x633: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x634: Pop(1)
0x635: @@@ ClearReplies(); Obj=0 // @poff=116
0x636: Pop(0)
0x637: Push((int) 540555)
0x638: Push((int) -1)
0x639: Push((int) 42564)
0x63a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x63b: Pop(3)
0x63c: Push((int) 540794)
0x63d: Push((int) -1)
0x63e: Push((int) 42843)
0x63f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x640: Pop(3)
0x641: Return(); Pop(0)

0x642: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x643: PushEmpty(bool)
0x644: Call2 0x812

0x645: Pop(0)
0x646: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x647: @ lshStopAnimation()
0x648: Pop(0)
0x649: GOTO 0x64c

0x64a: @ StopAnimation()
0x64b: Pop(0)
0x64c: Return(); Pop(0)

0x64d: GOTO 0x626

0x64e: Return(); Pop(0)

0x64f: Push(GlobalVars[1])
0x650: Stack[-1] = (bool) 1
0x651: GlobalVars[1] = Stack[-1]; Pop(1)
0x652: PushEmpty()
0x653: Call2 0x65e

0x654: Pop(0)
0x655: Return(); Pop(0)

0x656: PushEmpty()
0x657: Push("icot_viktor_NPC_Trigger") // @poff=156
0x658: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65a: PushEmpty()
0x65b: Call2 0x685

0x65c: Pop(0)
0x65d: Return(); Pop(0)

0x65e: @ GetPosition(Stack[-1]T)
0x65f: Pop(0)
0x660: @ GetDirection(Stack[-2]T)
0x661: Pop(0)
0x662: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x663: PushEmpty(bool)
0x664: Call2 0x6bd

0x665: Pop(0)
0x666: Pop(1); Push((bool) Stack[-1] == 0)
0x667: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x668: PushEmpty()
0x669: Push(-0, 0); TaskCall(0)
0x66a: Call2 0x0

0x66b: Pop(-0, 0); TaskReturn
0x66c: Pop(0)
0x66d: PushEmpty()
0x66e: Call2 0x67a

0x66f: Pop(0)
0x670: PushEmpty(string)
0x671: Stack[-1] = "Neutral" // @poff=89
0x672: Call2 0x7a1

0x673: Pop(1)
0x674: @ lshWaitForAnimEnd()
0x675: Pop(0)
0x676: GOTO 0x670

0x677: @ Hold()
0x678: Pop(0)
0x679: Return(); Pop(0)

0x67a: @ SetPosition(Stack[-1]T)
0x67b: Pop(0)
0x67c: @ SetDirection(Stack[-2]T)
0x67d: Pop(0)
0x67e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x67f: Push("all") // @poff=138
0x680: Push("stand") // @poff=204
0x681: Push((int) 0)
0x682: @ LockAnimation(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Return(); Pop(0)

0x685: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x686: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x687: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x688: Push("all") // @poff=138
0x689: Push("stand") // @poff=204
0x68a: @ PlayAnimation(Stack[-2], Stack[-1])
0x68b: Pop(2)
0x68c: @ WaitForAnimEnd()
0x68d: Pop(0)
0x68e: Return(); Pop(0)

0x68f: PushEmpty()
0x690: Push(-0, 0); TaskCall(0)
0x691: Call2 0x0

0x692: Pop(-0, 0); TaskReturn
0x693: Pop(0)
0x694: PushEmpty()
0x695: Call2 0x67a

0x696: Pop(0)
0x697: Return(); Pop(0)

0x698: PushEmpty(bool, bool)
0x699: Push( Stack[0 + Tasks[-1].StackPointer] )
0x69a: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69b: @ IsOverrideActive(Stack[-1])
0x69c: Pop(0)
0x69d: Pop(0); Push((bool) Stack[-1] == 0)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69f: EventDisable(0)
0x6a0: PushEmpty(bool, object)
0x6a1: Stack[-5] = Stack[-1]
0x6a2: Call2 0x6b4

0x6a3: Pop(2)
0x6a4: EventEnable(0)
0x6a5: PushEmpty(object)
0x6a6: Stack[-4] = Stack[-1]
0x6a7: Call2 0x8d5

0x6a8: Pop(1)
0x6a9: Return(); Pop(2)

0x6aa: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6ab: @ GetPosition(Stack[-3])
0x6ac: Pop(0)
0x6ad: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6ae: Push(CvectorIndex(Stack[-2], 0))
0x6af: Push(CvectorIndex(Stack[-3], 2))
0x6b0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6b1: Pop(2)
0x6b2: Stack[-1] = Stack[-8]
0x6b3: Return(); Pop(6)

0x6b4: PushEmpty(cvector, cvector)
0x6b5: @@ GetPosition(Stack[-1]); Obj=3 // @poff=216
0x6b6: Pop(0)
0x6b7: PushEmpty(bool, cvector)
0x6b8: Stack[-3] = Stack[-1]
0x6b9: Call2 0x6aa

0x6ba: Stack[-2] = Stack[-6]
0x6bb: Pop(2)
0x6bc: Return(); Pop(2)

0x6bd: PushEmpty(bool, bool)
0x6be: @ IsLoaded(Stack[-1])
0x6bf: Pop(0)
0x6c0: Stack[-1] = Stack[-3]
0x6c1: Return(); Pop(2)

0x6c2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6c3: @@ GetPosition(Stack[-8]); Obj=20 // @poff=216
0x6c4: Pop(0)
0x6c5: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=228
0x6c6: Pop(0)
0x6c7: Push(CvectorIndex(Stack[-8], 1))
0x6c8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6c9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6ca: @ GetPosition(Stack[-7])
0x6cb: Pop(0)
0x6cc: @ GetEyesHeight(Stack[-9])
0x6cd: Pop(0)
0x6ce: Push(CvectorIndex(Stack[-7], 1))
0x6cf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6d0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6d1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6d2: Push(CvectorIndex(Stack[-6], 1))
0x6d3: Stack[-1] = (int) 0
0x6d4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6d5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x6d6: Pop(1); Push(Sqrt(Stack[-1]))
0x6d7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x6d8: Stack[-5] = -Stack[-6]; Pop(0);
0x6d9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x6da: PushEmpty(cvector, cvector)
0x6db: Push([0.0, 1.0, 0.0])
0x6dc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x6dd: Call2 0x7ca

0x6de: Pop(1)
0x6df: Push((int) 25)
0x6e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6e2: Push([0.0, 10.0, 0.0])
0x6e3: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x6e4: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x6e5: @ IsOverrideActive(Stack[-2])
0x6e6: Pop(0)
0x6e7: Push(Stack[-2])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-21] = (bool) 0
0x6ea: Return(); Pop(18)

0x6eb: @ StopWorld()
0x6ec: Pop(0)
0x6ed: @ CameraTransit(Stack[-3], Stack[-5])
0x6ee: Pop(0)
0x6ef: Push(CvectorIndex(Stack[-4], 0))
0x6f0: Push(CvectorIndex(Stack[-5], 2))
0x6f1: @ Rotate(Stack[-2], Stack[-1])
0x6f2: Pop(2)
0x6f3: PushEmpty(bool)
0x6f4: Call2 0x812

0x6f5: Pop(0)
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f7: GOTO 0x700

0x6f8: Push("head") // @poff=242
0x6f9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6fa: Pop(1)
0x6fb: Push(Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fd: Push("head") // @poff=242
0x6fe: @ LookAsyncCamera(Stack[-1])
0x6ff: Pop(1)
0x700: @ CameraWaitForPlayFinish()
0x701: Pop(0)
0x702: @ ResumeWorld()
0x703: Pop(0)
0x704: Stack[-21] = (bool) 1
0x705: Return(); Pop(18)

0x706: PushEmpty(bool, bool)
0x707: @ CameraSwitchToNormal()
0x708: Pop(0)
0x709: PushEmpty(bool)
0x70a: Call2 0x812

0x70b: Pop(0)
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: GOTO 0x716

0x70e: Push("head") // @poff=242
0x70f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x710: Pop(1)
0x711: Push(Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x713: Push("head") // @poff=242
0x714: @ UnlookAsync(Stack[-1])
0x715: Pop(1)
0x716: Return(); Pop(2)

0x717: PushEmpty(int, int, int, int)
0x718: Push("voice_common") // @poff=252
0x719: @ GetVariable(Stack[-1], Stack[-3])
0x71a: Pop(1)
0x71b: Push(Stack[-2])
0x71c: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x71d: PushEmpty(bool, object)
0x71e: Stack[-7] = Stack[-1]
0x71f: Call2 0x751

0x720: Pop(1)
0x721: Pop(1); Push((bool) Stack[-1] == 0)
0x722: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x723: PushEmpty(bool, object)
0x724: Stack[-7] = Stack[-1]
0x725: Call2 0x776

0x726: Pop(1)
0x727: Pop(1); Push((bool) Stack[-1] == 0)
0x728: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x729: Stack[-6] = (bool) 0
0x72a: Return(); Pop(4)

0x72b: Push((int) 2)
0x72c: @ irand(Stack[-2], Stack[-1])
0x72d: Pop(1)
0x72e: Push(Stack[-1])
0x72f: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x730: Push("voice_common") // @poff=252
0x731: Push((int) 1)
0x732: Pop(1); Push(Stack[-4] + Stack[-1]);
0x733: Push((int) 3)
0x734: Pop(2); Push(Stack[-2] % Stack[-1]);
0x735: @ SetVariable(Stack[-2], Stack[-1])
0x736: Pop(2)
0x737: GOTO 0x73c

0x738: Push("voice_common") // @poff=252
0x739: Push((int) 0)
0x73a: @ SetVariable(Stack[-2], Stack[-1])
0x73b: Pop(2)
0x73c: GOTO 0x74f

0x73d: PushEmpty(bool, object)
0x73e: Stack[-7] = Stack[-1]
0x73f: Call2 0x776

0x740: Pop(1)
0x741: Pop(1); Push((bool) Stack[-1] == 0)
0x742: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x743: PushEmpty(bool, object)
0x744: Stack[-7] = Stack[-1]
0x745: Call2 0x751

0x746: Pop(1)
0x747: Pop(1); Push((bool) Stack[-1] == 0)
0x748: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x749: Stack[-6] = (bool) 0
0x74a: Return(); Pop(4)

0x74b: Push("voice_common") // @poff=252
0x74c: Push((int) 1)
0x74d: @ SetVariable(Stack[-2], Stack[-1])
0x74e: Pop(2)
0x74f: Stack[-6] = (bool) 1
0x750: Return(); Pop(4)

0x751: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x752: Stack[-5] = "c" // @poff=278
0x753: Stack[-4] = (int) 0
0x754: Push((int) 1)
0x755: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x756: Push((int) 1)
0x757: Pop(1); Push(Stack[-5] + Stack[-1]);
0x758: Pop(1); Push(Stack[-6] + Stack[-1]);
0x759: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=282
0x75a: Pop(1)
0x75b: Pop(0); Push((bool) Stack[-3] == 0)
0x75c: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75d: GOTO 0x761

0x75e: Push((int) 1)
0x75f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x760: GOTO 0x754

0x761: Pop(0); Push((bool) Stack[-4] == 0)
0x762: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x763: Stack[-12] = (bool) 0
0x764: Return(); Pop(10)

0x765: Stack[-2] = (int) 0
0x766: Push((int) 1)
0x767: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x769: @ irand(Stack[-2], Stack[-4])
0x76a: Pop(0)
0x76b: Push((int) 1)
0x76c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x76d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x76e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=294
0x76f: Pop(1)
0x770: PushEmpty(bool, string)
0x771: Stack[-3] = Stack[-1]
0x772: Call2 0x7ae

0x773: Stack[-2] = Stack[-14]
0x774: Pop(2)
0x775: Return(); Pop(10)

0x776: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x777: Push("d") // @poff=212
0x778: PushEmpty(int)
0x779: Call2 0x7fb

0x77a: Pop(0)
0x77b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77c: Push("m") // @poff=306
0x77d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x77e: Stack[-4] = (int) 0
0x77f: Push((int) 1)
0x780: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x781: Push((int) 1)
0x782: Pop(1); Push(Stack[-5] + Stack[-1]);
0x783: Pop(1); Push(Stack[-6] + Stack[-1]);
0x784: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=282
0x785: Pop(1)
0x786: Pop(0); Push((bool) Stack[-3] == 0)
0x787: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x788: GOTO 0x78c

0x789: Push((int) 1)
0x78a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x78b: GOTO 0x77f

0x78c: Pop(0); Push((bool) Stack[-4] == 0)
0x78d: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78e: Stack[-12] = (bool) 0
0x78f: Return(); Pop(10)

0x790: Stack[-2] = (int) 0
0x791: Push((int) 1)
0x792: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x794: @ irand(Stack[-2], Stack[-4])
0x795: Pop(0)
0x796: Push((int) 1)
0x797: Pop(1); Push(Stack[-3] + Stack[-1]);
0x798: Pop(1); Push(Stack[-6] + Stack[-1]);
0x799: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=294
0x79a: Pop(1)
0x79b: PushEmpty(bool, string)
0x79c: Stack[-3] = Stack[-1]
0x79d: Call2 0x7ae

0x79e: Stack[-2] = Stack[-14]
0x79f: Pop(2)
0x7a0: Return(); Pop(10)

0x7a1: PushEmpty(float, float, float, float)
0x7a2: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x7a3: Pop(0)
0x7a4: Push((bool) 0)
0x7a5: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7a6: Pop(1)
0x7a7: Return(); Pop(4)

0x7a8: PushEmpty(float, float, float, float)
0x7a9: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x7aa: Pop(0)
0x7ab: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x7ac: Pop(0)
0x7ad: Return(); Pop(4)

0x7ae: PushEmpty(bool, bool)
0x7af: PushEmpty(bool)
0x7b0: Call2 0x812

0x7b1: Pop(0)
0x7b2: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b3: @ lshHasSpeech(Stack[-1], Stack[-3])
0x7b4: Pop(0)
0x7b5: Push(Stack[-1])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b7: @ lshPlaySpeech(Stack[-3])
0x7b8: Pop(0)
0x7b9: Stack[-4] = (bool) 1
0x7ba: Return(); Pop(2)

0x7bb: Stack[-4] = (bool) 0
0x7bc: Return(); Pop(2)

0x7bd: PushEmpty(bool)
0x7be: Call2 0x812

0x7bf: Pop(0)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: @ lshStopSpeech()
0x7c2: Pop(0)
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty(object, object)
0x7c5: @ self(Stack[-1])
0x7c6: Pop(0)
0x7c7: Stack[-1] = Stack[-3]
0x7c8: Return(); Pop(2)

0x7c9: Stack[-1] = 0
0x7ca: PushEmpty(float, float)
0x7cb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7cc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7cd: Push((float)9.999999974752427e-07)
0x7ce: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7d0: Stack[-4] = [0.0, 0.0, 0.0]
0x7d1: Return(); Pop(2)

0x7d2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7d3: Return(); Pop(2)

0x7d4: PushEmpty(int, int)
0x7d5: @ GetVariable(Stack[-3], Stack[-1])
0x7d6: Pop(0)
0x7d7: Stack[-1] = Stack[-4]
0x7d8: Return(); Pop(2)

0x7d9: PushEmpty(object, object)
0x7da: @ FindActor(Stack[-1], Stack[-4])
0x7db: Pop(0)
0x7dc: Pop(0); Push((bool) Stack[-1] == 0)
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7de: Push("Door ") // @poff=310
0x7df: Pop(1); Push(Stack[-1] + Stack[-5]);
0x7e0: Push(" not found") // @poff=322
0x7e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7e2: @ Trace(Stack[-1])
0x7e3: Pop(1)
0x7e4: GOTO 0x7e8

0x7e5: Push("locked") // @poff=344
0x7e6: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=358
0x7e7: Pop(1)
0x7e8: Return(); Pop(2)

0x7e9: Stack[-1] = 0
0x7ea: PushEmpty(object, object)
0x7eb: @ FindActor(Stack[-1], Stack[-4])
0x7ec: Pop(0)
0x7ed: Pop(0); PushNull((bool) Stack[-1] == 0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ef: Stack[-5] = (bool) 0
0x7f0: Return(); Pop(2)

0x7f1: @ Trigger(Stack[-1], Stack[-3])
0x7f2: Pop(0)
0x7f3: Stack[-5] = (bool) 1
0x7f4: Return(); Pop(2)

0x7f5: Stack[-1] = 0
0x7f6: PushEmpty(float, float)
0x7f7: @ GetGameTime(Stack[-1])
0x7f8: Pop(0)
0x7f9: Stack[-1] = Stack[-3]
0x7fa: Return(); Pop(2)

0x7fb: PushEmpty(float, float)
0x7fc: @ GetGameTime(Stack[-1])
0x7fd: Pop(0)
0x7fe: Push((int) 1)
0x7ff: PushEmpty(int)
0x800: Push((int) 24)
0x801: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x802: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x803: Return(); Pop(2)

0x804: PushEmpty()
0x805: PushEmpty(int)
0x806: Call2 0x7fb

0x807: Pop(0)
0x808: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x809: Return(); Pop(0)

0x80a: Stack[-1] = (int) 515554
0x80b: Return(); Pop(0)

0x80c: Stack[-1] = (int) 502879
0x80d: Return(); Pop(0)

0x80e: Stack[-1] = "ui/NPC_Viktor.png" // @poff=370
0x80f: Return(); Pop(0)

0x810: Stack[-1] = "ui/NPC_Viktor_b.png" // @poff=406
0x811: Return(); Pop(0)

0x812: Stack[-1] = (bool) 1
0x813: Return(); Pop(0)

0x814: PushEmpty(object, object)
0x815: Push("b7q01") // @poff=446
0x816: Push((int) 6)
0x817: @ SetVariable(Stack[-2], Stack[-1])
0x818: Pop(2)
0x819: PushEmpty(object)
0x81a: Call2 0x8b3

0x81b: Stack[-1] = Stack[-2]
0x81c: Pop(1)
0x81d: Push("b7q01DankoGotoSobor") // @poff=458
0x81e: Push("pt_map_aglaja") // @poff=498
0x81f: Push((int) 1)
0x820: Push((int) 521021)
0x821: PushEmpty(float)
0x822: Call2 0x7f6

0x823: Pop(0)
0x824: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=526
0x825: Pop(5)
0x826: PushEmpty()
0x827: Call2 0x87d

0x828: Pop(0)
0x829: PushEmpty(bool, string, string)
0x82a: Stack[-2] = "quest_b7_01" // @poff=534
0x82b: Stack[-1] = "place_aglaja" // @poff=558
0x82c: Call2 0x7ea

0x82d: Pop(3)
0x82e: Return(); Pop(2)

0x82f: Stack[-1] = 0
0x830: PushEmpty()
0x831: Push("oob6Viktor1") // @poff=584
0x832: Push((int) 1)
0x833: @ SetVariable(Stack[-2], Stack[-1])
0x834: Pop(2)
0x835: Return(); Pop(0)

0x836: PushEmpty(object, object)
0x837: PushEmpty(object)
0x838: Call2 0x8b3

0x839: Stack[-1] = Stack[-2]
0x83a: Pop(1)
0x83b: Push("b6q03ViktorGotoMaria") // @poff=608
0x83c: Push("pt_map_maria") // @poff=650
0x83d: Push((int) 3)
0x83e: Push((int) 521341)
0x83f: PushEmpty(float)
0x840: Call2 0x7f6

0x841: Pop(0)
0x842: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=526
0x843: Pop(5)
0x844: Return(); Pop(2)

0x845: Stack[-1] = 0
0x846: PushEmpty()
0x847: PushEmpty(string, bool)
0x848: Stack[-2] = "cot_maria@door1" // @poff=676
0x849: Stack[-1] = (bool) 0
0x84a: Call2 0x7d9

0x84b: Pop(2)
0x84c: Return(); Pop(0)

0x84d: PushEmpty()
0x84e: Push("b6ViktorVisit") // @poff=708
0x84f: Push((int) 1)
0x850: @ SetVariable(Stack[-2], Stack[-1])
0x851: Pop(2)
0x852: Return(); Pop(0)

0x853: PushEmpty()
0x854: Push("playsound") // @poff=736
0x855: Push("mapmark") // @poff=756
0x856: @ TriggerWorld(Stack[-2], Stack[-1])
0x857: Pop(2)
0x858: Return(); Pop(0)

0x859: PushEmpty()
0x85a: PushEmpty(int, string)
0x85b: Stack[-1] = "b6q03NinaTalk" // @poff=772
0x85c: Call2 0x7d4

0x85d: Pop(1)
0x85e: Push((int) 0)
0x85f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x861: Stack[-2] = (bool) 1
0x862: Return(); Pop(0)

0x863: Stack[-2] = (bool) 0
0x864: Return(); Pop(0)

0x865: PushEmpty()
0x866: PushEmpty(int, string)
0x867: Stack[-1] = "oob6Viktor1" // @poff=584
0x868: Call2 0x7d4

0x869: Pop(1)
0x86a: Push((int) 0)
0x86b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86d: Stack[-2] = (bool) 1
0x86e: Return(); Pop(0)

0x86f: Stack[-2] = (bool) 0
0x870: Return(); Pop(0)

0x871: PushEmpty()
0x872: PushEmpty(int, string)
0x873: Stack[-1] = "b7q01" // @poff=446
0x874: Call2 0x7d4

0x875: Pop(1)
0x876: Push((int) 5)
0x877: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: Stack[-2] = (bool) 1
0x87a: Return(); Pop(0)

0x87b: Stack[-2] = (bool) 0
0x87c: Return(); Pop(0)

0x87d: PushEmpty(object, object)
0x87e: Push((int) 262)
0x87f: Push((int) 1)
0x880: Push((int) 521035)
0x881: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: PushEmpty(bool, object, int)
0x884: Stack[-4] = Stack[-2]
0x885: Stack[-1] = (int) 253
0x886: Call2 0x897

0x887: Pop(3)
0x888: Return(); Pop(2)

0x889: Stack[-1] = 0
0x88a: PushEmpty(object, object)
0x88b: @ GetDiaryRoot(Stack[-1])
0x88c: Pop(0)
0x88d: Pop(0); Push((bool) Stack[-1] == 0)
0x88e: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x88f: Push("Can't retrieve diary root") // @poff=800
0x890: @ Trace(Stack[-1])
0x891: Pop(1)
0x892: Stack[-3] = (bool) 0
0x893: Return(); Pop(2)

0x894: Stack[-1] = Stack[-3]
0x895: Return(); Pop(2)

0x896: Stack[-1] = 0
0x897: PushEmpty(object, object, int, object, object, int)
0x898: PushEmpty(object)
0x899: Call2 0x88a

0x89a: Stack[-1] = Stack[-4]
0x89b: Pop(1)
0x89c: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=852
0x89d: Pop(0)
0x89e: Pop(0); Push((bool) Stack[-2] == 0)
0x89f: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a0: Push("Can't find diary parent with id: ") // @poff=857
0x8a1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8a2: @ Trace(Stack[-1])
0x8a3: Pop(1)
0x8a4: Stack[-9] = (bool) 0
0x8a5: Return(); Pop(6)

0x8a6: @@ AddChild(Stack[-8]); Obj=2 // @poff=925
0x8a7: Pop(0)
0x8a8: Push((int) 7)
0x8a9: @ SendWorldWndMessage(Stack[-1])
0x8aa: Pop(1)
0x8ab: @@ GetCategory(Stack[-1]); Obj=8 // @poff=934
0x8ac: Pop(0)
0x8ad: @ SetDiarySection(Stack[-1])
0x8ae: Pop(0)
0x8af: Stack[-9] = (bool) 0
0x8b0: Return(); Pop(6)

0x8b1: Stack[-2] = 0
0x8b2: Stack[-3] = 0
0x8b3: PushEmpty(object, object, object, object)
0x8b4: @ GetMainOutdoorScene(Stack[-2])
0x8b5: Pop(0)
0x8b6: Pop(0); PushNull((bool) Stack[-2] == 0)
0x8b7: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8b8: Push("Can't find main outdoor scene") // @poff=946
0x8b9: @ Trace(Stack[-1])
0x8ba: Pop(1)
0x8bb: Stack[-1] = 0
0x8bc: Stack[-1] = Stack[-5]
0x8bd: Return(); Pop(4)

0x8be: @@ GetMap(Stack[-1]); Obj=2 // @poff=1006
0x8bf: Pop(0)
0x8c0: Stack[-1] = Stack[-5]
0x8c1: Return(); Pop(4)

0x8c2: Stack[-1] = 0
0x8c3: Stack[-2] = 0
0x8c4: PushEmpty(int, int)
0x8c5: Push("branch") // @poff=1013
0x8c6: @ GetVariable(Stack[-1], Stack[-2])
0x8c7: Pop(1)
0x8c8: Push((int) 0)
0x8c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ca: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cb: Stack[-3] = (int) 1
0x8cc: Return(); Pop(2)

0x8cd: GOTO 0x8d3

0x8ce: Push((int) 1)
0x8cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d1: Stack[-3] = (int) 2
0x8d2: Return(); Pop(2)

0x8d3: Stack[-3] = (int) 3
0x8d4: Return(); Pop(2)

0x8d5: PushEmpty()
0x8d6: Push(GlobalVars[1])
0x8d7: Pop(1); Push((bool) Stack[-1] == 0)
0x8d8: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8d9: PushEmpty(int, object)
0x8da: Stack[-3] = Stack[-1]
0x8db: Push(-2, 1); TaskCall(3)
0x8dc: Call2 0x110

0x8dd: Pop(-2, 1); TaskReturn
0x8de: Pop(2)
0x8df: Push(GlobalVars[1])
0x8e0: Stack[-1] = (bool) 1
0x8e1: GlobalVars[1] = Stack[-1]; Pop(1)
0x8e2: PushEmpty(bool, int)
0x8e3: Stack[-1] = (int) 6
0x8e4: Call2 0x804

0x8e5: Pop(1)
0x8e6: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8e7: PushEmpty(int, object)
0x8e8: Stack[-3] = Stack[-1]
0x8e9: Push(-2, 1); TaskCall(7)
0x8ea: Call2 0x3d4

0x8eb: Pop(-2, 1); TaskReturn
0x8ec: Pop(2)
0x8ed: Return(); Pop(0)

0x8ee: PushEmpty(bool, int)
0x8ef: Stack[-1] = (int) 7
0x8f0: Call2 0x804

0x8f1: Pop(1)
0x8f2: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f3: PushEmpty(int, object)
0x8f4: Stack[-3] = Stack[-1]
0x8f5: Push(-2, 1); TaskCall(5)
0x8f6: Call2 0x209

0x8f7: Pop(-2, 1); TaskReturn
0x8f8: Pop(2)
0x8f9: Return(); Pop(0)

0x8fa: PushEmpty(bool)
0x8fb: Stack[-1] = (bool) 0
0x8fc: PushEmpty(bool, int)
0x8fd: Stack[-1] = (int) 12
0x8fe: Call2 0x804

0x8ff: Pop(1)
0x900: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x901: Push(GlobalVars[2])
0x902: Pop(1); Push((bool) Stack[-1] == 0)
0x903: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x904: Stack[-1] = (bool) 1
0x905: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x906: PushEmpty(int, object)
0x907: Stack[-3] = Stack[-1]
0x908: Push(-2, 1); TaskCall(1)
0x909: Call2 0xd

0x90a: Pop(-2, 1); TaskReturn
0x90b: Pop(2)
0x90c: Push(GlobalVars[2])
0x90d: Stack[-1] = (bool) 1
0x90e: GlobalVars[2] = Stack[-1]; Pop(1)
0x90f: Return(); Pop(0)

0x910: PushEmpty(int, object)
0x911: Stack[-3] = Stack[-1]
0x912: Push(-2, 1); TaskCall(9)
0x913: Call2 0x584

0x914: Pop(-2, 1); TaskReturn
0x915: Pop(2)
0x916: Return(); Pop(0)

