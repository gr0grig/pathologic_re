GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:cleanup
	W:player
	W:head
	W:all
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
	W:idle
	A:GetPosition
	A:GetEyesHeight
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
	W:pt_map_notkin
	A:ShowMap
	W:b10q04NotkinTalk
	W:b10q04MorlokGotoNotkin
	A:AddMark
	W:quest_b10_04
	W:completed
	W:oob10MorlokMain1
	W:oob10MorlokMain2
	W:b10q04MorlokTalk
	W:b10q04
	W:b10q04Spi4kaTalk
	W:b10q04MishkaTalk
	W:b10q04LaskaTalk
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:Can't find main outdoor scene
	A:GetMap
	A:GetLocator
	W:Warning: outdoor scene locator 
	W: doesnt exist
	W:Can't find map
	A:SetMapParams
	W:branch
// @pool_raw:63006c00650061006e0075007000000070006c00610079006500720000006800650061006400000061006c006c0000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c7900690064006c0065000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000700074005f006d00610070005f006e006f0074006b0069006e00000053686f774d6170006200310030007100300034004e006f0074006b0069006e00540061006c006b0000006200310030007100300034004d006f0072006c006f006b0047006f0074006f004e006f0074006b0069006e0000004164644d61726b00710075006500730074005f006200310030005f0030003400000063006f006d0070006c00650074006500640000006f006f006200310030004d006f0072006c006f006b004d00610069006e00310000006f006f006200310030004d006f0072006c006f006b004d00610069006e00320000006200310030007100300034004d006f0072006c006f006b00540061006c006b000000620031003000710030003400000062003100300071003000340053007000690034006b006100540061006c006b0000006200310030007100300034004d006900730068006b006100540061006c006b0000006200310030007100300034004c00610073006b006100540061006c006b000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900430061006e00270074002000660069006e00640020006d00610069006e0020006f007500740064006f006f00720020007300630065006e00650000004765744d6170004765744c6f6361746f72005700610072006e0069006e0067003a0020006f007500740064006f006f00720020007300630065006e00650020006c006f006300610074006f00720020000000200064006f00650073006e0074002000650078006900730074000000430061006e00270074002000660069006e00640020006d006100700000005365744d6170506172616d73006200720061006e00630068000000

Import:
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	sync (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object, bool) Params = 0
		EVENT_0 Op = 0x6 Vars = (object)
		EVENT_26 Op = 0x3c Vars = (string)
		EVENT_5 Op = 0x44 Vars = ()
		EVENT_6 Op = 0x49 Vars = ()
		EVENT_7 Op = 0x88 Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x20e Vars = (int, int)


0x0: PushEmpty(float, float)
0x1: Stack[-2] = (int) 300
0x2: Stack[-1] = (int) 100
0x3: Call2 0xf

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty()
0x8: Call2 0x9f

0x9: Pop(0)
0xa: PushEmpty(object)
0xb: Stack[-2] = Stack[-1]
0xc: Call2 0x555

0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty(float, float)
0x10: PushEmpty(bool)
0x11: Call2 0x356

0x12: Pop(0)
0x13: Pop(1); Push((bool) Stack[-1] == 0)
0x14: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x15: @ Hold()
0x16: Pop(0)
0x17: GOTO 0x10

