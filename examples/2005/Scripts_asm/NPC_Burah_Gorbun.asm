GlobalVarCount = 3
	G_VAR_0 string 
	G_VAR_1 bool 
	G_VAR_2 object 

Strings:
	W:player
	W:ptidle
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
	A:GetLocator
	W:loc
	W:walk_stopl
	W:walk_stopr
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	A:HasProperty
	A:GetProperty
	W:m
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:pt_
	W:cleanup
	W:restore
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
	W:playsound
	W:giveitem
	W:oob1Gorbun1
	W:oob1Gorbun2
	W:b1q02
	W:health
	A:SetProperty
	W:blood is given
	W:b1q02_blood
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:branch
// @pool_raw:70006c006100790065007200000070007400690064006c006500000061006c006c0000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c79004765744c6f6361746f72006c006f0063000000770061006c006b005f00730074006f0070006c000000770061006c006b005f00730074006f00700072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e00000048617350726f70657274790047657450726f7065727479006d000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d6500700074005f00000063006c00650061006e0075007000000072006500730074006f00720065000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e006700000070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006f006f006200310047006f007200620075006e00310000006f006f006200310047006f007200620075006e00320000006200310071003000320000006800650061006c0074006800000053657450726f70657274790062006c006f006f006400200069007300200067006900760065006e000000620031007100300032005f0062006c006f006f0064000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279006200720061006e00630068000000

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	WaitForAnimEnd (1 args)
	Rotate (3 args)
	IsOverrideActive (1 args)
	IsPlayerActor (2 args)
	FindActor (2 args)
	Stop (0 args)
	Sleep (1 args)
	StopAnimation (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	HasAnimation (3 args)
	CreateDialog (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	SetTimeEvent (2 args)
	SensePlayerOnly (1 args)
	GetScene (1 args)
	GetHeight (1 args)
	CanReachByPF (2 args)
	GetAnimationOffset (3 args)
	GetPosition (1 args)
	RotateAsync (2 args)
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
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetGameTime (1 args)
	RemoveActor (1 args)
	TriggerWorld (2 args)
	Trace (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x48d
RunTask = 8

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool) Params = 3
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_0 Op = 0x45 Vars = (object)
		EVENT_10 Op = 0x59 Vars = (object)
		EVENT_7 Op = 0x6d Vars = (int)
	GTASK_2  Params = 1
		EVENT_6 Op = 0xa2 Vars = ()
		EVENT_0 Op = 0xae Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0xf7 Vars = ()
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x243 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x463 Vars = (int, int)
	GTASK_8 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0x50b Vars = ()
		EVENT_0 Op = 0x514 Vars = (object)

Events:
EVENT_26 Op = 0x6dd Vars = (string)
EVENT_6 Op = 0x6f5 Vars = ()
EVENT_9 Op = 0x7af Vars = (int, float)

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x54f

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf: Push((int) 21)
0x10: Push((float)0.5)
0x11: @ SetTimer(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: PushEmpty(bool, cvector)
0x14: Stack[-6] = Stack[-1]
0x15: Call2 0x531

0x16: Pop(1)
0x17: Pop(1); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: GOTO 0x13

0x1a: Push((bool) 0)
0x1b: @ MovePoint(Stack[-5], Stack[-1], Stack[-2])
0x1c: Pop(1)
0x1d: Push(Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: GOTO 0x21

0x20: GOTO 0x13

0x21: Push((int) 20)
0x22: @ KillTimer(Stack[-1])
0x23: Pop(1)
0x24: Push((int) 21)
0x25: @ KillTimer(Stack[-1])
0x26: Pop(1)
0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28: @ WaitForAnimEnd(Stack[-1])
0x29: Pop(0)
0x2a: Pop(0); Push((bool) Stack[-1] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2c: Stack[-5] = (bool) 0
0x2d: Return(); Pop(2)

0x2e: Push(CvectorIndex(Stack[-3], 0))
0x2f: Push(CvectorIndex(Stack[-4], 2))
0x30: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x31: Pop(2)
0x32: Pop(0); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[-5] = (bool) 0
0x35: Return(); Pop(2)

0x36: Stack[-5] = (bool) 1
0x37: Return(); Pop(2)

0x38: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39: PushEmpty()
0x3a: Call2 0x91

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call2 0x6f5

0x3e: Pop(0)
0x3f: PushEmpty()
0x40: Push(-0, 0); TaskCall(0)
0x41: Call2 0x0

0x42: Pop(-0, 0); TaskReturn
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(bool, bool)
0x46: @ IsOverrideActive(Stack[-1])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-1] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x91

0x4c: Pop(0)
0x4d: EventDisable(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-5] = Stack[-1]
0x50: Call2 0x53b

0x51: Pop(2)
0x52: EventEnable(0)
0x53: PushEmpty(object)
0x54: Stack[-4] = Stack[-1]
0x55: Call2 0x7b8

0x56: Pop(1)
0x57: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x58: Return(); Pop(2)

0x59: PushEmpty(bool, bool)
0x5a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5b: Pop(0)
0x5c: Push(Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5e: PushEmpty()
0x5f: Call2 0x91

0x60: Pop(0)
0x61: PushEmpty(object)
0x62: Stack[-4] = Stack[-1]
0x63: Push(-1, 0); TaskCall(2)
0x64: Call2 0x94

0x65: Pop(-1, 0); TaskReturn
0x66: Pop(1)
0x67: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x68: Push((int) 20)
0x69: Push((float)10.0)
0x6a: @ SetTimer(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Return(); Pop(2)

0x6d: PushEmpty(object, object)
0x6e: Push((int) 20)
0x6f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x72: Push((int) 20)
0x73: @ KillTimer(Stack[-1])
0x74: Pop(1)
0x75: GOTO 0x90

0x76: Push((int) 21)
0x77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x79: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7b: Push("player") // @poff=0
0x7c: @ FindActor(Stack[-2], Stack[-1])
0x7d: Pop(1)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: Push(Stack[-2])
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: PushEmpty(float, object)
0x83: Stack[-4] = Stack[-1]
0x84: Call2 0x529

0x85: Pop(1)
0x86: Push((float)62500.0)
0x87: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[-1] = (bool) 1
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: PushEmpty(object)
0x8c: Stack[-2] = Stack[-1]
0x8d: Call2 0x59

0x8e: Pop(1)
0x8f: Stack[-1] = 0
0x90: Return(); Pop(2)

0x91: @ Stop()
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: PushEmpty(bool, bool)
0x95: @ WaitForAnimEnd(Stack[-1])
0x96: Pop(0)
0x97: Pop(0); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(2)

0x9a: PushEmpty(object)
0x9b: Stack[-4] = Stack[-1]
0x9c: Call2 0x544

0x9d: Pop(1)
0x9e: Push((int) 6)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: PushEmpty()
0xa3: Call2 0xc1

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x6f5

0xa7: Pop(0)
0xa8: PushEmpty()
0xa9: Push(-0, 0); TaskCall(0)
0xaa: Call2 0x0

0xab: Pop(-0, 0); TaskReturn
0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(bool, bool)
0xaf: @ IsOverrideActive(Stack[-1])
0xb0: Pop(0)
0xb1: Pop(0); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0xc1

0xb5: Pop(0)
0xb6: EventDisable(0)
0xb7: PushEmpty(bool, object)
0xb8: Stack[-5] = Stack[-1]
0xb9: Call2 0x53b

0xba: Pop(2)
0xbb: EventEnable(0)
0xbc: PushEmpty(object)
0xbd: Stack[-4] = Stack[-1]
0xbe: Call2 0x7b8

0xbf: Pop(1)
0xc0: Return(); Pop(2)

0xc1: @ StopGroup0()
0xc2: Pop(0)
0xc3: @ StopAnimation()
0xc4: Pop(0)
0xc5: Return(); Pop(0)

0xc6: PushEmpty(string, bool, string, int, int, int, int, string, bool, string, int, int, int, int)
0xc7: Push(Stack[-15])
0xc8: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc9: Push("ptidle") // @poff=14
0xca: Stack[-8] = Stack[-1] + Stack[-16]; Pop(1);
0xcb: GOTO 0xcd

0xcc: Stack[-7] = "ptidle" // @poff=14
0xcd: @ HasProperty(Stack[-7], Stack[-6])
0xce: Pop(0)
0xcf: Push(Stack[-6])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: @ GetProperty(Stack[-7], Stack[-5])
0xd2: Pop(0)
0xd3: PushEmpty(int, string)
0xd4: Stack[-7] = Stack[-1]
0xd5: Call2 0x108

0xd6: Stack[-2] = Stack[-6]
0xd7: Pop(2)
0xd8: @ irand(Stack[-3], Stack[-4])
0xd9: Pop(0)
0xda: Push("all") // @poff=28
0xdb: PushEmpty(string, string, int)
0xdc: Stack[-9] = Stack[-2]
0xdd: Stack[-7] = Stack[-1]
0xde: Call2 0x100

0xdf: Pop(2)
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: @ WaitForAnimEnd()
0xe3: Pop(0)
0xe4: GOTO 0xf6

0xe5: PushEmpty(int)
0xe6: Call2 0x6bf

0xe7: Stack[-1] = Stack[-3]
0xe8: Pop(1)
0xe9: Push(Stack[-2])
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ irand(Stack[-1], Stack[-2])
0xec: Pop(0)
0xed: Push("all") // @poff=28
0xee: PushEmpty(string, int)
0xef: Stack[-4] = Stack[-1]
0xf0: Call2 0x6b8

0xf1: Pop(1)
0xf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: PushEmpty()
0xf8: Call2 0x6f5

0xf9: Pop(0)
0xfa: PushEmpty()
0xfb: Push(-0, 0); TaskCall(0)
0xfc: Call2 0x0

0xfd: Pop(-0, 0); TaskReturn
0xfe: Pop(0)
0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-2] = Stack[-3]
0x105: GOTO 0x107

0x106: Stack[-3] = Stack[-2] + Stack[-1]; Pop(0);
0x107: Return(); Pop(0)

0x108: PushEmpty(int, bool, int, bool)
0x109: Stack[-2] = (int) 0
0x10a: Push("all") // @poff=28
0x10b: PushEmpty(string, string, int)
0x10c: Stack[-9] = Stack[-2]
0x10d: Stack[-6] = Stack[-1]
0x10e: Call2 0x100

0x10f: Pop(2)
0x110: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: Pop(0); Push((bool) Stack[-1] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: GOTO 0x118

0x115: Push((int) 1)
0x116: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x117: GOTO 0x10a

0x118: Stack[-2] = Stack[-6]
0x119: Return(); Pop(4)

0x11a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x11b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x11c: PushEmpty(bool, object, float)
0x11d: Stack[-12] = Stack[-2]
0x11e: Stack[-1] = (float) 100.0
0x11f: Call2 0x554

0x120: Pop(2)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-10] = (int) -2
0x124: Return(); Pop(8)

0x125: @ CreateDialog(Stack[-4])
0x126: Pop(0)
0x127: PushEmpty(int)
0x128: Call2 0x6ff

0x129: Pop(0)
0x12a: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=36
0x12b: Pop(1)
0x12c: PushEmpty(int)
0x12d: Call2 0x6fd

0x12e: Pop(0)
0x12f: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=47
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0x701

0x133: Pop(0)
0x134: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=65
0x135: Pop(1)
0x136: PushEmpty(string)
0x137: Call2 0x703

0x138: Pop(0)
0x139: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=74
0x13a: Pop(1)
0x13b: PushEmpty(int)
0x13c: Call2 0x79e

0x13d: Pop(0)
0x13e: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=84
0x13f: Pop(1)
0x140: Stack[-2] = (int) -1
0x141: @ IsOverrideActive(Stack[-3])
0x142: Pop(0)
0x143: Push(Stack[-3])
0x144: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x145: Stack[-10] = (int) -2
0x146: Return(); Pop(8)

0x147: @ DoDialog(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(object, object)
0x14a: Stack[-11] = Stack[-2]
0x14b: Stack[-6] = Stack[-1]
0x14c: Push(-2, 4); TaskCall(5)
0x14d: Call2 0x164

0x14e: Pop(-2, 4); TaskReturn
0x14f: Pop(2)
0x150: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=98
0x151: Pop(0)
0x152: Pop(0); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: @ sync()
0x155: Pop(0)
0x156: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=98
0x157: Pop(0)
0x158: GOTO 0x152

0x159: PushEmpty(object)
0x15a: Stack[-10] = Stack[-1]
0x15b: Call2 0x598

0x15c: Pop(1)
0x15d: @ StopDialog(Stack[-4])
0x15e: Pop(0)
0x15f: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=110
0x160: Pop(0)
0x161: Stack[-2] = Stack[-10]
0x162: Return(); Pop(8)

0x163: Stack[-4] = 0
0x164: PushEmpty()
0x165: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x166: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x167: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x168: Push((int) 1)
0x169: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x16a: PushEmpty(bool)
0x16b: Stack[-1] = (bool) 0
0x16c: PushEmpty(bool)
0x16d: Stack[-1] = (bool) 0
0x16e: PushEmpty(bool, object)
0x16f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x170: Call2 0x733

0x171: Pop(1)
0x172: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x73d

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Stack[-1] = (bool) 1
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x749

0x17d: Pop(1)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = (bool) 1
0x180: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x181: PushEmpty(object, object)
0x182: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x183: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x184: Call2 0x70d

0x185: Pop(2)
0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral" // @poff=125
0x188: Call2 0x22d

0x189: Pop(1)
0x18a: Push((int) 517910)
0x18b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x18c: Pop(1)
0x18d: @@@ ClearReplies(); Obj=0 // @poff=152
0x18e: Pop(0)
0x18f: Push((int) 520406)
0x190: Push((int) 21615)
0x191: Push((int) 21614)
0x192: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x193: Pop(3)
0x194: Push((int) 517911)
0x195: Push((int) 19050)
0x196: Push((int) 19049)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x198: Pop(3)
0x199: GOTO 0x20f

0x19a: PushEmpty(bool)
0x19b: Stack[-1] = (bool) 0
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 0
0x19e: PushEmpty(bool, object)
0x19f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Call2 0x733

0x1a1: Pop(1)
0x1a2: Pop(1); Push((bool) Stack[-1] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a4: PushEmpty(bool, object)
0x1a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a6: Call2 0x73d

0x1a7: Pop(1)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = (bool) 1
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ab: PushEmpty(bool, object)
0x1ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ad: Call2 0x755

0x1ae: Pop(1)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: Stack[-1] = (bool) 1
0x1b1: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b2: PushEmpty(object, object)
0x1b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b5: Call2 0x713

0x1b6: Pop(2)
0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral" // @poff=125
0x1b9: Call2 0x22d

0x1ba: Pop(1)
0x1bb: Push((int) 517915)
0x1bc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x1bd: Pop(1)
0x1be: @@@ ClearReplies(); Obj=0 // @poff=152
0x1bf: Pop(0)
0x1c0: Push((int) 517916)
0x1c1: Push((int) 19055)
0x1c2: Push((int) 19054)
0x1c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x1c4: Pop(3)
0x1c5: Push((int) 520410)
0x1c6: Push((int) 21620)
0x1c7: Push((int) 21619)
0x1c8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x1c9: Pop(3)
0x1ca: GOTO 0x20f

0x1cb: PushEmpty(bool, object)
0x1cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Call2 0x73d

0x1ce: Pop(1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral" // @poff=125
0x1d2: Call2 0x22d

0x1d3: Pop(1)
0x1d4: Push((int) 517919)
0x1d5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x1d6: Pop(1)
0x1d7: @@@ ClearReplies(); Obj=0 // @poff=152
0x1d8: Pop(0)
0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0x733

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1de: Push((int) 517920)
0x1df: Push((int) 19061)
0x1e0: Push((int) 19058)
0x1e1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x1e2: Pop(3)
0x1e3: PushEmpty(bool, object)
0x1e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e5: Call2 0x733

0x1e6: Pop(1)
0x1e7: Pop(1); Push((bool) Stack[-1] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: Push((int) 517921)
0x1ea: Push((int) 19063)
0x1eb: Push((int) 19059)
0x1ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x1ed: Pop(3)
0x1ee: Push((int) 517922)
0x1ef: Push((int) -1)
0x1f0: Push((int) 19060)
0x1f1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x1f2: Pop(3)
0x1f3: GOTO 0x20f

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Neutral" // @poff=125
0x1f6: Call2 0x22d

0x1f7: Pop(1)
0x1f8: Push((int) 517927)
0x1f9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x1fa: Pop(1)
0x1fb: @@@ ClearReplies(); Obj=0 // @poff=152
0x1fc: Pop(0)
0x1fd: Push((int) 518197)
0x1fe: Push((int) -1)
0x1ff: Push((int) 19310)
0x200: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x201: Pop(3)
0x202: Push((int) 518198)
0x203: Push((int) -1)
0x204: Push((int) 19311)
0x205: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x206: Pop(3)
0x207: Push((int) 517928)
0x208: Push((int) -1)
0x209: Push((int) 19066)
0x20a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x20b: Pop(3)
0x20c: GOTO 0x20f

0x20d: Return(); Pop(0)

0x20e: GOTO 0x168

0x20f: PushEmpty(bool)
0x210: Call2 0x705

0x211: Pop(0)
0x212: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x213: @ lshWaitForAnimEnd()
0x214: Pop(0)
0x215: Push( Stack[3 + Tasks[-1].StackPointer] )
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x21d

0x218: PushEmpty(string)
0x219: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x21a: Call2 0x633

0x21b: Pop(1)
0x21c: GOTO 0x213

0x21d: GOTO 0x22c

0x21e: Push("all") // @poff=28
0x21f: Push("idle") // @poff=18
0x220: @ PlayAnimation(Stack[-2], Stack[-1])
0x221: Pop(2)
0x222: @ WaitForAnimEnd()
0x223: Pop(0)
0x224: Push( Stack[3 + Tasks[-1].StackPointer] )
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x22c

0x227: Push("all") // @poff=28
0x228: Push("idle") // @poff=18
0x229: @ PlayAnimation(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: GOTO 0x222

0x22c: Return(); Pop(0)

0x22d: PushEmpty()
0x22e: PushEmpty(bool)
0x22f: Call2 0x705

0x230: Pop(0)
0x231: Pop(1); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: Return(); Pop(0)

0x234: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Return(); Pop(0)

0x237: PushEmpty(string, bool)
0x238: Stack[-3] = Stack[-2]
0x239: Push("") // @poff=11
0x23a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23c: Stack[-1] = (bool) 0
0x23d: GOTO 0x23f

0x23e: Stack[-1] = (bool) 1
0x23f: Call2 0x63a

0x240: Pop(2)
0x241: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x242: Return(); Pop(0)

0x243: PushEmpty()
0x244: Push((int) 1)
0x245: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x246: PushEmpty()
0x247: Call2 0x64f

0x248: Pop(0)
0x249: Push((int) 19051)
0x24a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x24c: PushEmpty(object, object)
0x24d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24f: Call2 0x719

0x250: Pop(2)
0x251: PushEmpty(object, object)
0x252: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x253: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x254: Call2 0x707

0x255: Pop(2)
0x256: Push((int) 19062)
0x257: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x259: PushEmpty(object, object)
0x25a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25c: Call2 0x719

0x25d: Pop(2)
0x25e: Push((int) 19048)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x261: PushEmpty(bool)
0x262: Stack[-1] = (bool) 0
0x263: PushEmpty(bool)
0x264: Stack[-1] = (bool) 0
0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x733

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26a: PushEmpty(bool, object)
0x26b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26c: Call2 0x73d

0x26d: Pop(1)
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Stack[-1] = (bool) 1
0x270: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x271: PushEmpty(bool, object)
0x272: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x273: Call2 0x749

0x274: Pop(1)
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = (bool) 1
0x277: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x278: PushEmpty(object, object)
0x279: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27b: Call2 0x70d

0x27c: Pop(2)
0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral" // @poff=125
0x27f: Call2 0x22d

0x280: Pop(1)
0x281: Push((int) 517910)
0x282: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x283: Pop(1)
0x284: @@@ ClearReplies(); Obj=0 // @poff=152
0x285: Pop(0)
0x286: Push((int) 520406)
0x287: Push((int) 21615)
0x288: Push((int) 21614)
0x289: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x28a: Pop(3)
0x28b: Push((int) 517911)
0x28c: Push((int) 19050)
0x28d: Push((int) 19049)
0x28e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x28f: Pop(3)
0x290: Return(); Pop(0)

0x291: PushEmpty(bool)
0x292: Stack[-1] = (bool) 0
0x293: PushEmpty(bool)
0x294: Stack[-1] = (bool) 0
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x297: Call2 0x733

0x298: Pop(1)
0x299: Pop(1); Push((bool) Stack[-1] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29b: PushEmpty(bool, object)
0x29c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29d: Call2 0x73d

0x29e: Pop(1)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: Stack[-1] = (bool) 1
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0x755

0x2a5: Pop(1)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (bool) 1
0x2a8: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2a9: PushEmpty(object, object)
0x2aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ac: Call2 0x713

0x2ad: Pop(2)
0x2ae: PushEmpty(string)
0x2af: Stack[-1] = "Neutral" // @poff=125
0x2b0: Call2 0x22d

0x2b1: Pop(1)
0x2b2: Push((int) 517915)
0x2b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x2b4: Pop(1)
0x2b5: @@@ ClearReplies(); Obj=0 // @poff=152
0x2b6: Pop(0)
0x2b7: Push((int) 517916)
0x2b8: Push((int) 19055)
0x2b9: Push((int) 19054)
0x2ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2bb: Pop(3)
0x2bc: Push((int) 520410)
0x2bd: Push((int) 21620)
0x2be: Push((int) 21619)
0x2bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2c0: Pop(3)
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty(bool, object)
0x2c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Call2 0x73d

0x2c5: Pop(1)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2c7: PushEmpty(string)
0x2c8: Stack[-1] = "Neutral" // @poff=125
0x2c9: Call2 0x22d

0x2ca: Pop(1)
0x2cb: Push((int) 517919)
0x2cc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x2cd: Pop(1)
0x2ce: @@@ ClearReplies(); Obj=0 // @poff=152
0x2cf: Pop(0)
0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d2: Call2 0x733

0x2d3: Pop(1)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: Push((int) 517920)
0x2d6: Push((int) 19061)
0x2d7: Push((int) 19058)
0x2d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2d9: Pop(3)
0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2dc: Call2 0x733

0x2dd: Pop(1)
0x2de: Pop(1); Push((bool) Stack[-1] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e0: Push((int) 517921)
0x2e1: Push((int) 19063)
0x2e2: Push((int) 19059)
0x2e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2e4: Pop(3)
0x2e5: Push((int) 517922)
0x2e6: Push((int) -1)
0x2e7: Push((int) 19060)
0x2e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2e9: Pop(3)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty(string)
0x2ec: Stack[-1] = "Neutral" // @poff=125
0x2ed: Call2 0x22d

0x2ee: Pop(1)
0x2ef: Push((int) 517927)
0x2f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x2f1: Pop(1)
0x2f2: @@@ ClearReplies(); Obj=0 // @poff=152
0x2f3: Pop(0)
0x2f4: Push((int) 518197)
0x2f5: Push((int) -1)
0x2f6: Push((int) 19310)
0x2f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2f8: Pop(3)
0x2f9: Push((int) 518198)
0x2fa: Push((int) -1)
0x2fb: Push((int) 19311)
0x2fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x2fd: Pop(3)
0x2fe: Push((int) 517928)
0x2ff: Push((int) -1)
0x300: Push((int) 19066)
0x301: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x302: Pop(3)
0x303: Return(); Pop(0)

0x304: Push((int) 19063)
0x305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral" // @poff=125
0x309: Call2 0x22d

0x30a: Pop(1)
0x30b: Push((int) 517925)
0x30c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x30d: Pop(1)
0x30e: @@@ ClearReplies(); Obj=0 // @poff=152
0x30f: Pop(0)
0x310: Push((int) 517926)
0x311: Push((int) -1)
0x312: Push((int) 19064)
0x313: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x314: Pop(3)
0x315: Return(); Pop(0)

0x316: Push((int) 19061)
0x317: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Neutral" // @poff=125
0x31b: Call2 0x22d

0x31c: Pop(1)
0x31d: Push((int) 517923)
0x31e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x31f: Pop(1)
0x320: @@@ ClearReplies(); Obj=0 // @poff=152
0x321: Pop(0)
0x322: Push((int) 517924)
0x323: Push((int) -1)
0x324: Push((int) 19062)
0x325: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x326: Pop(3)
0x327: Return(); Pop(0)

0x328: Push((int) 21620)
0x329: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32b: PushEmpty(string)
0x32c: Stack[-1] = "Neutral" // @poff=125
0x32d: Call2 0x22d

0x32e: Pop(1)
0x32f: Push((int) 520411)
0x330: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x331: Pop(1)
0x332: @@@ ClearReplies(); Obj=0 // @poff=152
0x333: Pop(0)
0x334: Push((int) 520412)
0x335: Push((int) 19055)
0x336: Push((int) 21621)
0x337: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 19055)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Neutral" // @poff=125
0x33f: Call2 0x22d

0x340: Pop(1)
0x341: Push((int) 517917)
0x342: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x343: Pop(1)
0x344: @@@ ClearReplies(); Obj=0 // @poff=152
0x345: Pop(0)
0x346: Push((int) 517918)
0x347: Push((int) 21618)
0x348: Push((int) 19056)
0x349: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x34a: Pop(3)
0x34b: Return(); Pop(0)

0x34c: Push((int) 21618)
0x34d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x34f: PushEmpty(string)
0x350: Stack[-1] = "Neutral" // @poff=125
0x351: Call2 0x22d

0x352: Pop(1)
0x353: Push((int) 520409)
0x354: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x355: Pop(1)
0x356: @@@ ClearReplies(); Obj=0 // @poff=152
0x357: Pop(0)
0x358: Push((int) 520413)
0x359: Push((int) 21624)
0x35a: Push((int) 21623)
0x35b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x35c: Pop(3)
0x35d: Push((int) 520418)
0x35e: Push((int) -1)
0x35f: Push((int) 21628)
0x360: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 21624)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral" // @poff=125
0x368: Call2 0x22d

0x369: Pop(1)
0x36a: Push((int) 520414)
0x36b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x36c: Pop(1)
0x36d: @@@ ClearReplies(); Obj=0 // @poff=152
0x36e: Pop(0)
0x36f: Push((int) 520415)
0x370: Push((int) 21626)
0x371: Push((int) 21625)
0x372: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x373: Pop(3)
0x374: Push((int) 520419)
0x375: Push((int) -1)
0x376: Push((int) 21629)
0x377: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 21626)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Neutral" // @poff=125
0x37f: Call2 0x22d

0x380: Pop(1)
0x381: Push((int) 520416)
0x382: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x383: Pop(1)
0x384: @@@ ClearReplies(); Obj=0 // @poff=152
0x385: Pop(0)
0x386: Push((int) 520417)
0x387: Push((int) -1)
0x388: Push((int) 21627)
0x389: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Push((int) 19050)
0x38d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Neutral" // @poff=125
0x391: Call2 0x22d

0x392: Pop(1)
0x393: Push((int) 517912)
0x394: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x395: Pop(1)
0x396: @@@ ClearReplies(); Obj=0 // @poff=152
0x397: Pop(0)
0x398: Push((int) 517913)
0x399: Push((int) -1)
0x39a: Push((int) 19051)
0x39b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x39c: Pop(3)
0x39d: Push((int) 517914)
0x39e: Push((int) -1)
0x39f: Push((int) 19052)
0x3a0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 21615)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Neutral" // @poff=125
0x3a8: Call2 0x22d

0x3a9: Pop(1)
0x3aa: Push((int) 520407)
0x3ab: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x3ac: Pop(1)
0x3ad: @@@ ClearReplies(); Obj=0 // @poff=152
0x3ae: Pop(0)
0x3af: Push((int) 520408)
0x3b0: Push((int) 19050)
0x3b1: Push((int) 21616)
0x3b2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x3b3: Pop(3)
0x3b4: Return(); Pop(0)

0x3b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3b6: PushEmpty(bool)
0x3b7: Call2 0x705

0x3b8: Pop(0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3ba: @ lshStopAnimation()
0x3bb: Pop(0)
0x3bc: GOTO 0x3bf

0x3bd: @ StopAnimation()
0x3be: Pop(0)
0x3bf: Return(); Pop(0)

0x3c0: GOTO 0x244

0x3c1: Return(); Pop(0)

0x3c2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3c4: PushEmpty(bool, object)
0x3c5: PushEmpty(object)
0x3c6: Call2 0x656

0x3c7: Stack[-1] = Stack[-2]
0x3c8: Pop(1)
0x3c9: Call2 0x5a9

0x3ca: Pop(2)
0x3cb: PushEmpty(bool, object, float)
0x3cc: Stack[-12] = Stack[-2]
0x3cd: Stack[-1] = (float) 100.0
0x3ce: Call2 0x554

0x3cf: Pop(2)
0x3d0: Pop(1); Push((bool) Stack[-1] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: Stack[-10] = (int) -2
0x3d3: Return(); Pop(8)

0x3d4: @ CreateDialog(Stack[-4])
0x3d5: Pop(0)
0x3d6: PushEmpty(int)
0x3d7: Call2 0x6ff

0x3d8: Pop(0)
0x3d9: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=36
0x3da: Pop(1)
0x3db: PushEmpty(int)
0x3dc: Call2 0x6fd

0x3dd: Pop(0)
0x3de: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=47
0x3df: Pop(1)
0x3e0: PushEmpty(string)
0x3e1: Call2 0x701

0x3e2: Pop(0)
0x3e3: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=65
0x3e4: Pop(1)
0x3e5: PushEmpty(string)
0x3e6: Call2 0x703

0x3e7: Pop(0)
0x3e8: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=74
0x3e9: Pop(1)
0x3ea: PushEmpty(int)
0x3eb: Call2 0x79e

0x3ec: Pop(0)
0x3ed: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=84
0x3ee: Pop(1)
0x3ef: Stack[-2] = (int) -1
0x3f0: @ IsOverrideActive(Stack[-3])
0x3f1: Pop(0)
0x3f2: Push(Stack[-3])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-10] = (int) -2
0x3f5: Return(); Pop(8)

0x3f6: @ DoDialog(Stack[-4])
0x3f7: Pop(0)
0x3f8: PushEmpty(object, object)
0x3f9: Stack[-11] = Stack[-2]
0x3fa: Stack[-6] = Stack[-1]
0x3fb: Push(-2, 4); TaskCall(7)
0x3fc: Call2 0x413

0x3fd: Pop(-2, 4); TaskReturn
0x3fe: Pop(2)
0x3ff: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=98
0x400: Pop(0)
0x401: Pop(0); Push((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x403: @ sync()
0x404: Pop(0)
0x405: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=98
0x406: Pop(0)
0x407: GOTO 0x401

0x408: PushEmpty(object)
0x409: Stack[-10] = Stack[-1]
0x40a: Call2 0x598

0x40b: Pop(1)
0x40c: @ StopDialog(Stack[-4])
0x40d: Pop(0)
0x40e: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=110
0x40f: Pop(0)
0x410: Stack[-2] = Stack[-10]
0x411: Return(); Pop(8)

0x412: Stack[-4] = 0
0x413: PushEmpty()
0x414: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x415: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x416: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x417: Push((int) 1)
0x418: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x419: PushEmpty(string)
0x41a: Stack[-1] = "Neutral" // @poff=125
0x41b: Call2 0x44d

0x41c: Pop(1)
0x41d: Push((int) 540554)
0x41e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x41f: Pop(1)
0x420: @@@ ClearReplies(); Obj=0 // @poff=152
0x421: Pop(0)
0x422: Push((int) 540555)
0x423: Push((int) -1)
0x424: Push((int) 42564)
0x425: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x426: Pop(3)
0x427: Push((int) 540794)
0x428: Push((int) -1)
0x429: Push((int) 42843)
0x42a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x42b: Pop(3)
0x42c: GOTO 0x42f

0x42d: Return(); Pop(0)

0x42e: GOTO 0x417

0x42f: PushEmpty(bool)
0x430: Call2 0x705

0x431: Pop(0)
0x432: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x433: @ lshWaitForAnimEnd()
0x434: Pop(0)
0x435: Push( Stack[3 + Tasks[-1].StackPointer] )
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: GOTO 0x43d

0x438: PushEmpty(string)
0x439: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x43a: Call2 0x633

0x43b: Pop(1)
0x43c: GOTO 0x433

0x43d: GOTO 0x44c

0x43e: Push("all") // @poff=28
0x43f: Push("idle") // @poff=18
0x440: @ PlayAnimation(Stack[-2], Stack[-1])
0x441: Pop(2)
0x442: @ WaitForAnimEnd()
0x443: Pop(0)
0x444: Push( Stack[3 + Tasks[-1].StackPointer] )
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: GOTO 0x44c

0x447: Push("all") // @poff=28
0x448: Push("idle") // @poff=18
0x449: @ PlayAnimation(Stack[-2], Stack[-1])
0x44a: Pop(2)
0x44b: GOTO 0x442

0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: PushEmpty(bool)
0x44f: Call2 0x705

0x450: Pop(0)
0x451: Pop(1); Push((bool) Stack[-1] == 0)
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Return(); Pop(0)

0x454: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x455: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x456: Return(); Pop(0)

0x457: PushEmpty(string, bool)
0x458: Stack[-3] = Stack[-2]
0x459: Push("") // @poff=11
0x45a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45c: Stack[-1] = (bool) 0
0x45d: GOTO 0x45f

0x45e: Stack[-1] = (bool) 1
0x45f: Call2 0x63a

0x460: Pop(2)
0x461: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: Push((int) 1)
0x465: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x466: PushEmpty()
0x467: Call2 0x64f

0x468: Pop(0)
0x469: Push((int) 42563)
0x46a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46b: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x46c: PushEmpty(string)
0x46d: Stack[-1] = "Neutral" // @poff=125
0x46e: Call2 0x44d

0x46f: Pop(1)
0x470: Push((int) 540554)
0x471: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=141
0x472: Pop(1)
0x473: @@@ ClearReplies(); Obj=0 // @poff=152
0x474: Pop(0)
0x475: Push((int) 540555)
0x476: Push((int) -1)
0x477: Push((int) 42564)
0x478: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x479: Pop(3)
0x47a: Push((int) 540794)
0x47b: Push((int) -1)
0x47c: Push((int) 42843)
0x47d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=165
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x481: PushEmpty(bool)
0x482: Call2 0x705

0x483: Pop(0)
0x484: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x485: @ lshStopAnimation()
0x486: Pop(0)
0x487: GOTO 0x48a

0x488: @ StopAnimation()
0x489: Pop(0)
0x48a: Return(); Pop(0)

0x48b: GOTO 0x464

0x48c: Return(); Pop(0)

0x48d: Push((int) 0)
0x48e: Push((int) 144)
0x48f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: PushEmpty()
0x492: Call2 0x495

0x493: Pop(0)
0x494: Return(); Pop(0)

0x495: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0x496: Push((bool) 1)
0x497: @ SensePlayerOnly(Stack[-1])
0x498: Pop(1)
0x499: PushEmpty()
0x49a: Call2 0x4ed

0x49b: Pop(0)
0x49c: @ GetScene(Stack[-11])
0x49d: Pop(0)
0x49e: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x49f: PushEmpty(string, int)
0x4a0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4a1: Call2 0x6d0

0x4a2: Pop(1)
0x4a3: @@ GetLocator(Stack[-1], Stack[-11]); Obj=12 // @poff=174
0x4a4: Pop(1)
0x4a5: Pop(0); Push((bool) Stack[-10] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a7: GOTO 0x4ab

0x4a8: Push((int) 1)
0x4a9: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4aa: GOTO 0x49f

0x4ab: PushEmpty(bool)
0x4ac: Call2 0x54f

0x4ad: Pop(0)
0x4ae: Pop(1); Push((bool) Stack[-1] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b0: PushEmpty()
0x4b1: Push(-0, 0); TaskCall(0)
0x4b2: Call2 0x0

0x4b3: Pop(-0, 0); TaskReturn
0x4b4: Pop(0)
0x4b5: PushEmpty()
0x4b6: Call2 0x4f5

0x4b7: Pop(0)
0x4b8: @ irand(Stack[-9], Stack[-2]T)
0x4b9: Pop(0)
0x4ba: PushEmpty(string, int)
0x4bb: Stack[-11] = Stack[-1]
0x4bc: Call2 0x6d0

0x4bd: Pop(1)
0x4be: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7]); Obj=12 // @poff=174
0x4bf: Pop(1)
0x4c0: PushEmpty(cvector)
0x4c1: Call2 0x524

0x4c2: Pop(0)
0x4c3: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0x4c4: PushEmpty(float, cvector)
0x4c5: Stack[-7] = Stack[-1]
0x4c6: Call2 0x66e

0x4c7: Pop(1)
0x4c8: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4ca: @ GetHeight(Stack[-4])
0x4cb: Pop(0)
0x4cc: Stack[-7] = Stack[-3]
0x4cd: Push(CvectorIndex(Stack[-3], 1))
0x4ce: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0x4cf: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x4d0: @ CanReachByPF(Stack[-2], Stack[-3])
0x4d1: Pop(0)
0x4d2: Push(Stack[-2])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4d4: Pop(0); Push(Stack[-5] | Stack[-5]);
0x4d5: Pop(1); Push(Sqrt(Stack[-1]))
0x4d6: Pop(1); Push(Stack[0 + Tasks[-1].StackPointer] / Stack[-1]);
0x4d7: Pop(1); Push(Stack[-6] * Stack[-1]);
0x4d8: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0x4d9: PushEmpty(bool, cvector, cvector)
0x4da: Stack[-4] = Stack[-2]
0x4db: Stack[-9] = Stack[-1]
0x4dc: Push(-3, 1); TaskCall(1)
0x4dd: Call2 0xd

0x4de: Pop(-3, 1); TaskReturn
0x4df: Pop(2)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e1: PushEmpty(int)
0x4e2: Stack[-10] = Stack[-1]
0x4e3: Push(-1, 0); TaskCall(3)
0x4e4: Call2 0xc6

0x4e5: Pop(-1, 0); TaskReturn
0x4e6: Pop(1)
0x4e7: Push((int) 1)
0x4e8: @ Sleep(Stack[-1])
0x4e9: Pop(1)
0x4ea: GOTO 0x4b8

0x4eb: Return(); Pop(22)

0x4ec: Stack[-11] = 0
0x4ed: PushEmpty(string, string)
0x4ee: Push("loc") // @poff=185
0x4ef: @ GetProperty(Stack[-1], Stack[-2])
0x4f0: Pop(1)
0x4f1: Push(GlobalVars[0])
0x4f2: Stack[-2] = Stack[-1]
0x4f3: GlobalVars[0] = Stack[-1]; Pop(1)
0x4f4: Return(); Pop(2)

0x4f5: PushEmpty(cvector, cvector, cvector, cvector)
0x4f6: Push("all") // @poff=28
0x4f7: Push("walk_stopl") // @poff=193
0x4f8: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0x4f9: Pop(2)
0x4fa: Push("all") // @poff=28
0x4fb: Push("walk_stopr") // @poff=215
0x4fc: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(2)
0x4fe: Push(CvectorIndex(Stack[-2], 2))
0x4ff: Push(CvectorIndex(Stack[-2], 2))
0x500: Pop(2); Push(Stack[-2] + Stack[-1]);
0x501: Push((float)2.0)
0x502: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x503: PushEmpty(float, float)
0x504: Push(CvectorIndex(Stack[-4], 2))
0x505: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x506: Call2 0x666

0x507: Pop(1)
0x508: Push((int) 40)
0x509: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x50a: Return(); Pop(4)

0x50b: PushEmpty()
0x50c: Call2 0x6f5

0x50d: Pop(0)
0x50e: PushEmpty()
0x50f: Push(-0, 0); TaskCall(0)
0x510: Call2 0x0

0x511: Pop(-0, 0); TaskReturn
0x512: Pop(0)
0x513: Return(); Pop(0)

0x514: PushEmpty(bool, bool)
0x515: @ IsOverrideActive(Stack[-1])
0x516: Pop(0)
0x517: Pop(0); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x519: EventDisable(0)
0x51a: PushEmpty(bool, object)
0x51b: Stack[-5] = Stack[-1]
0x51c: Call2 0x53b

0x51d: Pop(2)
0x51e: EventEnable(0)
0x51f: PushEmpty(object)
0x520: Stack[-4] = Stack[-1]
0x521: Call2 0x7b8

0x522: Pop(1)
0x523: Return(); Pop(2)

0x524: PushEmpty(cvector, cvector)
0x525: @ GetPosition(Stack[-1])
0x526: Pop(0)
0x527: Stack[-1] = Stack[-3]
0x528: Return(); Pop(2)

0x529: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x52a: @ GetPosition(Stack[-3])
0x52b: Pop(0)
0x52c: @@ GetPosition(Stack[-2]); Obj=7 // @poff=237
0x52d: Pop(0)
0x52e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x52f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x530: Return(); Pop(6)

0x531: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x532: @ GetPosition(Stack[-3])
0x533: Pop(0)
0x534: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x535: Push(CvectorIndex(Stack[-2], 0))
0x536: Push(CvectorIndex(Stack[-3], 2))
0x537: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x538: Pop(2)
0x539: Stack[-1] = Stack[-8]
0x53a: Return(); Pop(6)

0x53b: PushEmpty(cvector, cvector)
0x53c: @@ GetPosition(Stack[-1]); Obj=3 // @poff=237
0x53d: Pop(0)
0x53e: PushEmpty(bool, cvector)
0x53f: Stack[-3] = Stack[-1]
0x540: Call2 0x531

0x541: Stack[-2] = Stack[-6]
0x542: Pop(2)
0x543: Return(); Pop(2)

0x544: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x545: @@ GetPosition(Stack[-3]); Obj=7 // @poff=237
0x546: Pop(0)
0x547: @ GetPosition(Stack[-2])
0x548: Pop(0)
0x549: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x54a: Push(CvectorIndex(Stack[-1], 0))
0x54b: Push(CvectorIndex(Stack[-2], 2))
0x54c: @ RotateAsync(Stack[-2], Stack[-1])
0x54d: Pop(2)
0x54e: Return(); Pop(6)

0x54f: PushEmpty(bool, bool)
0x550: @ IsLoaded(Stack[-1])
0x551: Pop(0)
0x552: Stack[-1] = Stack[-3]
0x553: Return(); Pop(2)

0x554: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x555: @@ GetPosition(Stack[-8]); Obj=20 // @poff=237
0x556: Pop(0)
0x557: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=249
0x558: Pop(0)
0x559: Push(CvectorIndex(Stack[-8], 1))
0x55a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x55b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x55c: @ GetPosition(Stack[-7])
0x55d: Pop(0)
0x55e: @ GetEyesHeight(Stack[-9])
0x55f: Pop(0)
0x560: Push(CvectorIndex(Stack[-7], 1))
0x561: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x562: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x563: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x564: Push(CvectorIndex(Stack[-6], 1))
0x565: Stack[-1] = (int) 0
0x566: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x567: Pop(0); Push(Stack[-6] | Stack[-6]);
0x568: Pop(1); Push(Sqrt(Stack[-1]))
0x569: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x56a: Stack[-5] = -Stack[-6]; Pop(0);
0x56b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x56c: PushEmpty(cvector, cvector)
0x56d: Push([0.0, 1.0, 0.0])
0x56e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x56f: Call2 0x65c

0x570: Pop(1)
0x571: Push((int) 25)
0x572: Pop(2); Push(Stack[-2] * Stack[-1]);
0x573: Pop(2); Push(Stack[-2] + Stack[-1]);
0x574: Push([0.0, 10.0, 0.0])
0x575: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x576: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x577: @ IsOverrideActive(Stack[-2])
0x578: Pop(0)
0x579: Push(Stack[-2])
0x57a: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57b: Stack[-21] = (bool) 0
0x57c: Return(); Pop(18)

0x57d: @ StopWorld()
0x57e: Pop(0)
0x57f: @ CameraTransit(Stack[-3], Stack[-5])
0x580: Pop(0)
0x581: Push(CvectorIndex(Stack[-4], 0))
0x582: Push(CvectorIndex(Stack[-5], 2))
0x583: @ Rotate(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: PushEmpty(bool)
0x586: Call2 0x705

0x587: Pop(0)
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: GOTO 0x592

0x58a: Push("head") // @poff=263
0x58b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x58c: Pop(1)
0x58d: Push(Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58f: Push("head") // @poff=263
0x590: @ LookAsyncCamera(Stack[-1])
0x591: Pop(1)
0x592: @ CameraWaitForPlayFinish()
0x593: Pop(0)
0x594: @ ResumeWorld()
0x595: Pop(0)
0x596: Stack[-21] = (bool) 1
0x597: Return(); Pop(18)

0x598: PushEmpty(bool, bool)
0x599: @ CameraSwitchToNormal()
0x59a: Pop(0)
0x59b: PushEmpty(bool)
0x59c: Call2 0x705

0x59d: Pop(0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: GOTO 0x5a8

0x5a0: Push("head") // @poff=263
0x5a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5a2: Pop(1)
0x5a3: Push(Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a5: Push("head") // @poff=263
0x5a6: @ UnlookAsync(Stack[-1])
0x5a7: Pop(1)
0x5a8: Return(); Pop(2)

0x5a9: PushEmpty(int, int, int, int)
0x5aa: Push("voice_common") // @poff=273
0x5ab: @ GetVariable(Stack[-1], Stack[-3])
0x5ac: Pop(1)
0x5ad: Push(Stack[-2])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5af: PushEmpty(bool, object)
0x5b0: Stack[-7] = Stack[-1]
0x5b1: Call2 0x5e3

0x5b2: Pop(1)
0x5b3: Pop(1); Push((bool) Stack[-1] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b5: PushEmpty(bool, object)
0x5b6: Stack[-7] = Stack[-1]
0x5b7: Call2 0x608

0x5b8: Pop(1)
0x5b9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-6] = (bool) 0
0x5bc: Return(); Pop(4)

0x5bd: Push((int) 2)
0x5be: @ irand(Stack[-2], Stack[-1])
0x5bf: Pop(1)
0x5c0: Push(Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c2: Push("voice_common") // @poff=273
0x5c3: Push((int) 1)
0x5c4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5c5: Push((int) 3)
0x5c6: Pop(2); Push(Stack[-2] % Stack[-1]);
0x5c7: @ SetVariable(Stack[-2], Stack[-1])
0x5c8: Pop(2)
0x5c9: GOTO 0x5ce

0x5ca: Push("voice_common") // @poff=273
0x5cb: Push((int) 0)
0x5cc: @ SetVariable(Stack[-2], Stack[-1])
0x5cd: Pop(2)
0x5ce: GOTO 0x5e1

0x5cf: PushEmpty(bool, object)
0x5d0: Stack[-7] = Stack[-1]
0x5d1: Call2 0x608

0x5d2: Pop(1)
0x5d3: Pop(1); Push((bool) Stack[-1] == 0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5d5: PushEmpty(bool, object)
0x5d6: Stack[-7] = Stack[-1]
0x5d7: Call2 0x5e3

0x5d8: Pop(1)
0x5d9: Pop(1); Push((bool) Stack[-1] == 0)
0x5da: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5db: Stack[-6] = (bool) 0
0x5dc: Return(); Pop(4)

0x5dd: Push("voice_common") // @poff=273
0x5de: Push((int) 1)
0x5df: @ SetVariable(Stack[-2], Stack[-1])
0x5e0: Pop(2)
0x5e1: Stack[-6] = (bool) 1
0x5e2: Return(); Pop(4)

0x5e3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5e4: Stack[-5] = "c" // @poff=189
0x5e5: Stack[-4] = (int) 0
0x5e6: Push((int) 1)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5e8: Push((int) 1)
0x5e9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5ea: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5eb: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=299
0x5ec: Pop(1)
0x5ed: Pop(0); Push((bool) Stack[-3] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: GOTO 0x5f3

0x5f0: Push((int) 1)
0x5f1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5f2: GOTO 0x5e6

0x5f3: Pop(0); Push((bool) Stack[-4] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f5: Stack[-12] = (bool) 0
0x5f6: Return(); Pop(10)

0x5f7: Stack[-2] = (int) 0
0x5f8: Push((int) 1)
0x5f9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fb: @ irand(Stack[-2], Stack[-4])
0x5fc: Pop(0)
0x5fd: Push((int) 1)
0x5fe: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5ff: Pop(1); Push(Stack[-6] + Stack[-1]);
0x600: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=311
0x601: Pop(1)
0x602: PushEmpty(bool, string)
0x603: Stack[-3] = Stack[-1]
0x604: Call2 0x640

0x605: Stack[-2] = Stack[-14]
0x606: Pop(2)
0x607: Return(); Pop(10)

0x608: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x609: Push("d") // @poff=269
0x60a: PushEmpty(int)
0x60b: Call2 0x6a9

0x60c: Pop(0)
0x60d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x60e: Push("m") // @poff=323
0x60f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x610: Stack[-4] = (int) 0
0x611: Push((int) 1)
0x612: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x613: Push((int) 1)
0x614: Pop(1); Push(Stack[-5] + Stack[-1]);
0x615: Pop(1); Push(Stack[-6] + Stack[-1]);
0x616: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=299
0x617: Pop(1)
0x618: Pop(0); Push((bool) Stack[-3] == 0)
0x619: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x61a: GOTO 0x61e

0x61b: Push((int) 1)
0x61c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x61d: GOTO 0x611

0x61e: Pop(0); Push((bool) Stack[-4] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x620: Stack[-12] = (bool) 0
0x621: Return(); Pop(10)

0x622: Stack[-2] = (int) 0
0x623: Push((int) 1)
0x624: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: @ irand(Stack[-2], Stack[-4])
0x627: Pop(0)
0x628: Push((int) 1)
0x629: Pop(1); Push(Stack[-3] + Stack[-1]);
0x62a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x62b: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=311
0x62c: Pop(1)
0x62d: PushEmpty(bool, string)
0x62e: Stack[-3] = Stack[-1]
0x62f: Call2 0x640

0x630: Stack[-2] = Stack[-14]
0x631: Pop(2)
0x632: Return(); Pop(10)

0x633: PushEmpty(float, float, float, float)
0x634: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x635: Pop(0)
0x636: Push((bool) 0)
0x637: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(1)
0x639: Return(); Pop(4)

0x63a: PushEmpty(float, float, float, float)
0x63b: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x63c: Pop(0)
0x63d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x63e: Pop(0)
0x63f: Return(); Pop(4)

0x640: PushEmpty(bool, bool)
0x641: PushEmpty(bool)
0x642: Call2 0x705

0x643: Pop(0)
0x644: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x645: @ lshHasSpeech(Stack[-1], Stack[-3])
0x646: Pop(0)
0x647: Push(Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x649: @ lshPlaySpeech(Stack[-3])
0x64a: Pop(0)
0x64b: Stack[-4] = (bool) 1
0x64c: Return(); Pop(2)

0x64d: Stack[-4] = (bool) 0
0x64e: Return(); Pop(2)

0x64f: PushEmpty(bool)
0x650: Call2 0x705

0x651: Pop(0)
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: @ lshStopSpeech()
0x654: Pop(0)
0x655: Return(); Pop(0)

0x656: PushEmpty(object, object)
0x657: @ self(Stack[-1])
0x658: Pop(0)
0x659: Stack[-1] = Stack[-3]
0x65a: Return(); Pop(2)

0x65b: Stack[-1] = 0
0x65c: PushEmpty(float, float)
0x65d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x65e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x65f: Push((float)9.999999974752427e-07)
0x660: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-4] = [0.0, 0.0, 0.0]
0x663: Return(); Pop(2)

0x664: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x665: Return(); Pop(2)

0x666: PushEmpty()
0x667: Push((int) 0)
0x668: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-2] = -Stack[-1]; Pop(0);
0x66b: GOTO 0x66d

0x66c: Stack[-1] = Stack[-2]
0x66d: Return(); Pop(0)

0x66e: PushEmpty()
0x66f: Push(CvectorIndex(Stack[-1], 0))
0x670: Push(CvectorIndex(Stack[-2], 0))
0x671: Pop(2); Push(Stack[-2] * Stack[-1]);
0x672: Push(CvectorIndex(Stack[-2], 2))
0x673: Push(CvectorIndex(Stack[-3], 2))
0x674: Pop(2); Push(Stack[-2] * Stack[-1]);
0x675: Pop(2); Push(Stack[-2] + Stack[-1]);
0x676: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x677: Return(); Pop(0)

0x678: PushEmpty(int, int)
0x679: @ GetVariable(Stack[-3], Stack[-1])
0x67a: Pop(0)
0x67b: Stack[-1] = Stack[-4]
0x67c: Return(); Pop(2)

0x67d: PushEmpty(object, object)
0x67e: @ CreateIntVector(Stack[-1])
0x67f: Pop(0)
0x680: @@ add(Stack[-4]); Obj=1 // @poff=327
0x681: Pop(0)
0x682: @@ add(Stack[-3]); Obj=1 // @poff=327
0x683: Pop(0)
0x684: Push((int) 3)
0x685: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x686: Pop(1)
0x687: Return(); Pop(2)

0x688: Stack[-1] = 0
0x689: PushEmpty(int, int, bool, int, int, bool)
0x68a: @@ GetItemID(Stack[-3]); Obj=8 // @poff=331
0x68b: Pop(0)
0x68c: Push("Category") // @poff=341
0x68d: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x68e: Pop(1)
0x68f: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=359
0x690: Pop(0)
0x691: Pop(0); Push((bool) Stack[-1] == 0)
0x692: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x693: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=367
0x694: Pop(0)
0x695: GOTO 0x69b

0x696: PushEmpty(int, int)
0x697: Stack[-5] = Stack[-2]
0x698: Stack[-9] = Stack[-1]
0x699: Call2 0x67d

0x69a: Pop(2)
0x69b: Return(); Pop(6)

0x69c: PushEmpty(object, object)
0x69d: @ CreateInvItem(Stack[-1])
0x69e: Pop(0)
0x69f: @@ SetItemName(Stack[-4]); Obj=1 // @poff=377
0x6a0: Pop(0)
0x6a1: PushEmpty(object, object, int)
0x6a2: Stack[-8] = Stack[-3]
0x6a3: Stack[-4] = Stack[-2]
0x6a4: Stack[-6] = Stack[-1]
0x6a5: Call2 0x689

0x6a6: Pop(3)
0x6a7: Return(); Pop(2)

0x6a8: Stack[-1] = 0
0x6a9: PushEmpty(float, float)
0x6aa: @ GetGameTime(Stack[-1])
0x6ab: Pop(0)
0x6ac: Push((int) 1)
0x6ad: PushEmpty(int)
0x6ae: Push((int) 24)
0x6af: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6b0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6b1: Return(); Pop(2)

0x6b2: PushEmpty()
0x6b3: PushEmpty(int)
0x6b4: Call2 0x6a9

0x6b5: Pop(0)
0x6b6: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x6b7: Return(); Pop(0)

0x6b8: PushEmpty(string, string)
0x6b9: Stack[-1] = "idle" // @poff=18
0x6ba: Push(Stack[-3])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6bd: Stack[-1] = Stack[-4]
0x6be: Return(); Pop(2)

0x6bf: PushEmpty(int, bool, int, bool)
0x6c0: Stack[-2] = (int) 0
0x6c1: Push("all") // @poff=28
0x6c2: PushEmpty(string, int)
0x6c3: Stack[-5] = Stack[-1]
0x6c4: Call2 0x6b8

0x6c5: Pop(1)
0x6c6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(2)
0x6c8: Pop(0); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: GOTO 0x6ce

0x6cb: Push((int) 1)
0x6cc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6cd: GOTO 0x6c1

0x6ce: Stack[-2] = Stack[-5]
0x6cf: Return(); Pop(4)

0x6d0: PushEmpty()
0x6d1: Push((int) 0)
0x6d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d4: Push("pt_") // @poff=389
0x6d5: Push(GlobalVars[0])
0x6d6: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x6d7: GOTO 0x6dc

0x6d8: Push("pt_") // @poff=389
0x6d9: Push(GlobalVars[0])
0x6da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6db: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x6dc: Return(); Pop(0)

0x6dd: PushEmpty(bool, bool)
0x6de: Push("cleanup") // @poff=397
0x6df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e1: Push(GlobalVars[1])
0x6e2: Stack[-1] = (bool) 1
0x6e3: GlobalVars[1] = Stack[-1]; Pop(1)
0x6e4: @ IsLoaded(Stack[-1])
0x6e5: Pop(0)
0x6e6: Pop(0); Push((bool) Stack[-1] == 0)
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6e8: PushEmpty(object)
0x6e9: Call2 0x656

0x6ea: Pop(0)
0x6eb: @ RemoveActor(Stack[-1])
0x6ec: Pop(1)
0x6ed: GOTO 0x6f4

0x6ee: Push("restore") // @poff=413
0x6ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f1: Push(GlobalVars[1])
0x6f2: Stack[-1] = (bool) 0
0x6f3: GlobalVars[1] = Stack[-1]; Pop(1)
0x6f4: Return(); Pop(2)

0x6f5: Push(GlobalVars[1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f7: PushEmpty(object)
0x6f8: Call2 0x656

0x6f9: Pop(0)
0x6fa: @ RemoveActor(Stack[-1])
0x6fb: Pop(1)
0x6fc: Return(); Pop(0)

0x6fd: Stack[-1] = (int) 515594
0x6fe: Return(); Pop(0)

0x6ff: Stack[-1] = (int) 512583
0x700: Return(); Pop(0)

0x701: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=429
0x702: Return(); Pop(0)

0x703: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=469
0x704: Return(); Pop(0)

0x705: Stack[-1] = (bool) 0
0x706: Return(); Pop(0)

0x707: PushEmpty()
0x708: Push("playsound") // @poff=513
0x709: Push("giveitem") // @poff=533
0x70a: @ TriggerWorld(Stack[-2], Stack[-1])
0x70b: Pop(2)
0x70c: Return(); Pop(0)

0x70d: PushEmpty()
0x70e: Push("oob1Gorbun1") // @poff=551
0x70f: Push((int) 1)
0x710: @ SetVariable(Stack[-2], Stack[-1])
0x711: Pop(2)
0x712: Return(); Pop(0)

0x713: PushEmpty()
0x714: Push("oob1Gorbun2") // @poff=575
0x715: Push((int) 1)
0x716: @ SetVariable(Stack[-2], Stack[-1])
0x717: Pop(2)
0x718: Return(); Pop(0)

0x719: PushEmpty(float, float)
0x71a: Push("b1q02") // @poff=599
0x71b: Push((int) 2)
0x71c: @ SetVariable(Stack[-2], Stack[-1])
0x71d: Pop(2)
0x71e: PushEmpty()
0x71f: Call2 0x768

0x720: Pop(0)
0x721: Push("health") // @poff=611
0x722: @@ GetProperty(Stack[-1], Stack[-2]); Obj=5 // @poff=311
0x723: Pop(1)
0x724: Push((float)0.30000001192092896)
0x725: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x726: Push("health") // @poff=611
0x727: @@ SetProperty(Stack[-1], Stack[-2]); Obj=5 // @poff=625
0x728: Pop(1)
0x729: Push("blood is given") // @poff=637
0x72a: @ Trace(Stack[-1])
0x72b: Pop(1)
0x72c: PushEmpty(object, string, int)
0x72d: Stack[-7] = Stack[-3]
0x72e: Stack[-2] = "b1q02_blood" // @poff=667
0x72f: Stack[-1] = (int) 1
0x730: Call2 0x69c

0x731: Pop(3)
0x732: Return(); Pop(2)

0x733: PushEmpty()
0x734: PushEmpty(bool, object)
0x735: Stack[-3] = Stack[-1]
0x736: Call2 0x761

0x737: Pop(1)
0x738: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x739: Stack[-2] = (bool) 1
0x73a: Return(); Pop(0)

0x73b: Stack[-2] = (bool) 0
0x73c: Return(); Pop(0)

0x73d: PushEmpty()
0x73e: PushEmpty(int, string)
0x73f: Stack[-1] = "b1q02" // @poff=599
0x740: Call2 0x678

0x741: Pop(1)
0x742: Push((int) 1)
0x743: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x745: Stack[-2] = (bool) 1
0x746: Return(); Pop(0)

0x747: Stack[-2] = (bool) 0
0x748: Return(); Pop(0)

0x749: PushEmpty()
0x74a: PushEmpty(int, string)
0x74b: Stack[-1] = "oob1Gorbun1" // @poff=551
0x74c: Call2 0x678

0x74d: Pop(1)
0x74e: Push((int) 0)
0x74f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x751: Stack[-2] = (bool) 1
0x752: Return(); Pop(0)

0x753: Stack[-2] = (bool) 0
0x754: Return(); Pop(0)

0x755: PushEmpty()
0x756: PushEmpty(int, string)
0x757: Stack[-1] = "oob1Gorbun2" // @poff=575
0x758: Call2 0x678

0x759: Pop(1)
0x75a: Push((int) 0)
0x75b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x75c: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75d: Stack[-2] = (bool) 1
0x75e: Return(); Pop(0)

0x75f: Stack[-2] = (bool) 0
0x760: Return(); Pop(0)

0x761: PushEmpty(float, float)
0x762: Push("health") // @poff=611
0x763: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=311
0x764: Pop(1)
0x765: Push((float)0.4000000059604645)
0x766: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x767: Return(); Pop(2)

0x768: PushEmpty(object, object)
0x769: Push((int) 202)
0x76a: Push((int) 2)
0x76b: Push((int) 517942)
0x76c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: PushEmpty(bool, object, int)
0x76f: Stack[-4] = Stack[-2]
0x770: Stack[-1] = (int) 200
0x771: Call2 0x782

0x772: Pop(3)
0x773: Return(); Pop(2)

0x774: Stack[-1] = 0
0x775: PushEmpty(object, object)
0x776: @ GetDiaryRoot(Stack[-1])
0x777: Pop(0)
0x778: Pop(0); Push((bool) Stack[-1] == 0)
0x779: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77a: Push("Can't retrieve diary root") // @poff=691
0x77b: @ Trace(Stack[-1])
0x77c: Pop(1)
0x77d: Stack[-3] = (bool) 0
0x77e: Return(); Pop(2)

0x77f: Stack[-1] = Stack[-3]
0x780: Return(); Pop(2)

0x781: Stack[-1] = 0
0x782: PushEmpty(object, object, int, object, object, int)
0x783: PushEmpty(object)
0x784: Call2 0x775

0x785: Stack[-1] = Stack[-4]
0x786: Pop(1)
0x787: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=743
0x788: Pop(0)
0x789: Pop(0); Push((bool) Stack[-2] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x78b: Push("Can't find diary parent with id: ") // @poff=748
0x78c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x78d: @ Trace(Stack[-1])
0x78e: Pop(1)
0x78f: Stack[-9] = (bool) 0
0x790: Return(); Pop(6)

0x791: @@ AddChild(Stack[-8]); Obj=2 // @poff=816
0x792: Pop(0)
0x793: Push((int) 7)
0x794: @ SendWorldWndMessage(Stack[-1])
0x795: Pop(1)
0x796: @@ GetCategory(Stack[-1]); Obj=8 // @poff=825
0x797: Pop(0)
0x798: @ SetDiarySection(Stack[-1])
0x799: Pop(0)
0x79a: Stack[-9] = (bool) 0
0x79b: Return(); Pop(6)

0x79c: Stack[-2] = 0
0x79d: Stack[-3] = 0
0x79e: PushEmpty(int, int)
0x79f: Push("branch") // @poff=837
0x7a0: @ GetVariable(Stack[-1], Stack[-2])
0x7a1: Pop(1)
0x7a2: Push((int) 0)
0x7a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a5: Stack[-3] = (int) 1
0x7a6: Return(); Pop(2)

0x7a7: GOTO 0x7ad

0x7a8: Push((int) 1)
0x7a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-3] = (int) 2
0x7ac: Return(); Pop(2)

0x7ad: Stack[-3] = (int) 3
0x7ae: Return(); Pop(2)

0x7af: PushEmpty()
0x7b0: Push((int) 0)
0x7b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b3: PushEmpty(string)
0x7b4: Stack[-1] = "cleanup" // @poff=397
0x7b5: Call2 0x6dd

0x7b6: Pop(1)
0x7b7: Return(); Pop(0)

0x7b8: PushEmpty()
0x7b9: PushEmpty(bool, int)
0x7ba: Stack[-1] = (int) 1
0x7bb: Call2 0x6b2

0x7bc: Pop(1)
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7be: PushEmpty(int, object)
0x7bf: Stack[-3] = Stack[-1]
0x7c0: Push(-2, 1); TaskCall(4)
0x7c1: Call2 0x11a

0x7c2: Pop(-2, 1); TaskReturn
0x7c3: Pop(2)
0x7c4: Return(); Pop(0)

0x7c5: PushEmpty(int, object)
0x7c6: Stack[-3] = Stack[-1]
0x7c7: Push(-2, 1); TaskCall(6)
0x7c8: Call2 0x3c2

0x7c9: Pop(-2, 1); TaskReturn
0x7ca: Pop(2)
0x7cb: Return(); Pop(0)