0x18: Push((int) 3)
0x19: @ rand(Stack[-2], Stack[-1])
0x1a: Pop(1)
0x1b: Push((int) 3)
0x1c: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1d: @ Sleep(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(float, float)
0x20: Stack[-6] = Stack[-2]
0x21: Stack[-5] = Stack[-1]
0x22: Call2 0x5e

0x23: Pop(2)
0x24: @ sync()
0x25: Pop(0)
0x26: GOTO 0x10

0x27: Return(); Pop(2)

0x28: PushEmpty(bool, bool)
0x29: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x2a: @ IsLoaded(Stack[-1])
0x2b: Pop(0)
0x2c: PushEmpty(bool)
0x2d: Stack[-1] = (bool) 0
0x2e: Pop(0); Push((bool) Stack[-2] == 0)
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: PushEmpty(bool)
0x31: Call2 0x5c

0x32: Pop(0)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[-1] = (bool) 1
0x35: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x36: PushEmpty(object)
0x37: Call2 0x3cf

0x38: Pop(0)
0x39: @ RemoveActor(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(2)

0x3c: PushEmpty()
0x3d: Push("cleanup") // @poff=0
0x3e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x28

0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: @ StopGroup0()
0x45: Pop(0)
0x46: @ sync()
0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: PushEmpty()
0x4a: Call2 0x9f

0x4b: Pop(0)
0x4c: PushEmpty(bool)
0x4d: Stack[-1] = (bool) 0
0x4e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x4f: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x50: PushEmpty(bool)
0x51: Call2 0x5c

0x52: Pop(0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-1] = (bool) 1
0x55: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x56: PushEmpty(object)
0x57: Call2 0x3cf

0x58: Pop(0)
0x59: @ RemoveActor(Stack[-1])
0x5a: Pop(1)
0x5b: Return(); Pop(0)

0x5c: Stack[-1] = (bool) 1
0x5d: Return(); Pop(0)

0x5e: PushEmpty()
0x5f: PushEmpty(bool)
0x60: Call2 0x356

0x61: Pop(0)
0x62: Pop(1); Push((bool) Stack[-1] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Return(); Pop(0)

0x65: Push("player") // @poff=16
0x66: @ FindActor(Stack[-4]T, Stack[-1])
0x67: Pop(1)
0x68: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x69: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x6b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6c: Push((int) 10)
0x6d: Push((float)1.0)
0x6e: @ SetTimer(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: PushEmpty()
0x71: Call2 0xad

0x72: Pop(0)
0x73: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x75: Push((int) 10)
0x76: @ KillTimer(Stack[-1])
0x77: Pop(1)
0x78: Return(); Pop(0)

0x79: PushEmpty(float, float)
0x7a: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-3] = (bool) 0
0x7d: Return(); Pop(2)

0x7e: PushEmpty(float, object)
0x7f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x80: Call2 0x34e

0x81: Pop(1)
0x82: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x83: Push( Stack[2 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x86: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x87: Return(); Pop(2)

0x88: PushEmpty()
0x89: Push((int) 10)
0x8a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x8c: PushEmpty(bool)
0x8d: Call2 0x79

0x8e: Pop(0)
0x8f: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x90: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: PushEmpty(object)
0x93: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x94: Call2 0x3bd

0x95: Pop(1)
0x96: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x97: GOTO 0x9e

0x98: Push( Stack[2 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9a: Push("head") // @poff=30
0x9b: @ UnlookAsync(Stack[-1])
0x9c: Pop(1)
0x9d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Call2 0xfe

0xa1: Pop(0)
0xa2: Push((int) 10)
0xa3: @ KillTimer(Stack[-1])
0xa4: Pop(1)
0xa5: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa7: Push("head") // @poff=30
0xa8: @ UnlookAsync(Stack[-1])
0xa9: Pop(1)
0xaa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xab: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xac: Return(); Pop(0)

0xad: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xae: @ WaitForAnimEnd()
0xaf: Pop(0)
0xb0: PushEmpty(bool)
0xb1: Call2 0x356

0xb2: Pop(0)
0xb3: Pop(1); Push((bool) Stack[-1] == 0)
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Return(); Pop(14)

0xb6: PushEmpty(int)
0xb7: Call2 0x3fc

0xb8: Stack[-1] = Stack[-8]
0xb9: Pop(1)
0xba: Stack[-6] = (int) 0
0xbb: PushEmpty(bool)
0xbc: Stack[-1] = (bool) 0
0xbd: Push((int) 5)
0xbe: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc0: PushEmpty(bool)
0xc1: Call2 0x356

0xc2: Pop(0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Stack[-1] = (bool) 1
0xc5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xc6: Push((int) 3)
0xc7: @ irand(Stack[-6], Stack[-1])
0xc8: Pop(1)
0xc9: Push((int) 0)
0xca: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xcc: Push(Stack[-7])
0xcd: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xce: @ irand(Stack[-4], Stack[-7])
0xcf: Pop(0)
0xd0: Push("all") // @poff=40
0xd1: PushEmpty(string, int)
0xd2: Stack[-7] = Stack[-1]
0xd3: Call2 0x3f5

0xd4: Pop(1)
0xd5: @ PlayAnimation(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: @ WaitForAnimEnd(Stack[-3])
0xd8: Pop(0)
0xd9: Pop(0); Push((bool) Stack[-3] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: GOTO 0xf9

0xdc: GOTO 0xee

0xdd: Push((int) 1)
0xde: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe0: Push((int) 4)
0xe1: @ rand(Stack[-3], Stack[-1])
0xe2: Pop(1)
0xe3: Push((int) 1)
0xe4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe5: @ Sleep(Stack[-1], Stack[-2])
0xe6: Pop(1)
0xe7: Pop(0); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: GOTO 0xf9

0xea: GOTO 0xee

0xeb: Push(Stack[-6])
0xec: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xed: GOTO 0xf9

0xee: PushEmpty(bool)
0xef: Call2 0xfc

0xf0: Pop(0)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: GOTO 0xf9

0xf4: @ ResetAAS()
0xf5: Pop(0)
0xf6: Push((int) 1)
0xf7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xf8: GOTO 0xbb

0xf9: @ ResetAAS()
0xfa: Pop(0)
0xfb: Return(); Pop(14)

0xfc: Stack[-1] = (bool) 1
0xfd: Return(); Pop(0)

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: @ StopGroup0()
0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-12] = Stack[-2]
0x107: Stack[-1] = (float) 110.0
0x108: Call2 0x35b

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x40f

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=48
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x40d

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=59
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x411

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=77
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x413

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=86
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x544

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=96
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(object, object)
0x133: Stack[-11] = Stack[-2]
0x134: Stack[-6] = Stack[-1]
0x135: Push(-2, 4); TaskCall(2)
0x136: Call2 0x14d

0x137: Pop(-2, 4); TaskReturn
0x138: Pop(2)
0x139: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=110
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-1] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: @ sync()
0x13e: Pop(0)
0x13f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=110
0x140: Pop(0)
0x141: GOTO 0x13b

0x142: PushEmpty(object)
0x143: Stack[-10] = Stack[-1]
0x144: Call2 0x39f

0x145: Pop(1)
0x146: @ StopDialog(Stack[-4])
0x147: Pop(0)
0x148: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=122
0x149: Pop(0)
0x14a: Stack[-2] = Stack[-10]
0x14b: Return(); Pop(8)

0x14c: Stack[-4] = 0
0x14d: PushEmpty()
0x14e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x150: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x151: Push((int) 1)
0x152: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 0
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x45a

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x4b7

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164: Call2 0x448

0x165: Pop(2)
0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral" // @poff=137
0x168: Call2 0x1f8

0x169: Pop(1)
0x16a: Push((int) 530386)
0x16b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x16c: Pop(1)
0x16d: @@@ ClearReplies(); Obj=0 // @poff=164
0x16e: Pop(0)
0x16f: Push((int) 530387)
0x170: Push((int) 31760)
0x171: Push((int) 31759)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x173: Pop(3)
0x174: Push((int) 531497)
0x175: Push((int) 31762)
0x176: Push((int) 32855)
0x177: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x178: Pop(3)
0x179: GOTO 0x1da

0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: PushEmpty(bool)
0x17d: Stack[-1] = (bool) 0
0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x180: Call2 0x466

0x181: Pop(1)
0x182: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x183: PushEmpty(bool, object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call2 0x49f

0x186: Pop(1)
0x187: Pop(1); Push((bool) Stack[-1] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 1
0x18a: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18d: Call2 0x4ab

0x18e: Pop(1)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Stack[-1] = (bool) 1
0x192: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Neutral" // @poff=137
0x195: Call2 0x1f8

0x196: Pop(1)
0x197: Push((int) 530396)
0x198: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x199: Pop(1)
0x19a: @@@ ClearReplies(); Obj=0 // @poff=164
0x19b: Pop(0)
0x19c: Push((int) 530397)
0x19d: Push((int) 31770)
0x19e: Push((int) 31769)
0x19f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x1a0: Pop(3)
0x1a1: GOTO 0x1da

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral" // @poff=137
0x1a4: Call2 0x1f8

0x1a5: Pop(1)
0x1a6: Push((int) 530394)
0x1a7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x1a8: Pop(1)
0x1a9: @@@ ClearReplies(); Obj=0 // @poff=164
0x1aa: Pop(0)
0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: PushEmpty(bool)
0x1ae: Stack[-1] = (bool) 0
0x1af: PushEmpty(bool)
0x1b0: Stack[-1] = (bool) 0
0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Call2 0x493

0x1b4: Pop(1)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b6: PushEmpty(bool, object)
0x1b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b8: Call2 0x49f

0x1b9: Pop(1)
0x1ba: Pop(1); Push((bool) Stack[-1] == 0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 1
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1be: PushEmpty(bool, object)
0x1bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Call2 0x4ab

0x1c1: Pop(1)
0x1c2: Pop(1); Push((bool) Stack[-1] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c6: PushEmpty(bool, object)
0x1c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c8: Call2 0x4c3

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: Push((int) 530402)
0x1ce: Push((int) 31775)
0x1cf: Push((int) 31774)
0x1d0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x1d1: Pop(3)
0x1d2: Push((int) 530395)
0x1d3: Push((int) -1)
0x1d4: Push((int) 31767)
0x1d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x1d6: Pop(3)
0x1d7: GOTO 0x1da

0x1d8: Return(); Pop(0)

0x1d9: GOTO 0x151

0x1da: PushEmpty(bool)
0x1db: Call2 0x415

0x1dc: Pop(0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1de: @ lshWaitForAnimEnd()
0x1df: Pop(0)
0x1e0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: GOTO 0x1e8

0x1e3: PushEmpty(string)
0x1e4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1e5: Call2 0x3b0

0x1e6: Pop(1)
0x1e7: GOTO 0x1de

0x1e8: GOTO 0x1f7

0x1e9: Push("all") // @poff=40
0x1ea: Push("idle") // @poff=186
0x1eb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ec: Pop(2)
0x1ed: @ WaitForAnimEnd()
0x1ee: Pop(0)
0x1ef: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: GOTO 0x1f7

0x1f2: Push("all") // @poff=40
0x1f3: Push("idle") // @poff=186
0x1f4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: GOTO 0x1ed

0x1f7: Return(); Pop(0)

0x1f8: PushEmpty()
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x415

0x1fb: Pop(0)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Return(); Pop(0)

0x1ff: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: Return(); Pop(0)

0x202: PushEmpty(string, bool)
0x203: Stack[-3] = Stack[-2]
0x204: Push("") // @poff=13
0x205: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: Stack[-1] = (bool) 0
0x208: GOTO 0x20a

0x209: Stack[-1] = (bool) 1
0x20a: Call2 0x3b7

0x20b: Pop(2)
0x20c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x20d: Return(); Pop(0)

0x20e: PushEmpty()
0x20f: Push((int) 1)
0x210: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x211: PushEmpty()
0x212: Call2 0x3c8

0x213: Pop(0)
0x214: Push((int) 31765)
0x215: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x217: PushEmpty(object, object)
0x218: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x219: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21a: Call2 0x427

0x21b: Pop(2)
0x21c: PushEmpty(object, object)
0x21d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21f: Call2 0x454

0x220: Pop(2)
0x221: PushEmpty(object, object)
0x222: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x223: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x224: Call2 0x417

0x225: Pop(2)
0x226: Push((int) 31773)
0x227: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: PushEmpty(object, object)
0x22a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22c: Call2 0x43e

0x22d: Pop(2)
0x22e: Push((int) 32854)
0x22f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x231: PushEmpty(object, object)
0x232: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x233: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x234: Call2 0x43e

0x235: Pop(2)
0x236: Push((int) 31774)
0x237: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x239: PushEmpty(object, object)
0x23a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23c: Call2 0x44e

0x23d: Pop(2)
0x23e: Push((int) 31758)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: PushEmpty(bool, object)
0x244: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x245: Call2 0x45a

0x246: Pop(1)
0x247: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x248: PushEmpty(bool, object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call2 0x4b7

0x24b: Pop(1)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Stack[-1] = (bool) 1
0x24e: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call2 0x448

0x253: Pop(2)
0x254: PushEmpty(string)
0x255: Stack[-1] = "Neutral" // @poff=137
0x256: Call2 0x1f8

0x257: Pop(1)
0x258: Push((int) 530386)
0x259: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x25a: Pop(1)
0x25b: @@@ ClearReplies(); Obj=0 // @poff=164
0x25c: Pop(0)
0x25d: Push((int) 530387)
0x25e: Push((int) 31760)
0x25f: Push((int) 31759)
0x260: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x261: Pop(3)
0x262: Push((int) 531497)
0x263: Push((int) 31762)
0x264: Push((int) 32855)
0x265: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x266: Pop(3)
0x267: Return(); Pop(0)

0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 0
0x26a: PushEmpty(bool)
0x26b: Stack[-1] = (bool) 0
0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26e: Call2 0x466

0x26f: Pop(1)
0x270: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x273: Call2 0x49f

0x274: Pop(1)
0x275: Pop(1); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: Stack[-1] = (bool) 1
0x278: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x279: PushEmpty(bool, object)
0x27a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Call2 0x4ab

0x27c: Pop(1)
0x27d: Pop(1); Push((bool) Stack[-1] == 0)
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: Stack[-1] = (bool) 1
0x280: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral" // @poff=137
0x283: Call2 0x1f8

0x284: Pop(1)
0x285: Push((int) 530396)
0x286: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x287: Pop(1)
0x288: @@@ ClearReplies(); Obj=0 // @poff=164
0x289: Pop(0)
0x28a: Push((int) 530397)
0x28b: Push((int) 31770)
0x28c: Push((int) 31769)
0x28d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x28e: Pop(3)
0x28f: Return(); Pop(0)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral" // @poff=137
0x292: Call2 0x1f8

0x293: Pop(1)
0x294: Push((int) 530394)
0x295: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x296: Pop(1)
0x297: @@@ ClearReplies(); Obj=0 // @poff=164
0x298: Pop(0)
0x299: PushEmpty(bool)
0x29a: Stack[-1] = (bool) 0
0x29b: PushEmpty(bool)
0x29c: Stack[-1] = (bool) 0
0x29d: PushEmpty(bool)
0x29e: Stack[-1] = (bool) 0
0x29f: PushEmpty(bool, object)
0x2a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a1: Call2 0x493

0x2a2: Pop(1)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a6: Call2 0x49f

0x2a7: Pop(1)
0x2a8: Pop(1); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = (bool) 1
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ae: Call2 0x4ab

0x2af: Pop(1)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: Stack[-1] = (bool) 1
0x2b3: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b4: PushEmpty(bool, object)
0x2b5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b6: Call2 0x4c3

0x2b7: Pop(1)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Stack[-1] = (bool) 1
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: Push((int) 530402)
0x2bc: Push((int) 31775)
0x2bd: Push((int) 31774)
0x2be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2bf: Pop(3)
0x2c0: Push((int) 530395)
0x2c1: Push((int) -1)
0x2c2: Push((int) 31767)
0x2c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 31775)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral" // @poff=137
0x2cb: Call2 0x1f8

0x2cc: Pop(1)
0x2cd: Push((int) 530403)
0x2ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x2cf: Pop(1)
0x2d0: @@@ ClearReplies(); Obj=0 // @poff=164
0x2d1: Pop(0)
0x2d2: Push((int) 530404)
0x2d3: Push((int) -1)
0x2d4: Push((int) 31776)
0x2d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2d6: Pop(3)
0x2d7: Return(); Pop(0)

0x2d8: Push((int) 31770)
0x2d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2db: PushEmpty(string)
0x2dc: Stack[-1] = "Neutral" // @poff=137
0x2dd: Call2 0x1f8

0x2de: Pop(1)
0x2df: Push((int) 530398)
0x2e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x2e1: Pop(1)
0x2e2: @@@ ClearReplies(); Obj=0 // @poff=164
0x2e3: Pop(0)
0x2e4: Push((int) 530399)
0x2e5: Push((int) 31772)
0x2e6: Push((int) 31771)
0x2e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2e8: Pop(3)
0x2e9: Push((int) 531496)
0x2ea: Push((int) -1)
0x2eb: Push((int) 32854)
0x2ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Push((int) 31772)
0x2f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f2: PushEmpty(string)
0x2f3: Stack[-1] = "Neutral" // @poff=137
0x2f4: Call2 0x1f8

0x2f5: Pop(1)
0x2f6: Push((int) 530400)
0x2f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x2f8: Pop(1)
0x2f9: @@@ ClearReplies(); Obj=0 // @poff=164
0x2fa: Pop(0)
0x2fb: Push((int) 530401)
0x2fc: Push((int) -1)
0x2fd: Push((int) 31773)
0x2fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: Push((int) 31760)
0x302: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x304: PushEmpty(string)
0x305: Stack[-1] = "Neutral" // @poff=137
0x306: Call2 0x1f8

0x307: Pop(1)
0x308: Push((int) 530388)
0x309: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x30a: Pop(1)
0x30b: @@@ ClearReplies(); Obj=0 // @poff=164
0x30c: Pop(0)
0x30d: Push((int) 530389)
0x30e: Push((int) 31762)
0x30f: Push((int) 31761)
0x310: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x311: Pop(3)
0x312: Push((int) 531498)
0x313: Push((int) 31762)
0x314: Push((int) 32857)
0x315: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x316: Pop(3)
0x317: Return(); Pop(0)

0x318: Push((int) 31762)
0x319: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x31b: PushEmpty(string)
0x31c: Stack[-1] = "Neutral" // @poff=137
0x31d: Call2 0x1f8

0x31e: Pop(1)
0x31f: Push((int) 530390)
0x320: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x321: Pop(1)
0x322: @@@ ClearReplies(); Obj=0 // @poff=164
0x323: Pop(0)
0x324: Push((int) 530391)
0x325: Push((int) 31764)
0x326: Push((int) 31763)
0x327: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x328: Pop(3)
0x329: Push((int) 531499)
0x32a: Push((int) 31764)
0x32b: Push((int) 32859)
0x32c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x32d: Pop(3)
0x32e: Return(); Pop(0)

0x32f: Push((int) 31764)
0x330: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x331: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x332: PushEmpty(string)
0x333: Stack[-1] = "Neutral" // @poff=137
0x334: Call2 0x1f8

0x335: Pop(1)
0x336: Push((int) 530392)
0x337: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=153
0x338: Pop(1)
0x339: @@@ ClearReplies(); Obj=0 // @poff=164
0x33a: Pop(0)
0x33b: Push((int) 530393)
0x33c: Push((int) -1)
0x33d: Push((int) 31765)
0x33e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=177
0x33f: Pop(3)
0x340: Return(); Pop(0)

0x341: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x342: PushEmpty(bool)
0x343: Call2 0x415

0x344: Pop(0)
0x345: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x346: @ lshStopAnimation()
0x347: Pop(0)
0x348: GOTO 0x34b

0x349: @ StopAnimation()
0x34a: Pop(0)
0x34b: Return(); Pop(0)

0x34c: GOTO 0x20f

0x34d: Return(); Pop(0)

0x34e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x34f: @ GetPosition(Stack[-3])
0x350: Pop(0)
0x351: @@ GetPosition(Stack[-2]); Obj=7 // @poff=196
0x352: Pop(0)
0x353: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x354: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x355: Return(); Pop(6)

0x356: PushEmpty(bool, bool)
0x357: @ IsLoaded(Stack[-1])
0x358: Pop(0)
0x359: Stack[-1] = Stack[-3]
0x35a: Return(); Pop(2)

0x35b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x35c: @@ GetPosition(Stack[-8]); Obj=20 // @poff=196
0x35d: Pop(0)
0x35e: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=208
0x35f: Pop(0)
0x360: Push(CvectorIndex(Stack[-8], 1))
0x361: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x362: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x363: @ GetPosition(Stack[-7])
0x364: Pop(0)
0x365: @ GetEyesHeight(Stack[-9])
0x366: Pop(0)
0x367: Push(CvectorIndex(Stack[-7], 1))
0x368: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x369: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x36a: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x36b: Push(CvectorIndex(Stack[-6], 1))
0x36c: Stack[-1] = (int) 0
0x36d: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x36e: Pop(0); Push(Stack[-6] | Stack[-6]);
0x36f: Pop(1); Push(Sqrt(Stack[-1]))
0x370: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x371: Stack[-5] = -Stack[-6]; Pop(0);
0x372: Pop(0); Push(Stack[-6] * Stack[-19]);
0x373: PushEmpty(cvector, cvector)
0x374: Push([0.0, 1.0, 0.0])
0x375: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x376: Call2 0x3d5

0x377: Pop(1)
0x378: Push((int) 25)
0x379: Pop(2); Push(Stack[-2] * Stack[-1]);
0x37a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37b: Push([0.0, 10.0, 0.0])
0x37c: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x37d: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x37e: @ IsOverrideActive(Stack[-2])
0x37f: Pop(0)
0x380: Push(Stack[-2])
0x381: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x382: Stack[-21] = (bool) 0
0x383: Return(); Pop(18)

0x384: @ StopWorld()
0x385: Pop(0)
0x386: @ CameraTransit(Stack[-3], Stack[-5])
0x387: Pop(0)
0x388: Push(CvectorIndex(Stack[-4], 0))
0x389: Push(CvectorIndex(Stack[-5], 2))
0x38a: @ Rotate(Stack[-2], Stack[-1])
0x38b: Pop(2)
0x38c: PushEmpty(bool)
0x38d: Call2 0x415

0x38e: Pop(0)
0x38f: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x390: GOTO 0x399

0x391: Push("head") // @poff=30
0x392: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x393: Pop(1)
0x394: Push(Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x396: Push("head") // @poff=30
0x397: @ LookAsyncCamera(Stack[-1])
0x398: Pop(1)
0x399: @ CameraWaitForPlayFinish()
0x39a: Pop(0)
0x39b: @ ResumeWorld()
0x39c: Pop(0)
0x39d: Stack[-21] = (bool) 1
0x39e: Return(); Pop(18)

0x39f: PushEmpty(bool, bool)
0x3a0: @ CameraSwitchToNormal()
0x3a1: Pop(0)
0x3a2: PushEmpty(bool)
0x3a3: Call2 0x415

0x3a4: Pop(0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: GOTO 0x3af

0x3a7: Push("head") // @poff=30
0x3a8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a9: Pop(1)
0x3aa: Push(Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ac: Push("head") // @poff=30
0x3ad: @ UnlookAsync(Stack[-1])
0x3ae: Pop(1)
0x3af: Return(); Pop(2)

0x3b0: PushEmpty(float, float, float, float)
0x3b1: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3b2: Pop(0)
0x3b3: Push((bool) 0)
0x3b4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(1)
0x3b6: Return(); Pop(4)

0x3b7: PushEmpty(float, float, float, float)
0x3b8: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3b9: Pop(0)
0x3ba: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3bb: Pop(0)
0x3bc: Return(); Pop(4)

0x3bd: PushEmpty(float, cvector, float, cvector)
0x3be: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=208
0x3bf: Pop(0)
0x3c0: Stack[-1] = [0.0, 0.0, 0.0]
0x3c1: Push(CvectorIndex(Stack[-1], 1))
0x3c2: Stack[-3] = Stack[-1]
0x3c3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3c4: Push("head") // @poff=30
0x3c5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3c6: Pop(1)
0x3c7: Return(); Pop(4)

0x3c8: PushEmpty(bool)
0x3c9: Call2 0x415

0x3ca: Pop(0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cc: @ lshStopSpeech()
0x3cd: Pop(0)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty(object, object)
0x3d0: @ self(Stack[-1])
0x3d1: Pop(0)
0x3d2: Stack[-1] = Stack[-3]
0x3d3: Return(); Pop(2)

0x3d4: Stack[-1] = 0
0x3d5: PushEmpty(float, float)
0x3d6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3d7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3d8: Push((float)9.999999974752427e-07)
0x3d9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-4] = [0.0, 0.0, 0.0]
0x3dc: Return(); Pop(2)

0x3dd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3de: Return(); Pop(2)

0x3df: PushEmpty(int, int)
0x3e0: @ GetVariable(Stack[-3], Stack[-1])
0x3e1: Pop(0)
0x3e2: Stack[-1] = Stack[-4]
0x3e3: Return(); Pop(2)

0x3e4: PushEmpty(object, object)
0x3e5: @ FindActor(Stack[-1], Stack[-4])
0x3e6: Pop(0)
0x3e7: Pop(0); PushNull((bool) Stack[-1] == 0)
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: Stack[-5] = (bool) 0
0x3ea: Return(); Pop(2)

0x3eb: @ Trigger(Stack[-1], Stack[-3])
0x3ec: Pop(0)
0x3ed: Stack[-5] = (bool) 1
0x3ee: Return(); Pop(2)

0x3ef: Stack[-1] = 0
0x3f0: PushEmpty(float, float)
0x3f1: @ GetGameTime(Stack[-1])
0x3f2: Pop(0)
0x3f3: Stack[-1] = Stack[-3]
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty(string, string)
0x3f6: Stack[-1] = "idle" // @poff=186
0x3f7: Push(Stack[-3])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3fa: Stack[-1] = Stack[-4]
0x3fb: Return(); Pop(2)

0x3fc: PushEmpty(int, bool, int, bool)
0x3fd: Stack[-2] = (int) 0
0x3fe: Push("all") // @poff=40
0x3ff: PushEmpty(string, int)
0x400: Stack[-5] = Stack[-1]
0x401: Call2 0x3f5

0x402: Pop(1)
0x403: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(2)
0x405: Pop(0); Push((bool) Stack[-1] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: GOTO 0x40b

0x408: Push((int) 1)
0x409: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x40a: GOTO 0x3fe

0x40b: Stack[-2] = Stack[-5]
0x40c: Return(); Pop(4)

0x40d: Stack[-1] = (int) 521048
0x40e: Return(); Pop(0)

0x40f: Stack[-1] = (int) 521047
0x410: Return(); Pop(0)

0x411: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=222
0x412: Return(); Pop(0)

0x413: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=262
0x414: Return(); Pop(0)

0x415: Stack[-1] = (bool) 0
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: PushEmpty(object, string, float)
0x419: PushEmpty(object)
0x41a: Call2 0x512

0x41b: Stack[-1] = Stack[-4]
0x41c: Pop(1)
0x41d: Stack[-2] = "pt_map_notkin" // @poff=306
0x41e: Stack[-1] = (int) 2
0x41f: Call2 0x523

0x420: Pop(3)
0x421: PushEmpty(object)
0x422: Call2 0x512

0x423: Pop(0)
0x424: @@ ShowMap(Stack[-1]); Obj=2 // @poff=334
0x425: Pop(1)
0x426: Return(); Pop(0)

0x427: PushEmpty(object, object)
0x428: Push("b10q04NotkinTalk") // @poff=342
0x429: Push((int) 1)
0x42a: @ SetVariable(Stack[-2], Stack[-1])
0x42b: Pop(2)
0x42c: PushEmpty(object)
0x42d: Call2 0x512

0x42e: Stack[-1] = Stack[-2]
0x42f: Pop(1)
0x430: Push("b10q04MorlokGotoNotkin") // @poff=376
0x431: Push("pt_map_notkin") // @poff=306
0x432: Push((int) 0)
0x433: Push((int) 530549)
0x434: PushEmpty(float)
0x435: Call2 0x3f0

0x436: Pop(0)
0x437: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=6 // @poff=422
0x438: Pop(5)
0x439: PushEmpty()
0x43a: Call2 0x4dc

0x43b: Pop(0)
0x43c: Return(); Pop(2)

0x43d: Stack[-1] = 0
0x43e: PushEmpty()
0x43f: PushEmpty()
0x440: Call2 0x4cf

0x441: Pop(0)
0x442: PushEmpty(bool, string, string)
0x443: Stack[-2] = "quest_b10_04" // @poff=430
0x444: Stack[-1] = "completed" // @poff=456
0x445: Call2 0x3e4

0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: Push("oob10MorlokMain1") // @poff=476
0x44a: Push((int) 1)
0x44b: @ SetVariable(Stack[-2], Stack[-1])
0x44c: Pop(2)
0x44d: Return(); Pop(0)

0x44e: PushEmpty()
0x44f: Push("oob10MorlokMain2") // @poff=510
0x450: Push((int) 1)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Return(); Pop(0)

0x454: PushEmpty()
0x455: Push("b10q04MorlokTalk") // @poff=544
0x456: Push((int) 1)
0x457: @ SetVariable(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: PushEmpty(int, string)
0x45c: Stack[-1] = "b10q04" // @poff=578
0x45d: Call2 0x3df

0x45e: Pop(1)
0x45f: Push((int) 1)
0x460: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-2] = (bool) 1
0x463: Return(); Pop(0)

0x464: Stack[-2] = (bool) 0
0x465: Return(); Pop(0)

0x466: PushEmpty()
0x467: PushEmpty(bool)
0x468: Stack[-1] = (bool) 0
0x469: PushEmpty(bool)
0x46a: Stack[-1] = (bool) 0
0x46b: PushEmpty(bool)
0x46c: Stack[-1] = (bool) 0
0x46d: PushEmpty(int, string)
0x46e: Stack[-1] = "b10q04NotkinTalk" // @poff=342
0x46f: Call2 0x3df

0x470: Pop(1)
0x471: Push((int) 9)
0x472: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x474: PushEmpty(int, string)
0x475: Stack[-1] = "b10q04Spi4kaTalk" // @poff=592
0x476: Call2 0x3df

0x477: Pop(1)
0x478: Push((int) 9)
0x479: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Stack[-1] = (bool) 1
0x47c: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x47d: PushEmpty(int, string)
0x47e: Stack[-1] = "b10q04MishkaTalk" // @poff=626
0x47f: Call2 0x3df

0x480: Pop(1)
0x481: Push((int) 9)
0x482: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x484: Stack[-1] = (bool) 1
0x485: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x486: PushEmpty(int, string)
0x487: Stack[-1] = "b10q04LaskaTalk" // @poff=660
0x488: Call2 0x3df

0x489: Pop(1)
0x48a: Push((int) 9)
0x48b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Stack[-1] = (bool) 1
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-2] = (bool) 1
0x490: Return(); Pop(0)

0x491: Stack[-2] = (bool) 0
0x492: Return(); Pop(0)

0x493: PushEmpty()
0x494: PushEmpty(int, string)
0x495: Stack[-1] = "b10q04NotkinTalk" // @poff=342
0x496: Call2 0x3df

0x497: Pop(1)
0x498: Push((int) 9)
0x499: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-2] = (bool) 1
0x49c: Return(); Pop(0)

0x49d: Stack[-2] = (bool) 0
0x49e: Return(); Pop(0)

0x49f: PushEmpty()
0x4a0: PushEmpty(int, string)
0x4a1: Stack[-1] = "b10q04" // @poff=578
0x4a2: Call2 0x3df

0x4a3: Pop(1)
0x4a4: Push((int) 1000)
0x4a5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a7: Stack[-2] = (bool) 1
0x4a8: Return(); Pop(0)

0x4a9: Stack[-2] = (bool) 0
0x4aa: Return(); Pop(0)

0x4ab: PushEmpty()
0x4ac: PushEmpty(int, string)
0x4ad: Stack[-1] = "b10q04" // @poff=578
0x4ae: Call2 0x3df

0x4af: Pop(1)
0x4b0: Push((int) -1)
0x4b1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-2] = (bool) 1
0x4b4: Return(); Pop(0)

0x4b5: Stack[-2] = (bool) 0
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty()
0x4b8: PushEmpty(int, string)
0x4b9: Stack[-1] = "oob10MorlokMain1" // @poff=476
0x4ba: Call2 0x3df

0x4bb: Pop(1)
0x4bc: Push((int) 0)
0x4bd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-2] = (bool) 1
0x4c0: Return(); Pop(0)

0x4c1: Stack[-2] = (bool) 0
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty()
0x4c4: PushEmpty(int, string)
0x4c5: Stack[-1] = "oob10MorlokMain2" // @poff=510
0x4c6: Call2 0x3df

0x4c7: Pop(1)
0x4c8: Push((int) 0)
0x4c9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-2] = (bool) 1
0x4cc: Return(); Pop(0)

0x4cd: Stack[-2] = (bool) 0
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty(object, object)
0x4d0: Push((int) 560)
0x4d1: Push((int) 2)
0x4d2: Push((int) 530539)
0x4d3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: PushEmpty(bool, object, int)
0x4d6: Stack[-4] = Stack[-2]
0x4d7: Stack[-1] = (int) 545
0x4d8: Call2 0x4f6

0x4d9: Pop(3)
0x4da: Return(); Pop(2)

0x4db: Stack[-1] = 0
0x4dc: PushEmpty(object, object)
0x4dd: Push((int) 547)
0x4de: Push((int) 2)
0x4df: Push((int) 530438)
0x4e0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e1: Pop(3)
0x4e2: PushEmpty(bool, object, int)
0x4e3: Stack[-4] = Stack[-2]
0x4e4: Stack[-1] = (int) 545
0x4e5: Call2 0x4f6

0x4e6: Pop(3)
0x4e7: Return(); Pop(2)

0x4e8: Stack[-1] = 0
0x4e9: PushEmpty(object, object)
0x4ea: @ GetDiaryRoot(Stack[-1])
0x4eb: Pop(0)
0x4ec: Pop(0); Push((bool) Stack[-1] == 0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ee: Push("Can't retrieve diary root") // @poff=692
0x4ef: @ Trace(Stack[-1])
0x4f0: Pop(1)
0x4f1: Stack[-3] = (bool) 0
0x4f2: Return(); Pop(2)

0x4f3: Stack[-1] = Stack[-3]
0x4f4: Return(); Pop(2)

0x4f5: Stack[-1] = 0
0x4f6: PushEmpty(object, object, int, object, object, int)
0x4f7: PushEmpty(object)
0x4f8: Call2 0x4e9

0x4f9: Stack[-1] = Stack[-4]
0x4fa: Pop(1)
0x4fb: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=744
0x4fc: Pop(0)
0x4fd: Pop(0); Push((bool) Stack[-2] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4ff: Push("Can't find diary parent with id: ") // @poff=749
0x500: Pop(1); Push(Stack[-1] + Stack[-8]);
0x501: @ Trace(Stack[-1])
0x502: Pop(1)
0x503: Stack[-9] = (bool) 0
0x504: Return(); Pop(6)

0x505: @@ AddChild(Stack[-8]); Obj=2 // @poff=817
0x506: Pop(0)
0x507: Push((int) 7)
0x508: @ SendWorldWndMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ GetCategory(Stack[-1]); Obj=8 // @poff=826
0x50b: Pop(0)
0x50c: @ SetDiarySection(Stack[-1])
0x50d: Pop(0)
0x50e: Stack[-9] = (bool) 0
0x50f: Return(); Pop(6)

0x510: Stack[-2] = 0
0x511: Stack[-3] = 0
0x512: PushEmpty(object, object, object, object)
0x513: @ GetMainOutdoorScene(Stack[-2])
0x514: Pop(0)
0x515: Pop(0); PushNull((bool) Stack[-2] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x517: Push("Can't find main outdoor scene") // @poff=838
0x518: @ Trace(Stack[-1])
0x519: Pop(1)
0x51a: Stack[-1] = 0
0x51b: Stack[-1] = Stack[-5]
0x51c: Return(); Pop(4)

0x51d: @@ GetMap(Stack[-1]); Obj=2 // @poff=898
0x51e: Pop(0)
0x51f: Stack[-1] = Stack[-5]
0x520: Return(); Pop(4)

0x521: Stack[-1] = 0
0x522: Stack[-2] = 0
0x523: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x524: @ GetMainOutdoorScene(Stack[-2])
0x525: Pop(0)
0x526: Pop(0); PushNull((bool) Stack[-2] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x528: Push("Can't find main outdoor scene") // @poff=838
0x529: @ Trace(Stack[-1])
0x52a: Pop(1)
0x52b: Return(); Pop(8)

0x52c: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3]); Obj=2 // @poff=905
0x52d: Pop(0)
0x52e: Pop(0); Push((bool) Stack[-1] == 0)
0x52f: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x530: Push("Warning: outdoor scene locator ") // @poff=916
0x531: Pop(1); Push(Stack[-1] + Stack[-11]);
0x532: Push(" doesnt exist") // @poff=980
0x533: Pop(2); Push(Stack[-2] + Stack[-1]);
0x534: @ Trace(Stack[-1])
0x535: Pop(1)
0x536: @@ GetMap(Stack[-11]); Obj=2 // @poff=898
0x537: Pop(0)
0x538: Pop(0); PushNull((bool) Stack[-11] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53a: Push("Can't find map") // @poff=1008
0x53b: @ Trace(Stack[-1])
0x53c: Pop(1)
0x53d: Return(); Pop(8)

0x53e: Push(CvectorIndex(Stack[-4], 0))
0x53f: Push(CvectorIndex(Stack[-5], 2))
0x540: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11]); Obj=13 // @poff=1038
0x541: Pop(2)
0x542: Return(); Pop(8)

0x543: Stack[-2] = 0
0x544: PushEmpty(int, int)
0x545: Push("branch") // @poff=1051
0x546: @ GetVariable(Stack[-1], Stack[-2])
0x547: Pop(1)
0x548: Push((int) 0)
0x549: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54b: Stack[-3] = (int) 1
0x54c: Return(); Pop(2)

0x54d: GOTO 0x553

0x54e: Push((int) 1)
0x54f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x551: Stack[-3] = (int) 2
0x552: Return(); Pop(2)

0x553: Stack[-3] = (int) 3
0x554: Return(); Pop(2)

0x555: PushEmpty()
0x556: PushEmpty(int, object)
0x557: Stack[-3] = Stack[-1]
0x558: Push(-2, 1); TaskCall(1)
0x559: Call2 0x103

0x55a: Pop(-2, 1); TaskReturn
0x55b: Pop(2)
0x55c: Return(); Pop(0)

