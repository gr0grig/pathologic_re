GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:Neutral
	W:all
	W:idle
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:player
	A:GetPosition
	A:GetEyesHeight
	W:head
	W:voice_common
	W:c
	A:HasProperty
	A:GetProperty
	W:m
	W:ui/NPC_Andrei.png
	W:ui/NPC_Andrei_b.png
	W:k2q04
	W:k5q02
	A:SetReturnValue
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:grass_combination
	A:SetItemName
	W:im_inc
	A:SetProperty
	W:hl_inc
	W:branch
	W:tr_andrei
	W:mt_andrei
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c00650000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c790070006c0061007900650072000000476574506f736974696f6e0047657445796573486569676874006800650061006400000076006f006900630065005f0063006f006d006d006f006e0000006300000048617350726f70657274790047657450726f7065727479006d000000750069002f004e00500043005f0041006e0064007200650069002e0070006e0067000000750069002f004e00500043005f0041006e0064007200650069005f0062002e0070006e00670000006b00320071003000340000006b003500710030003200000053657452657475726e56616c756500430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900670072006100730073005f0063006f006d00620069006e006100740069006f006e0000005365744974656d4e616d650069006d005f0069006e006300000053657450726f70657274790068006c005f0069006e00630000006200720061006e00630068000000740072005f0061006e00640072006500690000006d0074005f0061006e0064007200650069000000

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
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
	SetVariable (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	ClearSubContainer (1 args)
	CreateInvItem (1 args)
	AddItem (3 args)

RunOp = 0xbcc
RunTask = 26

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool) Params = 1
		EVENT_11 Op = 0x27 Vars = (int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe0 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x20d Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2fe Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4da Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5ad Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x680 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x753 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x826 Vars = (int, int)
	GTASK_18 Vars = (object) Params = 2
	GTASK_19 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8f9 Vars = (int, int)
	GTASK_20 Vars = (object) Params = 2
	GTASK_21 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9cc Vars = (int, int)
	GTASK_22 Vars = (object) Params = 2
	GTASK_23 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xaa4 Vars = (int, int)
	GTASK_24 Vars = (object) Params = 2
	GTASK_25 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba2 Vars = (int, int)
	GTASK_26 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xc1b Vars = (int)
		EVENT_6 Op = 0xc41 Vars = ()
		EVENT_5 Op = 0xc50 Vars = ()
		EVENT_45 Op = 0xc5d Vars = (bool)
		EVENT_0 Op = 0xc69 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0xced

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 1) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: @ DoTrade()
0xf: Pop(0)
0x10: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11: PushEmpty(bool)
0x12: Call2 0xe73

0x13: Pop(0)
0x14: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x15: PushEmpty(string)
0x16: Stack[-1] = "Neutral" // @poff=0
0x17: Call2 0xe0c

0x18: Pop(1)
0x19: @ lshWaitForAnimEnd()
0x1a: Pop(0)
0x1b: GOTO 0x22

0x1c: @ WaitForAnimEnd()
0x1d: Pop(0)
0x1e: Push("all") // @poff=16
0x1f: Push("idle") // @poff=24
0x20: @ PlayAnimation(Stack[-2], Stack[-1])
0x21: Pop(2)
0x22: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: Return(); Pop(0)

0x25: GOTO 0x11

0x26: Return(); Pop(0)

0x27: PushEmpty()
0x28: PushEmpty(bool)
0x29: Call2 0xe73

0x2a: Pop(0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2c: @ lshStopAnimation()
0x2d: Pop(0)
0x2e: GOTO 0x31

0x2f: @ StopAnimation()
0x30: Pop(0)
0x31: @ StopTrade()
0x32: Pop(0)
0x33: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x34: Return(); Pop(0)

0x35: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x36: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x37: PushEmpty(bool, object)
0x38: PushEmpty(object)
0x39: Call2 0xe2f

0x3a: Stack[-1] = Stack[-2]
0x3b: Pop(1)
0x3c: Call2 0xd47

0x3d: Pop(2)
0x3e: PushEmpty(bool, object, float)
0x3f: Stack[-12] = Stack[-2]
0x40: Stack[-1] = (float) 70.0
0x41: Call2 0xcf2

0x42: Pop(2)
0x43: Pop(1); Push((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x45: Stack[-10] = (int) -2
0x46: Return(); Pop(8)

0x47: @ CreateDialog(Stack[-4])
0x48: Pop(0)
0x49: PushEmpty(int)
0x4a: Call2 0xe6d

0x4b: Pop(0)
0x4c: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x4d: Pop(1)
0x4e: PushEmpty(int)
0x4f: Call2 0xe6b

0x50: Pop(0)
0x51: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x52: Pop(1)
0x53: PushEmpty(string)
0x54: Call2 0xe6f

0x55: Pop(0)
0x56: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x57: Pop(1)
0x58: PushEmpty(string)
0x59: Call2 0xe71

0x5a: Pop(0)
0x5b: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x5c: Pop(1)
0x5d: PushEmpty(int)
0x5e: Call2 0xf13

0x5f: Pop(0)
0x60: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x61: Pop(1)
0x62: Stack[-2] = (int) -1
0x63: @ IsOverrideActive(Stack[-3])
0x64: Pop(0)
0x65: Push(Stack[-3])
0x66: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x67: Stack[-10] = (int) -2
0x68: Return(); Pop(8)

0x69: @ DoDialog(Stack[-4])
0x6a: Pop(0)
0x6b: PushEmpty(object, object)
0x6c: Stack[-11] = Stack[-2]
0x6d: Stack[-6] = Stack[-1]
0x6e: Push(-2, 4); TaskCall(3)
0x6f: Call2 0x86

0x70: Pop(-2, 4); TaskReturn
0x71: Pop(2)
0x72: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x73: Pop(0)
0x74: Pop(0); Push((bool) Stack[-1] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x76: @ sync()
0x77: Pop(0)
0x78: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x79: Pop(0)
0x7a: GOTO 0x74

0x7b: PushEmpty(object)
0x7c: Stack[-10] = Stack[-1]
0x7d: Call2 0xd36

0x7e: Pop(1)
0x7f: @ StopDialog(Stack[-4])
0x80: Pop(0)
0x81: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x82: Pop(0)
0x83: Stack[-2] = Stack[-10]
0x84: Return(); Pop(8)

0x85: Stack[-4] = 0
0x86: PushEmpty()
0x87: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x88: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x89: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8a: Push((int) 1)
0x8b: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x8c: PushEmpty(string)
0x8d: Stack[-1] = "Neutral" // @poff=0
0x8e: Call2 0xca

0x8f: Pop(1)
0x90: Push((int) 525362)
0x91: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x92: Pop(1)
0x93: @@@ ClearReplies(); Obj=0 // @poff=134
0x94: Pop(0)
0x95: Push((int) 525363)
0x96: Push((int) -1)
0x97: Push((int) 26731)
0x98: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x99: Pop(3)
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0xe8c

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9f: Push((int) 525364)
0xa0: Push((int) 26733)
0xa1: Push((int) 26732)
0xa2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xa3: Pop(3)
0xa4: Push((int) 525368)
0xa5: Push((int) -1)
0xa6: Push((int) 26736)
0xa7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xa8: Pop(3)
0xa9: GOTO 0xac

0xaa: Return(); Pop(0)

0xab: GOTO 0x8a

0xac: PushEmpty(bool)
0xad: Call2 0xe73

0xae: Pop(0)
0xaf: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb0: @ lshWaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xba

0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb7: Call2 0xe0c

0xb8: Pop(1)
0xb9: GOTO 0xb0

0xba: GOTO 0xc9

0xbb: Push("all") // @poff=16
0xbc: Push("idle") // @poff=24
0xbd: @ PlayAnimation(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: @ WaitForAnimEnd()
0xc0: Pop(0)
0xc1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: GOTO 0xc9

0xc4: Push("all") // @poff=16
0xc5: Push("idle") // @poff=24
0xc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: GOTO 0xbf

0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: PushEmpty(bool)
0xcc: Call2 0xe73

0xcd: Pop(0)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Return(); Pop(0)

0xd1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Return(); Pop(0)

0xd4: PushEmpty(string, bool)
0xd5: Stack[-3] = Stack[-2]
0xd6: Push("") // @poff=13
0xd7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: Stack[-1] = (bool) 0
0xda: GOTO 0xdc

0xdb: Stack[-1] = (bool) 1
0xdc: Call2 0xe13

0xdd: Pop(2)
0xde: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: Push((int) 1)
0xe2: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0xe3: PushEmpty()
0xe4: Call2 0xe28

0xe5: Pop(0)
0xe6: Push((int) 26731)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0xe87

0xed: Pop(2)
0xee: Push((int) 26734)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0xe75

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0xe87

0xfa: Pop(2)
0xfb: Push((int) 26735)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0xe75

0x102: Pop(2)
0x103: Push((int) 26730)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral" // @poff=0
0x108: Call2 0xca

0x109: Pop(1)
0x10a: Push((int) 525362)
0x10b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x10c: Pop(1)
0x10d: @@@ ClearReplies(); Obj=0 // @poff=134
0x10e: Pop(0)
0x10f: Push((int) 525363)
0x110: Push((int) -1)
0x111: Push((int) 26731)
0x112: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x113: Pop(3)
0x114: PushEmpty(bool, object)
0x115: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x116: Call2 0xe8c

0x117: Pop(1)
0x118: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x119: Push((int) 525364)
0x11a: Push((int) 26733)
0x11b: Push((int) 26732)
0x11c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x11d: Pop(3)
0x11e: Push((int) 525368)
0x11f: Push((int) -1)
0x120: Push((int) 26736)
0x121: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 26733)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral" // @poff=0
0x129: Call2 0xca

0x12a: Pop(1)
0x12b: Push((int) 525365)
0x12c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x12d: Pop(1)
0x12e: @@@ ClearReplies(); Obj=0 // @poff=134
0x12f: Pop(0)
0x130: Push((int) 529141)
0x131: Push((int) 30588)
0x132: Push((int) 30587)
0x133: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 30588)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral" // @poff=0
0x13b: Call2 0xca

0x13c: Pop(1)
0x13d: Push((int) 529142)
0x13e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x13f: Pop(1)
0x140: @@@ ClearReplies(); Obj=0 // @poff=134
0x141: Pop(0)
0x142: Push((int) 529143)
0x143: Push((int) 30590)
0x144: Push((int) 30589)
0x145: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 30590)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral" // @poff=0
0x14d: Call2 0xca

0x14e: Pop(1)
0x14f: Push((int) 529144)
0x150: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x151: Pop(1)
0x152: @@@ ClearReplies(); Obj=0 // @poff=134
0x153: Pop(0)
0x154: Push((int) 525366)
0x155: Push((int) -1)
0x156: Push((int) 26734)
0x157: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x158: Pop(3)
0x159: Push((int) 525367)
0x15a: Push((int) -1)
0x15b: Push((int) 26735)
0x15c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x160: PushEmpty(bool)
0x161: Call2 0xe73

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: @ lshStopAnimation()
0x165: Pop(0)
0x166: GOTO 0x169

0x167: @ StopAnimation()
0x168: Pop(0)
0x169: Return(); Pop(0)

0x16a: GOTO 0xe1

0x16b: Return(); Pop(0)

0x16c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x16d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x16e: PushEmpty(bool, object)
0x16f: PushEmpty(object)
0x170: Call2 0xe2f

0x171: Stack[-1] = Stack[-2]
0x172: Pop(1)
0x173: Call2 0xd47

0x174: Pop(2)
0x175: PushEmpty(bool, object, float)
0x176: Stack[-12] = Stack[-2]
0x177: Stack[-1] = (float) 70.0
0x178: Call2 0xcf2

0x179: Pop(2)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-10] = (int) -2
0x17d: Return(); Pop(8)

0x17e: @ CreateDialog(Stack[-4])
0x17f: Pop(0)
0x180: PushEmpty(int)
0x181: Call2 0xe6d

0x182: Pop(0)
0x183: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x184: Pop(1)
0x185: PushEmpty(int)
0x186: Call2 0xe6b

0x187: Pop(0)
0x188: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x189: Pop(1)
0x18a: PushEmpty(string)
0x18b: Call2 0xe6f

0x18c: Pop(0)
0x18d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x18e: Pop(1)
0x18f: PushEmpty(string)
0x190: Call2 0xe71

0x191: Pop(0)
0x192: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x193: Pop(1)
0x194: PushEmpty(int)
0x195: Call2 0xf13

0x196: Pop(0)
0x197: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x198: Pop(1)
0x199: Stack[-2] = (int) -1
0x19a: @ IsOverrideActive(Stack[-3])
0x19b: Pop(0)
0x19c: Push(Stack[-3])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19e: Stack[-10] = (int) -2
0x19f: Return(); Pop(8)

0x1a0: @ DoDialog(Stack[-4])
0x1a1: Pop(0)
0x1a2: PushEmpty(object, object)
0x1a3: Stack[-11] = Stack[-2]
0x1a4: Stack[-6] = Stack[-1]
0x1a5: Push(-2, 4); TaskCall(5)
0x1a6: Call2 0x1bd

0x1a7: Pop(-2, 4); TaskReturn
0x1a8: Pop(2)
0x1a9: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x1aa: Pop(0)
0x1ab: Pop(0); Push((bool) Stack[-1] == 0)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: @ sync()
0x1ae: Pop(0)
0x1af: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x1b0: Pop(0)
0x1b1: GOTO 0x1ab

0x1b2: PushEmpty(object)
0x1b3: Stack[-10] = Stack[-1]
0x1b4: Call2 0xd36

0x1b5: Pop(1)
0x1b6: @ StopDialog(Stack[-4])
0x1b7: Pop(0)
0x1b8: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x1b9: Pop(0)
0x1ba: Stack[-2] = Stack[-10]
0x1bb: Return(); Pop(8)

0x1bc: Stack[-4] = 0
0x1bd: PushEmpty()
0x1be: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1bf: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1c0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c1: Push((int) 1)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral" // @poff=0
0x1c5: Call2 0x1f7

0x1c6: Pop(1)
0x1c7: Push((int) 525462)
0x1c8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x1c9: Pop(1)
0x1ca: @@@ ClearReplies(); Obj=0 // @poff=134
0x1cb: Pop(0)
0x1cc: Push((int) 529295)
0x1cd: Push((int) 30750)
0x1ce: Push((int) 30749)
0x1cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1d0: Pop(3)
0x1d1: Push((int) 525463)
0x1d2: Push((int) -1)
0x1d3: Push((int) 26819)
0x1d4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x1d5: Pop(3)
0x1d6: GOTO 0x1d9

0x1d7: Return(); Pop(0)

0x1d8: GOTO 0x1c1

0x1d9: PushEmpty(bool)
0x1da: Call2 0xe73

0x1db: Pop(0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1dd: @ lshWaitForAnimEnd()
0x1de: Pop(0)
0x1df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: GOTO 0x1e7

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1e4: Call2 0xe0c

0x1e5: Pop(1)
0x1e6: GOTO 0x1dd

0x1e7: GOTO 0x1f6

0x1e8: Push("all") // @poff=16
0x1e9: Push("idle") // @poff=24
0x1ea: @ PlayAnimation(Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: @ WaitForAnimEnd()
0x1ed: Pop(0)
0x1ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: GOTO 0x1f6

0x1f1: Push("all") // @poff=16
0x1f2: Push("idle") // @poff=24
0x1f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: GOTO 0x1ec

0x1f6: Return(); Pop(0)

0x1f7: PushEmpty()
0x1f8: PushEmpty(bool)
0x1f9: Call2 0xe73

0x1fa: Pop(0)
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Return(); Pop(0)

0x1fe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Return(); Pop(0)

0x201: PushEmpty(string, bool)
0x202: Stack[-3] = Stack[-2]
0x203: Push("") // @poff=13
0x204: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x206: Stack[-1] = (bool) 0
0x207: GOTO 0x209

0x208: Stack[-1] = (bool) 1
0x209: Call2 0xe13

0x20a: Pop(2)
0x20b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Push((int) 1)
0x20f: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x210: PushEmpty()
0x211: Call2 0xe28

0x212: Pop(0)
0x213: Push((int) 26818)
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x216: PushEmpty(string)
0x217: Stack[-1] = "Neutral" // @poff=0
0x218: Call2 0x1f7

0x219: Pop(1)
0x21a: Push((int) 525462)
0x21b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x21c: Pop(1)
0x21d: @@@ ClearReplies(); Obj=0 // @poff=134
0x21e: Pop(0)
0x21f: Push((int) 529295)
0x220: Push((int) 30750)
0x221: Push((int) 30749)
0x222: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x223: Pop(3)
0x224: Push((int) 525463)
0x225: Push((int) -1)
0x226: Push((int) 26819)
0x227: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: Push((int) 30750)
0x22b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Neutral" // @poff=0
0x22f: Call2 0x1f7

0x230: Pop(1)
0x231: Push((int) 529296)
0x232: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x233: Pop(1)
0x234: @@@ ClearReplies(); Obj=0 // @poff=134
0x235: Pop(0)
0x236: Push((int) 529297)
0x237: Push((int) -1)
0x238: Push((int) 30751)
0x239: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x23a: Pop(3)
0x23b: Push((int) 529298)
0x23c: Push((int) -1)
0x23d: Push((int) 30752)
0x23e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x242: PushEmpty(bool)
0x243: Call2 0xe73

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x246: @ lshStopAnimation()
0x247: Pop(0)
0x248: GOTO 0x24b

0x249: @ StopAnimation()
0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: GOTO 0x20e

0x24d: Return(); Pop(0)

0x24e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x24f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x250: PushEmpty(bool, object)
0x251: PushEmpty(object)
0x252: Call2 0xe2f

0x253: Stack[-1] = Stack[-2]
0x254: Pop(1)
0x255: Call2 0xd47

0x256: Pop(2)
0x257: PushEmpty(bool, object, float)
0x258: Stack[-12] = Stack[-2]
0x259: Stack[-1] = (float) 70.0
0x25a: Call2 0xcf2

0x25b: Pop(2)
0x25c: Pop(1); Push((bool) Stack[-1] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-10] = (int) -2
0x25f: Return(); Pop(8)

0x260: @ CreateDialog(Stack[-4])
0x261: Pop(0)
0x262: PushEmpty(int)
0x263: Call2 0xe6d

0x264: Pop(0)
0x265: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x266: Pop(1)
0x267: PushEmpty(int)
0x268: Call2 0xe6b

0x269: Pop(0)
0x26a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x26b: Pop(1)
0x26c: PushEmpty(string)
0x26d: Call2 0xe6f

0x26e: Pop(0)
0x26f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x270: Pop(1)
0x271: PushEmpty(string)
0x272: Call2 0xe71

0x273: Pop(0)
0x274: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x275: Pop(1)
0x276: PushEmpty(int)
0x277: Call2 0xf13

0x278: Pop(0)
0x279: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x27a: Pop(1)
0x27b: Stack[-2] = (int) -1
0x27c: @ IsOverrideActive(Stack[-3])
0x27d: Pop(0)
0x27e: Push(Stack[-3])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-10] = (int) -2
0x281: Return(); Pop(8)

0x282: @ DoDialog(Stack[-4])
0x283: Pop(0)
0x284: PushEmpty(object, object)
0x285: Stack[-11] = Stack[-2]
0x286: Stack[-6] = Stack[-1]
0x287: Push(-2, 4); TaskCall(7)
0x288: Call2 0x29f

0x289: Pop(-2, 4); TaskReturn
0x28a: Pop(2)
0x28b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x28c: Pop(0)
0x28d: Pop(0); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28f: @ sync()
0x290: Pop(0)
0x291: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x292: Pop(0)
0x293: GOTO 0x28d

0x294: PushEmpty(object)
0x295: Stack[-10] = Stack[-1]
0x296: Call2 0xd36

0x297: Pop(1)
0x298: @ StopDialog(Stack[-4])
0x299: Pop(0)
0x29a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x29b: Pop(0)
0x29c: Stack[-2] = Stack[-10]
0x29d: Return(); Pop(8)

0x29e: Stack[-4] = 0
0x29f: PushEmpty()
0x2a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2a2: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2a3: Push((int) 1)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2a5: PushEmpty(string)
0x2a6: Stack[-1] = "Neutral" // @poff=0
0x2a7: Call2 0x2e8

0x2a8: Pop(1)
0x2a9: Push((int) 525919)
0x2aa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x2ab: Pop(1)
0x2ac: @@@ ClearReplies(); Obj=0 // @poff=134
0x2ad: Pop(0)
0x2ae: PushEmpty(bool, object)
0x2af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b0: Call2 0xe98

0x2b1: Pop(1)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: Push((int) 525920)
0x2b4: Push((int) 42995)
0x2b5: Push((int) 27212)
0x2b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2b7: Pop(3)
0x2b8: Push((int) 529685)
0x2b9: Push((int) -1)
0x2ba: Push((int) 31148)
0x2bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2bc: Pop(3)
0x2bd: Push((int) 525923)
0x2be: Push((int) -1)
0x2bf: Push((int) 27215)
0x2c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2c1: Pop(3)
0x2c2: Push((int) 529057)
0x2c3: Push((int) -1)
0x2c4: Push((int) 30499)
0x2c5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x2c6: Pop(3)
0x2c7: GOTO 0x2ca

0x2c8: Return(); Pop(0)

0x2c9: GOTO 0x2a3

0x2ca: PushEmpty(bool)
0x2cb: Call2 0xe73

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ce: @ lshWaitForAnimEnd()
0x2cf: Pop(0)
0x2d0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2d8

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2d5: Call2 0xe0c

0x2d6: Pop(1)
0x2d7: GOTO 0x2ce

0x2d8: GOTO 0x2e7

0x2d9: Push("all") // @poff=16
0x2da: Push("idle") // @poff=24
0x2db: @ PlayAnimation(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: @ WaitForAnimEnd()
0x2de: Pop(0)
0x2df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2e7

0x2e2: Push("all") // @poff=16
0x2e3: Push("idle") // @poff=24
0x2e4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e5: Pop(2)
0x2e6: GOTO 0x2dd

0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(bool)
0x2ea: Call2 0xe73

0x2eb: Pop(0)
0x2ec: Pop(1); Push((bool) Stack[-1] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Return(); Pop(0)

0x2ef: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Return(); Pop(0)

0x2f2: PushEmpty(string, bool)
0x2f3: Stack[-3] = Stack[-2]
0x2f4: Push("") // @poff=13
0x2f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-1] = (bool) 0
0x2f8: GOTO 0x2fa

0x2f9: Stack[-1] = (bool) 1
0x2fa: Call2 0xe13

0x2fb: Pop(2)
0x2fc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: Push((int) 1)
0x300: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x301: PushEmpty()
0x302: Call2 0xe28

0x303: Pop(0)
0x304: Push((int) 27214)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x309: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30a: Call2 0xe7e

0x30b: Pop(2)
0x30c: Push((int) 43013)
0x30d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(object, object)
0x310: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x311: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x312: Call2 0xe7e

0x313: Pop(2)
0x314: Push((int) 43010)
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: PushEmpty(object, object)
0x318: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x319: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31a: Call2 0xe7e

0x31b: Pop(2)
0x31c: Push((int) 43005)
0x31d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31f: PushEmpty(object, object)
0x320: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x321: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x322: Call2 0xe7e

0x323: Pop(2)
0x324: Push((int) 43002)
0x325: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x327: PushEmpty(object, object)
0x328: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x329: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32a: Call2 0xe7e

0x32b: Pop(2)
0x32c: Push((int) 43000)
0x32d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32f: PushEmpty(object, object)
0x330: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x331: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x332: Call2 0xe7e

0x333: Pop(2)
0x334: Push((int) 31148)
0x335: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: PushEmpty(object, object)
0x338: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x339: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33a: Call2 0xe87

0x33b: Pop(2)
0x33c: Push((int) 27211)
0x33d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x33f: PushEmpty(string)
0x340: Stack[-1] = "Neutral" // @poff=0
0x341: Call2 0x2e8

0x342: Pop(1)
0x343: Push((int) 525919)
0x344: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x345: Pop(1)
0x346: @@@ ClearReplies(); Obj=0 // @poff=134
0x347: Pop(0)
0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Call2 0xe98

0x34b: Pop(1)
0x34c: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34d: Push((int) 525920)
0x34e: Push((int) 42995)
0x34f: Push((int) 27212)
0x350: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x351: Pop(3)
0x352: Push((int) 529685)
0x353: Push((int) -1)
0x354: Push((int) 31148)
0x355: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x356: Pop(3)
0x357: Push((int) 525923)
0x358: Push((int) -1)
0x359: Push((int) 27215)
0x35a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x35b: Pop(3)
0x35c: Push((int) 529057)
0x35d: Push((int) -1)
0x35e: Push((int) 30499)
0x35f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x360: Pop(3)
0x361: Return(); Pop(0)

0x362: Push((int) 42995)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x365: PushEmpty(string)
0x366: Stack[-1] = "Neutral" // @poff=0
0x367: Call2 0x2e8

0x368: Pop(1)
0x369: Push((int) 540917)
0x36a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x36b: Pop(1)
0x36c: @@@ ClearReplies(); Obj=0 // @poff=134
0x36d: Pop(0)
0x36e: Push((int) 540918)
0x36f: Push((int) 27213)
0x370: Push((int) 42996)
0x371: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x372: Pop(3)
0x373: Push((int) 540919)
0x374: Push((int) 42998)
0x375: Push((int) 42997)
0x376: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x377: Pop(3)
0x378: Return(); Pop(0)

0x379: Push((int) 42998)
0x37a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x37c: PushEmpty(string)
0x37d: Stack[-1] = "Neutral" // @poff=0
0x37e: Call2 0x2e8

0x37f: Pop(1)
0x380: Push((int) 540920)
0x381: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x382: Pop(1)
0x383: @@@ ClearReplies(); Obj=0 // @poff=134
0x384: Pop(0)
0x385: Push((int) 540921)
0x386: Push((int) 27213)
0x387: Push((int) 42999)
0x388: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x389: Pop(3)
0x38a: Push((int) 540922)
0x38b: Push((int) -1)
0x38c: Push((int) 43000)
0x38d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x38e: Pop(3)
0x38f: Return(); Pop(0)

0x390: Push((int) 27213)
0x391: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x393: PushEmpty(string)
0x394: Stack[-1] = "Neutral" // @poff=0
0x395: Call2 0x2e8

0x396: Pop(1)
0x397: Push((int) 525921)
0x398: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x399: Pop(1)
0x39a: @@@ ClearReplies(); Obj=0 // @poff=134
0x39b: Pop(0)
0x39c: Push((int) 529058)
0x39d: Push((int) 30501)
0x39e: Push((int) 30500)
0x39f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3a0: Pop(3)
0x3a1: Push((int) 529062)
0x3a2: Push((int) 30503)
0x3a3: Push((int) 30504)
0x3a4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3a5: Pop(3)
0x3a6: Return(); Pop(0)

0x3a7: Push((int) 30501)
0x3a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3aa: PushEmpty(string)
0x3ab: Stack[-1] = "Neutral" // @poff=0
0x3ac: Call2 0x2e8

0x3ad: Pop(1)
0x3ae: Push((int) 529059)
0x3af: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x3b0: Pop(1)
0x3b1: @@@ ClearReplies(); Obj=0 // @poff=134
0x3b2: Pop(0)
0x3b3: Push((int) 529060)
0x3b4: Push((int) 30503)
0x3b5: Push((int) 30502)
0x3b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3b7: Pop(3)
0x3b8: Push((int) 540923)
0x3b9: Push((int) -1)
0x3ba: Push((int) 43002)
0x3bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3bc: Pop(3)
0x3bd: Return(); Pop(0)

0x3be: Push((int) 30503)
0x3bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral" // @poff=0
0x3c3: Call2 0x2e8

0x3c4: Pop(1)
0x3c5: Push((int) 529061)
0x3c6: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x3c7: Pop(1)
0x3c8: @@@ ClearReplies(); Obj=0 // @poff=134
0x3c9: Pop(0)
0x3ca: Push((int) 540924)
0x3cb: Push((int) 43004)
0x3cc: Push((int) 43003)
0x3cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3ce: Pop(3)
0x3cf: Return(); Pop(0)

0x3d0: Push((int) 43004)
0x3d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3d3: PushEmpty(string)
0x3d4: Stack[-1] = "Neutral" // @poff=0
0x3d5: Call2 0x2e8

0x3d6: Pop(1)
0x3d7: Push((int) 540925)
0x3d8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x3d9: Pop(1)
0x3da: @@@ ClearReplies(); Obj=0 // @poff=134
0x3db: Pop(0)
0x3dc: Push((int) 529063)
0x3dd: Push((int) 30507)
0x3de: Push((int) 30506)
0x3df: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3e0: Pop(3)
0x3e1: Push((int) 540926)
0x3e2: Push((int) -1)
0x3e3: Push((int) 43005)
0x3e4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3e5: Pop(3)
0x3e6: Return(); Pop(0)

0x3e7: Push((int) 30507)
0x3e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = "Neutral" // @poff=0
0x3ec: Call2 0x2e8

0x3ed: Pop(1)
0x3ee: Push((int) 529064)
0x3ef: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x3f0: Pop(1)
0x3f1: @@@ ClearReplies(); Obj=0 // @poff=134
0x3f2: Pop(0)
0x3f3: Push((int) 540927)
0x3f4: Push((int) 43007)
0x3f5: Push((int) 43006)
0x3f6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3f7: Pop(3)
0x3f8: Push((int) 540931)
0x3f9: Push((int) -1)
0x3fa: Push((int) 43010)
0x3fb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x3fc: Pop(3)
0x3fd: Return(); Pop(0)

0x3fe: Push((int) 43007)
0x3ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x401: PushEmpty(string)
0x402: Stack[-1] = "Neutral" // @poff=0
0x403: Call2 0x2e8

0x404: Pop(1)
0x405: Push((int) 540928)
0x406: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x407: Pop(1)
0x408: @@@ ClearReplies(); Obj=0 // @poff=134
0x409: Pop(0)
0x40a: Push((int) 540929)
0x40b: Push((int) 43009)
0x40c: Push((int) 43008)
0x40d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x40e: Pop(3)
0x40f: Push((int) 540932)
0x410: Push((int) 43009)
0x411: Push((int) 43011)
0x412: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x413: Pop(3)
0x414: Return(); Pop(0)

0x415: Push((int) 43009)
0x416: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x418: PushEmpty(string)
0x419: Stack[-1] = "Neutral" // @poff=0
0x41a: Call2 0x2e8

0x41b: Pop(1)
0x41c: Push((int) 540930)
0x41d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x41e: Pop(1)
0x41f: @@@ ClearReplies(); Obj=0 // @poff=134
0x420: Pop(0)
0x421: Push((int) 525922)
0x422: Push((int) -1)
0x423: Push((int) 27214)
0x424: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x425: Pop(3)
0x426: Push((int) 540933)
0x427: Push((int) -1)
0x428: Push((int) 43013)
0x429: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x42a: Pop(3)
0x42b: Return(); Pop(0)

0x42c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x42d: PushEmpty(bool)
0x42e: Call2 0xe73

0x42f: Pop(0)
0x430: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x431: @ lshStopAnimation()
0x432: Pop(0)
0x433: GOTO 0x436

0x434: @ StopAnimation()
0x435: Pop(0)
0x436: Return(); Pop(0)

0x437: GOTO 0x2ff

0x438: Return(); Pop(0)

0x439: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x43a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x43b: PushEmpty(bool, object)
0x43c: PushEmpty(object)
0x43d: Call2 0xe2f

0x43e: Stack[-1] = Stack[-2]
0x43f: Pop(1)
0x440: Call2 0xd47

0x441: Pop(2)
0x442: PushEmpty(bool, object, float)
0x443: Stack[-12] = Stack[-2]
0x444: Stack[-1] = (float) 70.0
0x445: Call2 0xcf2

0x446: Pop(2)
0x447: Pop(1); Push((bool) Stack[-1] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-10] = (int) -2
0x44a: Return(); Pop(8)

0x44b: @ CreateDialog(Stack[-4])
0x44c: Pop(0)
0x44d: PushEmpty(int)
0x44e: Call2 0xe6d

0x44f: Pop(0)
0x450: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x451: Pop(1)
0x452: PushEmpty(int)
0x453: Call2 0xe6b

0x454: Pop(0)
0x455: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x456: Pop(1)
0x457: PushEmpty(string)
0x458: Call2 0xe6f

0x459: Pop(0)
0x45a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x45b: Pop(1)
0x45c: PushEmpty(string)
0x45d: Call2 0xe71

0x45e: Pop(0)
0x45f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x460: Pop(1)
0x461: PushEmpty(int)
0x462: Call2 0xf13

0x463: Pop(0)
0x464: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x465: Pop(1)
0x466: Stack[-2] = (int) -1
0x467: @ IsOverrideActive(Stack[-3])
0x468: Pop(0)
0x469: Push(Stack[-3])
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-10] = (int) -2
0x46c: Return(); Pop(8)

0x46d: @ DoDialog(Stack[-4])
0x46e: Pop(0)
0x46f: PushEmpty(object, object)
0x470: Stack[-11] = Stack[-2]
0x471: Stack[-6] = Stack[-1]
0x472: Push(-2, 4); TaskCall(9)
0x473: Call2 0x48a

0x474: Pop(-2, 4); TaskReturn
0x475: Pop(2)
0x476: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x477: Pop(0)
0x478: Pop(0); Push((bool) Stack[-1] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47a: @ sync()
0x47b: Pop(0)
0x47c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x47d: Pop(0)
0x47e: GOTO 0x478

0x47f: PushEmpty(object)
0x480: Stack[-10] = Stack[-1]
0x481: Call2 0xd36

0x482: Pop(1)
0x483: @ StopDialog(Stack[-4])
0x484: Pop(0)
0x485: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x486: Pop(0)
0x487: Stack[-2] = Stack[-10]
0x488: Return(); Pop(8)

0x489: Stack[-4] = 0
0x48a: PushEmpty()
0x48b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x48c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x48d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x48e: Push((int) 1)
0x48f: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x490: PushEmpty(string)
0x491: Stack[-1] = "Neutral" // @poff=0
0x492: Call2 0x4c4

0x493: Pop(1)
0x494: Push((int) 529678)
0x495: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x496: Pop(1)
0x497: @@@ ClearReplies(); Obj=0 // @poff=134
0x498: Pop(0)
0x499: Push((int) 529679)
0x49a: Push((int) -1)
0x49b: Push((int) 31142)
0x49c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x49d: Pop(3)
0x49e: Push((int) 529680)
0x49f: Push((int) -1)
0x4a0: Push((int) 31143)
0x4a1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x4a2: Pop(3)
0x4a3: GOTO 0x4a6

0x4a4: Return(); Pop(0)

0x4a5: GOTO 0x48e

0x4a6: PushEmpty(bool)
0x4a7: Call2 0xe73

0x4a8: Pop(0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4aa: @ lshWaitForAnimEnd()
0x4ab: Pop(0)
0x4ac: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ad: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ae: GOTO 0x4b4

0x4af: PushEmpty(string)
0x4b0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4b1: Call2 0xe0c

0x4b2: Pop(1)
0x4b3: GOTO 0x4aa

0x4b4: GOTO 0x4c3

0x4b5: Push("all") // @poff=16
0x4b6: Push("idle") // @poff=24
0x4b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b8: Pop(2)
0x4b9: @ WaitForAnimEnd()
0x4ba: Pop(0)
0x4bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: GOTO 0x4c3

0x4be: Push("all") // @poff=16
0x4bf: Push("idle") // @poff=24
0x4c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c1: Pop(2)
0x4c2: GOTO 0x4b9

0x4c3: Return(); Pop(0)

0x4c4: PushEmpty()
0x4c5: PushEmpty(bool)
0x4c6: Call2 0xe73

0x4c7: Pop(0)
0x4c8: Pop(1); Push((bool) Stack[-1] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Return(); Pop(0)

0x4cb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: Return(); Pop(0)

0x4ce: PushEmpty(string, bool)
0x4cf: Stack[-3] = Stack[-2]
0x4d0: Push("") // @poff=13
0x4d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-1] = (bool) 0
0x4d4: GOTO 0x4d6

0x4d5: Stack[-1] = (bool) 1
0x4d6: Call2 0xe13

0x4d7: Pop(2)
0x4d8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4d9: Return(); Pop(0)

0x4da: PushEmpty()
0x4db: Push((int) 1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x4dd: PushEmpty()
0x4de: Call2 0xe28

0x4df: Pop(0)
0x4e0: Push((int) 31142)
0x4e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: PushEmpty(object, object)
0x4e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e6: Call2 0xe87

0x4e7: Pop(2)
0x4e8: Push((int) 31141)
0x4e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4eb: PushEmpty(string)
0x4ec: Stack[-1] = "Neutral" // @poff=0
0x4ed: Call2 0x4c4

0x4ee: Pop(1)
0x4ef: Push((int) 529678)
0x4f0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x4f1: Pop(1)
0x4f2: @@@ ClearReplies(); Obj=0 // @poff=134
0x4f3: Pop(0)
0x4f4: Push((int) 529679)
0x4f5: Push((int) -1)
0x4f6: Push((int) 31142)
0x4f7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x4f8: Pop(3)
0x4f9: Push((int) 529680)
0x4fa: Push((int) -1)
0x4fb: Push((int) 31143)
0x4fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x4fd: Pop(3)
0x4fe: Return(); Pop(0)

0x4ff: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x500: PushEmpty(bool)
0x501: Call2 0xe73

0x502: Pop(0)
0x503: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x504: @ lshStopAnimation()
0x505: Pop(0)
0x506: GOTO 0x509

0x507: @ StopAnimation()
0x508: Pop(0)
0x509: Return(); Pop(0)

0x50a: GOTO 0x4db

0x50b: Return(); Pop(0)

0x50c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x50d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x50e: PushEmpty(bool, object)
0x50f: PushEmpty(object)
0x510: Call2 0xe2f

0x511: Stack[-1] = Stack[-2]
0x512: Pop(1)
0x513: Call2 0xd47

0x514: Pop(2)
0x515: PushEmpty(bool, object, float)
0x516: Stack[-12] = Stack[-2]
0x517: Stack[-1] = (float) 70.0
0x518: Call2 0xcf2

0x519: Pop(2)
0x51a: Pop(1); Push((bool) Stack[-1] == 0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-10] = (int) -2
0x51d: Return(); Pop(8)

0x51e: @ CreateDialog(Stack[-4])
0x51f: Pop(0)
0x520: PushEmpty(int)
0x521: Call2 0xe6d

0x522: Pop(0)
0x523: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x524: Pop(1)
0x525: PushEmpty(int)
0x526: Call2 0xe6b

0x527: Pop(0)
0x528: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x529: Pop(1)
0x52a: PushEmpty(string)
0x52b: Call2 0xe6f

0x52c: Pop(0)
0x52d: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x52e: Pop(1)
0x52f: PushEmpty(string)
0x530: Call2 0xe71

0x531: Pop(0)
0x532: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x533: Pop(1)
0x534: PushEmpty(int)
0x535: Call2 0xf13

0x536: Pop(0)
0x537: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x538: Pop(1)
0x539: Stack[-2] = (int) -1
0x53a: @ IsOverrideActive(Stack[-3])
0x53b: Pop(0)
0x53c: Push(Stack[-3])
0x53d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53e: Stack[-10] = (int) -2
0x53f: Return(); Pop(8)

0x540: @ DoDialog(Stack[-4])
0x541: Pop(0)
0x542: PushEmpty(object, object)
0x543: Stack[-11] = Stack[-2]
0x544: Stack[-6] = Stack[-1]
0x545: Push(-2, 4); TaskCall(11)
0x546: Call2 0x55d

0x547: Pop(-2, 4); TaskReturn
0x548: Pop(2)
0x549: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x54a: Pop(0)
0x54b: Pop(0); Push((bool) Stack[-1] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54d: @ sync()
0x54e: Pop(0)
0x54f: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x550: Pop(0)
0x551: GOTO 0x54b

0x552: PushEmpty(object)
0x553: Stack[-10] = Stack[-1]
0x554: Call2 0xd36

0x555: Pop(1)
0x556: @ StopDialog(Stack[-4])
0x557: Pop(0)
0x558: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x559: Pop(0)
0x55a: Stack[-2] = Stack[-10]
0x55b: Return(); Pop(8)

0x55c: Stack[-4] = 0
0x55d: PushEmpty()
0x55e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x55f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x560: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x561: Push((int) 1)
0x562: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x563: PushEmpty(string)
0x564: Stack[-1] = "Neutral" // @poff=0
0x565: Call2 0x597

0x566: Pop(1)
0x567: Push((int) 529682)
0x568: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x569: Pop(1)
0x56a: @@@ ClearReplies(); Obj=0 // @poff=134
0x56b: Pop(0)
0x56c: Push((int) 529683)
0x56d: Push((int) -1)
0x56e: Push((int) 31146)
0x56f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x570: Pop(3)
0x571: Push((int) 529684)
0x572: Push((int) -1)
0x573: Push((int) 31147)
0x574: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x575: Pop(3)
0x576: GOTO 0x579

0x577: Return(); Pop(0)

0x578: GOTO 0x561

0x579: PushEmpty(bool)
0x57a: Call2 0xe73

0x57b: Pop(0)
0x57c: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x57d: @ lshWaitForAnimEnd()
0x57e: Pop(0)
0x57f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x580: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x581: GOTO 0x587

0x582: PushEmpty(string)
0x583: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x584: Call2 0xe0c

0x585: Pop(1)
0x586: GOTO 0x57d

0x587: GOTO 0x596

0x588: Push("all") // @poff=16
0x589: Push("idle") // @poff=24
0x58a: @ PlayAnimation(Stack[-2], Stack[-1])
0x58b: Pop(2)
0x58c: @ WaitForAnimEnd()
0x58d: Pop(0)
0x58e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: GOTO 0x596

0x591: Push("all") // @poff=16
0x592: Push("idle") // @poff=24
0x593: @ PlayAnimation(Stack[-2], Stack[-1])
0x594: Pop(2)
0x595: GOTO 0x58c

0x596: Return(); Pop(0)

0x597: PushEmpty()
0x598: PushEmpty(bool)
0x599: Call2 0xe73

0x59a: Pop(0)
0x59b: Pop(1); Push((bool) Stack[-1] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: Return(); Pop(0)

0x59e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Return(); Pop(0)

0x5a1: PushEmpty(string, bool)
0x5a2: Stack[-3] = Stack[-2]
0x5a3: Push("") // @poff=13
0x5a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-1] = (bool) 0
0x5a7: GOTO 0x5a9

0x5a8: Stack[-1] = (bool) 1
0x5a9: Call2 0xe13

0x5aa: Pop(2)
0x5ab: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5ac: Return(); Pop(0)

0x5ad: PushEmpty()
0x5ae: Push((int) 1)
0x5af: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5b0: PushEmpty()
0x5b1: Call2 0xe28

0x5b2: Pop(0)
0x5b3: Push((int) 31146)
0x5b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b6: PushEmpty(object, object)
0x5b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b9: Call2 0xe87

0x5ba: Pop(2)
0x5bb: Push((int) 31145)
0x5bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5be: PushEmpty(string)
0x5bf: Stack[-1] = "Neutral" // @poff=0
0x5c0: Call2 0x597

0x5c1: Pop(1)
0x5c2: Push((int) 529682)
0x5c3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x5c4: Pop(1)
0x5c5: @@@ ClearReplies(); Obj=0 // @poff=134
0x5c6: Pop(0)
0x5c7: Push((int) 529683)
0x5c8: Push((int) -1)
0x5c9: Push((int) 31146)
0x5ca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x5cb: Pop(3)
0x5cc: Push((int) 529684)
0x5cd: Push((int) -1)
0x5ce: Push((int) 31147)
0x5cf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x5d0: Pop(3)
0x5d1: Return(); Pop(0)

0x5d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5d3: PushEmpty(bool)
0x5d4: Call2 0xe73

0x5d5: Pop(0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d7: @ lshStopAnimation()
0x5d8: Pop(0)
0x5d9: GOTO 0x5dc

0x5da: @ StopAnimation()
0x5db: Pop(0)
0x5dc: Return(); Pop(0)

0x5dd: GOTO 0x5ae

0x5de: Return(); Pop(0)

0x5df: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5e1: PushEmpty(bool, object)
0x5e2: PushEmpty(object)
0x5e3: Call2 0xe2f

0x5e4: Stack[-1] = Stack[-2]
0x5e5: Pop(1)
0x5e6: Call2 0xd47

0x5e7: Pop(2)
0x5e8: PushEmpty(bool, object, float)
0x5e9: Stack[-12] = Stack[-2]
0x5ea: Stack[-1] = (float) 70.0
0x5eb: Call2 0xcf2

0x5ec: Pop(2)
0x5ed: Pop(1); Push((bool) Stack[-1] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-10] = (int) -2
0x5f0: Return(); Pop(8)

0x5f1: @ CreateDialog(Stack[-4])
0x5f2: Pop(0)
0x5f3: PushEmpty(int)
0x5f4: Call2 0xe6d

0x5f5: Pop(0)
0x5f6: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x5f7: Pop(1)
0x5f8: PushEmpty(int)
0x5f9: Call2 0xe6b

0x5fa: Pop(0)
0x5fb: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x5fc: Pop(1)
0x5fd: PushEmpty(string)
0x5fe: Call2 0xe6f

0x5ff: Pop(0)
0x600: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x601: Pop(1)
0x602: PushEmpty(string)
0x603: Call2 0xe71

0x604: Pop(0)
0x605: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x606: Pop(1)
0x607: PushEmpty(int)
0x608: Call2 0xf13

0x609: Pop(0)
0x60a: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x60b: Pop(1)
0x60c: Stack[-2] = (int) -1
0x60d: @ IsOverrideActive(Stack[-3])
0x60e: Pop(0)
0x60f: Push(Stack[-3])
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-10] = (int) -2
0x612: Return(); Pop(8)

0x613: @ DoDialog(Stack[-4])
0x614: Pop(0)
0x615: PushEmpty(object, object)
0x616: Stack[-11] = Stack[-2]
0x617: Stack[-6] = Stack[-1]
0x618: Push(-2, 4); TaskCall(13)
0x619: Call2 0x630

0x61a: Pop(-2, 4); TaskReturn
0x61b: Pop(2)
0x61c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x61d: Pop(0)
0x61e: Pop(0); Push((bool) Stack[-1] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x620: @ sync()
0x621: Pop(0)
0x622: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x623: Pop(0)
0x624: GOTO 0x61e

0x625: PushEmpty(object)
0x626: Stack[-10] = Stack[-1]
0x627: Call2 0xd36

0x628: Pop(1)
0x629: @ StopDialog(Stack[-4])
0x62a: Pop(0)
0x62b: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x62c: Pop(0)
0x62d: Stack[-2] = Stack[-10]
0x62e: Return(); Pop(8)

0x62f: Stack[-4] = 0
0x630: PushEmpty()
0x631: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x632: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x633: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x634: Push((int) 1)
0x635: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x636: PushEmpty(string)
0x637: Stack[-1] = "Neutral" // @poff=0
0x638: Call2 0x66a

0x639: Pop(1)
0x63a: Push((int) 529687)
0x63b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x63c: Pop(1)
0x63d: @@@ ClearReplies(); Obj=0 // @poff=134
0x63e: Pop(0)
0x63f: Push((int) 529688)
0x640: Push((int) -1)
0x641: Push((int) 31151)
0x642: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x643: Pop(3)
0x644: Push((int) 529689)
0x645: Push((int) -1)
0x646: Push((int) 31152)
0x647: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x648: Pop(3)
0x649: GOTO 0x64c

0x64a: Return(); Pop(0)

0x64b: GOTO 0x634

0x64c: PushEmpty(bool)
0x64d: Call2 0xe73

0x64e: Pop(0)
0x64f: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x650: @ lshWaitForAnimEnd()
0x651: Pop(0)
0x652: Push( Stack[3 + Tasks[-1].StackPointer] )
0x653: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x654: GOTO 0x65a

0x655: PushEmpty(string)
0x656: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x657: Call2 0xe0c

0x658: Pop(1)
0x659: GOTO 0x650

0x65a: GOTO 0x669

0x65b: Push("all") // @poff=16
0x65c: Push("idle") // @poff=24
0x65d: @ PlayAnimation(Stack[-2], Stack[-1])
0x65e: Pop(2)
0x65f: @ WaitForAnimEnd()
0x660: Pop(0)
0x661: Push( Stack[3 + Tasks[-1].StackPointer] )
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: GOTO 0x669

0x664: Push("all") // @poff=16
0x665: Push("idle") // @poff=24
0x666: @ PlayAnimation(Stack[-2], Stack[-1])
0x667: Pop(2)
0x668: GOTO 0x65f

0x669: Return(); Pop(0)

0x66a: PushEmpty()
0x66b: PushEmpty(bool)
0x66c: Call2 0xe73

0x66d: Pop(0)
0x66e: Pop(1); Push((bool) Stack[-1] == 0)
0x66f: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x670: Return(); Pop(0)

0x671: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(0)

0x674: PushEmpty(string, bool)
0x675: Stack[-3] = Stack[-2]
0x676: Push("") // @poff=13
0x677: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-1] = (bool) 0
0x67a: GOTO 0x67c

0x67b: Stack[-1] = (bool) 1
0x67c: Call2 0xe13

0x67d: Pop(2)
0x67e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x67f: Return(); Pop(0)

0x680: PushEmpty()
0x681: Push((int) 1)
0x682: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x683: PushEmpty()
0x684: Call2 0xe28

0x685: Pop(0)
0x686: Push((int) 31151)
0x687: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x689: PushEmpty(object, object)
0x68a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x68b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68c: Call2 0xe87

0x68d: Pop(2)
0x68e: Push((int) 31150)
0x68f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x691: PushEmpty(string)
0x692: Stack[-1] = "Neutral" // @poff=0
0x693: Call2 0x66a

0x694: Pop(1)
0x695: Push((int) 529687)
0x696: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x697: Pop(1)
0x698: @@@ ClearReplies(); Obj=0 // @poff=134
0x699: Pop(0)
0x69a: Push((int) 529688)
0x69b: Push((int) -1)
0x69c: Push((int) 31151)
0x69d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x69e: Pop(3)
0x69f: Push((int) 529689)
0x6a0: Push((int) -1)
0x6a1: Push((int) 31152)
0x6a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x6a3: Pop(3)
0x6a4: Return(); Pop(0)

0x6a5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6a6: PushEmpty(bool)
0x6a7: Call2 0xe73

0x6a8: Pop(0)
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6aa: @ lshStopAnimation()
0x6ab: Pop(0)
0x6ac: GOTO 0x6af

0x6ad: @ StopAnimation()
0x6ae: Pop(0)
0x6af: Return(); Pop(0)

0x6b0: GOTO 0x681

0x6b1: Return(); Pop(0)

0x6b2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6b4: PushEmpty(bool, object)
0x6b5: PushEmpty(object)
0x6b6: Call2 0xe2f

0x6b7: Stack[-1] = Stack[-2]
0x6b8: Pop(1)
0x6b9: Call2 0xd47

0x6ba: Pop(2)
0x6bb: PushEmpty(bool, object, float)
0x6bc: Stack[-12] = Stack[-2]
0x6bd: Stack[-1] = (float) 70.0
0x6be: Call2 0xcf2

0x6bf: Pop(2)
0x6c0: Pop(1); Push((bool) Stack[-1] == 0)
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c2: Stack[-10] = (int) -2
0x6c3: Return(); Pop(8)

0x6c4: @ CreateDialog(Stack[-4])
0x6c5: Pop(0)
0x6c6: PushEmpty(int)
0x6c7: Call2 0xe6d

0x6c8: Pop(0)
0x6c9: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x6ca: Pop(1)
0x6cb: PushEmpty(int)
0x6cc: Call2 0xe6b

0x6cd: Pop(0)
0x6ce: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x6cf: Pop(1)
0x6d0: PushEmpty(string)
0x6d1: Call2 0xe6f

0x6d2: Pop(0)
0x6d3: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x6d4: Pop(1)
0x6d5: PushEmpty(string)
0x6d6: Call2 0xe71

0x6d7: Pop(0)
0x6d8: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x6d9: Pop(1)
0x6da: PushEmpty(int)
0x6db: Call2 0xf13

0x6dc: Pop(0)
0x6dd: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x6de: Pop(1)
0x6df: Stack[-2] = (int) -1
0x6e0: @ IsOverrideActive(Stack[-3])
0x6e1: Pop(0)
0x6e2: Push(Stack[-3])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e4: Stack[-10] = (int) -2
0x6e5: Return(); Pop(8)

0x6e6: @ DoDialog(Stack[-4])
0x6e7: Pop(0)
0x6e8: PushEmpty(object, object)
0x6e9: Stack[-11] = Stack[-2]
0x6ea: Stack[-6] = Stack[-1]
0x6eb: Push(-2, 4); TaskCall(15)
0x6ec: Call2 0x703

0x6ed: Pop(-2, 4); TaskReturn
0x6ee: Pop(2)
0x6ef: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x6f0: Pop(0)
0x6f1: Pop(0); Push((bool) Stack[-1] == 0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f3: @ sync()
0x6f4: Pop(0)
0x6f5: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x6f6: Pop(0)
0x6f7: GOTO 0x6f1

0x6f8: PushEmpty(object)
0x6f9: Stack[-10] = Stack[-1]
0x6fa: Call2 0xd36

0x6fb: Pop(1)
0x6fc: @ StopDialog(Stack[-4])
0x6fd: Pop(0)
0x6fe: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x6ff: Pop(0)
0x700: Stack[-2] = Stack[-10]
0x701: Return(); Pop(8)

0x702: Stack[-4] = 0
0x703: PushEmpty()
0x704: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x705: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x706: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x707: Push((int) 1)
0x708: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x709: PushEmpty(string)
0x70a: Stack[-1] = "Neutral" // @poff=0
0x70b: Call2 0x73d

0x70c: Pop(1)
0x70d: Push((int) 529691)
0x70e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x70f: Pop(1)
0x710: @@@ ClearReplies(); Obj=0 // @poff=134
0x711: Pop(0)
0x712: Push((int) 529692)
0x713: Push((int) -1)
0x714: Push((int) 31155)
0x715: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x716: Pop(3)
0x717: Push((int) 529693)
0x718: Push((int) -1)
0x719: Push((int) 31156)
0x71a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x71b: Pop(3)
0x71c: GOTO 0x71f

0x71d: Return(); Pop(0)

0x71e: GOTO 0x707

0x71f: PushEmpty(bool)
0x720: Call2 0xe73

0x721: Pop(0)
0x722: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x723: @ lshWaitForAnimEnd()
0x724: Pop(0)
0x725: Push( Stack[3 + Tasks[-1].StackPointer] )
0x726: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x727: GOTO 0x72d

0x728: PushEmpty(string)
0x729: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x72a: Call2 0xe0c

0x72b: Pop(1)
0x72c: GOTO 0x723

0x72d: GOTO 0x73c

0x72e: Push("all") // @poff=16
0x72f: Push("idle") // @poff=24
0x730: @ PlayAnimation(Stack[-2], Stack[-1])
0x731: Pop(2)
0x732: @ WaitForAnimEnd()
0x733: Pop(0)
0x734: Push( Stack[3 + Tasks[-1].StackPointer] )
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: GOTO 0x73c

0x737: Push("all") // @poff=16
0x738: Push("idle") // @poff=24
0x739: @ PlayAnimation(Stack[-2], Stack[-1])
0x73a: Pop(2)
0x73b: GOTO 0x732

0x73c: Return(); Pop(0)

0x73d: PushEmpty()
0x73e: PushEmpty(bool)
0x73f: Call2 0xe73

0x740: Pop(0)
0x741: Pop(1); Push((bool) Stack[-1] == 0)
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: Return(); Pop(0)

0x744: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Return(); Pop(0)

0x747: PushEmpty(string, bool)
0x748: Stack[-3] = Stack[-2]
0x749: Push("") // @poff=13
0x74a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-1] = (bool) 0
0x74d: GOTO 0x74f

0x74e: Stack[-1] = (bool) 1
0x74f: Call2 0xe13

0x750: Pop(2)
0x751: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x752: Return(); Pop(0)

0x753: PushEmpty()
0x754: Push((int) 1)
0x755: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x756: PushEmpty()
0x757: Call2 0xe28

0x758: Pop(0)
0x759: Push((int) 31155)
0x75a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75c: PushEmpty(object, object)
0x75d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75f: Call2 0xe87

0x760: Pop(2)
0x761: Push((int) 31154)
0x762: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x764: PushEmpty(string)
0x765: Stack[-1] = "Neutral" // @poff=0
0x766: Call2 0x73d

0x767: Pop(1)
0x768: Push((int) 529691)
0x769: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x76a: Pop(1)
0x76b: @@@ ClearReplies(); Obj=0 // @poff=134
0x76c: Pop(0)
0x76d: Push((int) 529692)
0x76e: Push((int) -1)
0x76f: Push((int) 31155)
0x770: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x771: Pop(3)
0x772: Push((int) 529693)
0x773: Push((int) -1)
0x774: Push((int) 31156)
0x775: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x776: Pop(3)
0x777: Return(); Pop(0)

0x778: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x779: PushEmpty(bool)
0x77a: Call2 0xe73

0x77b: Pop(0)
0x77c: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77d: @ lshStopAnimation()
0x77e: Pop(0)
0x77f: GOTO 0x782

0x780: @ StopAnimation()
0x781: Pop(0)
0x782: Return(); Pop(0)

0x783: GOTO 0x754

0x784: Return(); Pop(0)

0x785: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x786: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x787: PushEmpty(bool, object)
0x788: PushEmpty(object)
0x789: Call2 0xe2f

0x78a: Stack[-1] = Stack[-2]
0x78b: Pop(1)
0x78c: Call2 0xd47

0x78d: Pop(2)
0x78e: PushEmpty(bool, object, float)
0x78f: Stack[-12] = Stack[-2]
0x790: Stack[-1] = (float) 70.0
0x791: Call2 0xcf2

0x792: Pop(2)
0x793: Pop(1); Push((bool) Stack[-1] == 0)
0x794: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x795: Stack[-10] = (int) -2
0x796: Return(); Pop(8)

0x797: @ CreateDialog(Stack[-4])
0x798: Pop(0)
0x799: PushEmpty(int)
0x79a: Call2 0xe6d

0x79b: Pop(0)
0x79c: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x79d: Pop(1)
0x79e: PushEmpty(int)
0x79f: Call2 0xe6b

0x7a0: Pop(0)
0x7a1: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x7a2: Pop(1)
0x7a3: PushEmpty(string)
0x7a4: Call2 0xe6f

0x7a5: Pop(0)
0x7a6: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x7a7: Pop(1)
0x7a8: PushEmpty(string)
0x7a9: Call2 0xe71

0x7aa: Pop(0)
0x7ab: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x7ac: Pop(1)
0x7ad: PushEmpty(int)
0x7ae: Call2 0xf13

0x7af: Pop(0)
0x7b0: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x7b1: Pop(1)
0x7b2: Stack[-2] = (int) -1
0x7b3: @ IsOverrideActive(Stack[-3])
0x7b4: Pop(0)
0x7b5: Push(Stack[-3])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b7: Stack[-10] = (int) -2
0x7b8: Return(); Pop(8)

0x7b9: @ DoDialog(Stack[-4])
0x7ba: Pop(0)
0x7bb: PushEmpty(object, object)
0x7bc: Stack[-11] = Stack[-2]
0x7bd: Stack[-6] = Stack[-1]
0x7be: Push(-2, 4); TaskCall(17)
0x7bf: Call2 0x7d6

0x7c0: Pop(-2, 4); TaskReturn
0x7c1: Pop(2)
0x7c2: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x7c3: Pop(0)
0x7c4: Pop(0); Push((bool) Stack[-1] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c6: @ sync()
0x7c7: Pop(0)
0x7c8: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x7c9: Pop(0)
0x7ca: GOTO 0x7c4

0x7cb: PushEmpty(object)
0x7cc: Stack[-10] = Stack[-1]
0x7cd: Call2 0xd36

0x7ce: Pop(1)
0x7cf: @ StopDialog(Stack[-4])
0x7d0: Pop(0)
0x7d1: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x7d2: Pop(0)
0x7d3: Stack[-2] = Stack[-10]
0x7d4: Return(); Pop(8)

0x7d5: Stack[-4] = 0
0x7d6: PushEmpty()
0x7d7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7d8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7d9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7da: Push((int) 1)
0x7db: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7dc: PushEmpty(string)
0x7dd: Stack[-1] = "Neutral" // @poff=0
0x7de: Call2 0x810

0x7df: Pop(1)
0x7e0: Push((int) 529695)
0x7e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x7e2: Pop(1)
0x7e3: @@@ ClearReplies(); Obj=0 // @poff=134
0x7e4: Pop(0)
0x7e5: Push((int) 529696)
0x7e6: Push((int) -1)
0x7e7: Push((int) 31159)
0x7e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x7e9: Pop(3)
0x7ea: Push((int) 529697)
0x7eb: Push((int) -1)
0x7ec: Push((int) 31160)
0x7ed: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x7ee: Pop(3)
0x7ef: GOTO 0x7f2

0x7f0: Return(); Pop(0)

0x7f1: GOTO 0x7da

0x7f2: PushEmpty(bool)
0x7f3: Call2 0xe73

0x7f4: Pop(0)
0x7f5: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7f6: @ lshWaitForAnimEnd()
0x7f7: Pop(0)
0x7f8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: GOTO 0x800

0x7fb: PushEmpty(string)
0x7fc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7fd: Call2 0xe0c

0x7fe: Pop(1)
0x7ff: GOTO 0x7f6

0x800: GOTO 0x80f

0x801: Push("all") // @poff=16
0x802: Push("idle") // @poff=24
0x803: @ PlayAnimation(Stack[-2], Stack[-1])
0x804: Pop(2)
0x805: @ WaitForAnimEnd()
0x806: Pop(0)
0x807: Push( Stack[3 + Tasks[-1].StackPointer] )
0x808: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x809: GOTO 0x80f

0x80a: Push("all") // @poff=16
0x80b: Push("idle") // @poff=24
0x80c: @ PlayAnimation(Stack[-2], Stack[-1])
0x80d: Pop(2)
0x80e: GOTO 0x805

0x80f: Return(); Pop(0)

0x810: PushEmpty()
0x811: PushEmpty(bool)
0x812: Call2 0xe73

0x813: Pop(0)
0x814: Pop(1); Push((bool) Stack[-1] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x816: Return(); Pop(0)

0x817: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x818: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x819: Return(); Pop(0)

0x81a: PushEmpty(string, bool)
0x81b: Stack[-3] = Stack[-2]
0x81c: Push("") // @poff=13
0x81d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81f: Stack[-1] = (bool) 0
0x820: GOTO 0x822

0x821: Stack[-1] = (bool) 1
0x822: Call2 0xe13

0x823: Pop(2)
0x824: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x825: Return(); Pop(0)

0x826: PushEmpty()
0x827: Push((int) 1)
0x828: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x829: PushEmpty()
0x82a: Call2 0xe28

0x82b: Pop(0)
0x82c: Push((int) 31159)
0x82d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x82f: PushEmpty(object, object)
0x830: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x831: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x832: Call2 0xe87

0x833: Pop(2)
0x834: Push((int) 31158)
0x835: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x836: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x837: PushEmpty(string)
0x838: Stack[-1] = "Neutral" // @poff=0
0x839: Call2 0x810

0x83a: Pop(1)
0x83b: Push((int) 529695)
0x83c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x83d: Pop(1)
0x83e: @@@ ClearReplies(); Obj=0 // @poff=134
0x83f: Pop(0)
0x840: Push((int) 529696)
0x841: Push((int) -1)
0x842: Push((int) 31159)
0x843: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x844: Pop(3)
0x845: Push((int) 529697)
0x846: Push((int) -1)
0x847: Push((int) 31160)
0x848: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x849: Pop(3)
0x84a: Return(); Pop(0)

0x84b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x84c: PushEmpty(bool)
0x84d: Call2 0xe73

0x84e: Pop(0)
0x84f: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x850: @ lshStopAnimation()
0x851: Pop(0)
0x852: GOTO 0x855

0x853: @ StopAnimation()
0x854: Pop(0)
0x855: Return(); Pop(0)

0x856: GOTO 0x827

0x857: Return(); Pop(0)

0x858: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x859: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x85a: PushEmpty(bool, object)
0x85b: PushEmpty(object)
0x85c: Call2 0xe2f

0x85d: Stack[-1] = Stack[-2]
0x85e: Pop(1)
0x85f: Call2 0xd47

0x860: Pop(2)
0x861: PushEmpty(bool, object, float)
0x862: Stack[-12] = Stack[-2]
0x863: Stack[-1] = (float) 70.0
0x864: Call2 0xcf2

0x865: Pop(2)
0x866: Pop(1); Push((bool) Stack[-1] == 0)
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: Stack[-10] = (int) -2
0x869: Return(); Pop(8)

0x86a: @ CreateDialog(Stack[-4])
0x86b: Pop(0)
0x86c: PushEmpty(int)
0x86d: Call2 0xe6d

0x86e: Pop(0)
0x86f: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x870: Pop(1)
0x871: PushEmpty(int)
0x872: Call2 0xe6b

0x873: Pop(0)
0x874: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x875: Pop(1)
0x876: PushEmpty(string)
0x877: Call2 0xe6f

0x878: Pop(0)
0x879: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x87a: Pop(1)
0x87b: PushEmpty(string)
0x87c: Call2 0xe71

0x87d: Pop(0)
0x87e: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x87f: Pop(1)
0x880: PushEmpty(int)
0x881: Call2 0xf13

0x882: Pop(0)
0x883: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x884: Pop(1)
0x885: Stack[-2] = (int) -1
0x886: @ IsOverrideActive(Stack[-3])
0x887: Pop(0)
0x888: Push(Stack[-3])
0x889: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x88a: Stack[-10] = (int) -2
0x88b: Return(); Pop(8)

0x88c: @ DoDialog(Stack[-4])
0x88d: Pop(0)
0x88e: PushEmpty(object, object)
0x88f: Stack[-11] = Stack[-2]
0x890: Stack[-6] = Stack[-1]
0x891: Push(-2, 4); TaskCall(19)
0x892: Call2 0x8a9

0x893: Pop(-2, 4); TaskReturn
0x894: Pop(2)
0x895: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x896: Pop(0)
0x897: Pop(0); Push((bool) Stack[-1] == 0)
0x898: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x899: @ sync()
0x89a: Pop(0)
0x89b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x89c: Pop(0)
0x89d: GOTO 0x897

0x89e: PushEmpty(object)
0x89f: Stack[-10] = Stack[-1]
0x8a0: Call2 0xd36

0x8a1: Pop(1)
0x8a2: @ StopDialog(Stack[-4])
0x8a3: Pop(0)
0x8a4: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x8a5: Pop(0)
0x8a6: Stack[-2] = Stack[-10]
0x8a7: Return(); Pop(8)

0x8a8: Stack[-4] = 0
0x8a9: PushEmpty()
0x8aa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8ab: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8ac: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8ad: Push((int) 1)
0x8ae: IF (Stack[-1] == 0) GOTO 0x8c5; Pop(1)

0x8af: PushEmpty(string)
0x8b0: Stack[-1] = "Neutral" // @poff=0
0x8b1: Call2 0x8e3

0x8b2: Pop(1)
0x8b3: Push((int) 529699)
0x8b4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x8b5: Pop(1)
0x8b6: @@@ ClearReplies(); Obj=0 // @poff=134
0x8b7: Pop(0)
0x8b8: Push((int) 529700)
0x8b9: Push((int) -1)
0x8ba: Push((int) 31163)
0x8bb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x8bc: Pop(3)
0x8bd: Push((int) 529701)
0x8be: Push((int) -1)
0x8bf: Push((int) 31164)
0x8c0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x8c1: Pop(3)
0x8c2: GOTO 0x8c5

0x8c3: Return(); Pop(0)

0x8c4: GOTO 0x8ad

0x8c5: PushEmpty(bool)
0x8c6: Call2 0xe73

0x8c7: Pop(0)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8c9: @ lshWaitForAnimEnd()
0x8ca: Pop(0)
0x8cb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8cc: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cd: GOTO 0x8d3

0x8ce: PushEmpty(string)
0x8cf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8d0: Call2 0xe0c

0x8d1: Pop(1)
0x8d2: GOTO 0x8c9

0x8d3: GOTO 0x8e2

0x8d4: Push("all") // @poff=16
0x8d5: Push("idle") // @poff=24
0x8d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d7: Pop(2)
0x8d8: @ WaitForAnimEnd()
0x8d9: Pop(0)
0x8da: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8db: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8dc: GOTO 0x8e2

0x8dd: Push("all") // @poff=16
0x8de: Push("idle") // @poff=24
0x8df: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e0: Pop(2)
0x8e1: GOTO 0x8d8

0x8e2: Return(); Pop(0)

0x8e3: PushEmpty()
0x8e4: PushEmpty(bool)
0x8e5: Call2 0xe73

0x8e6: Pop(0)
0x8e7: Pop(1); Push((bool) Stack[-1] == 0)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e9: Return(); Pop(0)

0x8ea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8eb: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8ec: Return(); Pop(0)

0x8ed: PushEmpty(string, bool)
0x8ee: Stack[-3] = Stack[-2]
0x8ef: Push("") // @poff=13
0x8f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f2: Stack[-1] = (bool) 0
0x8f3: GOTO 0x8f5

0x8f4: Stack[-1] = (bool) 1
0x8f5: Call2 0xe13

0x8f6: Pop(2)
0x8f7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8f8: Return(); Pop(0)

0x8f9: PushEmpty()
0x8fa: Push((int) 1)
0x8fb: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x8fc: PushEmpty()
0x8fd: Call2 0xe28

0x8fe: Pop(0)
0x8ff: Push((int) 31163)
0x900: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x901: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x902: PushEmpty(object, object)
0x903: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x904: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x905: Call2 0xe87

0x906: Pop(2)
0x907: Push((int) 31162)
0x908: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x90a: PushEmpty(string)
0x90b: Stack[-1] = "Neutral" // @poff=0
0x90c: Call2 0x8e3

0x90d: Pop(1)
0x90e: Push((int) 529699)
0x90f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x910: Pop(1)
0x911: @@@ ClearReplies(); Obj=0 // @poff=134
0x912: Pop(0)
0x913: Push((int) 529700)
0x914: Push((int) -1)
0x915: Push((int) 31163)
0x916: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x917: Pop(3)
0x918: Push((int) 529701)
0x919: Push((int) -1)
0x91a: Push((int) 31164)
0x91b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x91c: Pop(3)
0x91d: Return(); Pop(0)

0x91e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x91f: PushEmpty(bool)
0x920: Call2 0xe73

0x921: Pop(0)
0x922: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x923: @ lshStopAnimation()
0x924: Pop(0)
0x925: GOTO 0x928

0x926: @ StopAnimation()
0x927: Pop(0)
0x928: Return(); Pop(0)

0x929: GOTO 0x8fa

0x92a: Return(); Pop(0)

0x92b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x92c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x92d: PushEmpty(bool, object)
0x92e: PushEmpty(object)
0x92f: Call2 0xe2f

0x930: Stack[-1] = Stack[-2]
0x931: Pop(1)
0x932: Call2 0xd47

0x933: Pop(2)
0x934: PushEmpty(bool, object, float)
0x935: Stack[-12] = Stack[-2]
0x936: Stack[-1] = (float) 70.0
0x937: Call2 0xcf2

0x938: Pop(2)
0x939: Pop(1); Push((bool) Stack[-1] == 0)
0x93a: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93b: Stack[-10] = (int) -2
0x93c: Return(); Pop(8)

0x93d: @ CreateDialog(Stack[-4])
0x93e: Pop(0)
0x93f: PushEmpty(int)
0x940: Call2 0xe6d

0x941: Pop(0)
0x942: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0x943: Pop(1)
0x944: PushEmpty(int)
0x945: Call2 0xe6b

0x946: Pop(0)
0x947: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0x948: Pop(1)
0x949: PushEmpty(string)
0x94a: Call2 0xe6f

0x94b: Pop(0)
0x94c: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0x94d: Pop(1)
0x94e: PushEmpty(string)
0x94f: Call2 0xe71

0x950: Pop(0)
0x951: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0x952: Pop(1)
0x953: PushEmpty(int)
0x954: Call2 0xf13

0x955: Pop(0)
0x956: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0x957: Pop(1)
0x958: Stack[-2] = (int) -1
0x959: @ IsOverrideActive(Stack[-3])
0x95a: Pop(0)
0x95b: Push(Stack[-3])
0x95c: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x95d: Stack[-10] = (int) -2
0x95e: Return(); Pop(8)

0x95f: @ DoDialog(Stack[-4])
0x960: Pop(0)
0x961: PushEmpty(object, object)
0x962: Stack[-11] = Stack[-2]
0x963: Stack[-6] = Stack[-1]
0x964: Push(-2, 4); TaskCall(21)
0x965: Call2 0x97c

0x966: Pop(-2, 4); TaskReturn
0x967: Pop(2)
0x968: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x969: Pop(0)
0x96a: Pop(0); Push((bool) Stack[-1] == 0)
0x96b: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x96c: @ sync()
0x96d: Pop(0)
0x96e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0x96f: Pop(0)
0x970: GOTO 0x96a

0x971: PushEmpty(object)
0x972: Stack[-10] = Stack[-1]
0x973: Call2 0xd36

0x974: Pop(1)
0x975: @ StopDialog(Stack[-4])
0x976: Pop(0)
0x977: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0x978: Pop(0)
0x979: Stack[-2] = Stack[-10]
0x97a: Return(); Pop(8)

0x97b: Stack[-4] = 0
0x97c: PushEmpty()
0x97d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x97e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x97f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x980: Push((int) 1)
0x981: IF (Stack[-1] == 0) GOTO 0x998; Pop(1)

0x982: PushEmpty(string)
0x983: Stack[-1] = "Neutral" // @poff=0
0x984: Call2 0x9b6

0x985: Pop(1)
0x986: Push((int) 529703)
0x987: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x988: Pop(1)
0x989: @@@ ClearReplies(); Obj=0 // @poff=134
0x98a: Pop(0)
0x98b: Push((int) 529704)
0x98c: Push((int) -1)
0x98d: Push((int) 31167)
0x98e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x98f: Pop(3)
0x990: Push((int) 529705)
0x991: Push((int) -1)
0x992: Push((int) 31168)
0x993: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x994: Pop(3)
0x995: GOTO 0x998

0x996: Return(); Pop(0)

0x997: GOTO 0x980

0x998: PushEmpty(bool)
0x999: Call2 0xe73

0x99a: Pop(0)
0x99b: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x99c: @ lshWaitForAnimEnd()
0x99d: Pop(0)
0x99e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99f: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x9a0: GOTO 0x9a6

0x9a1: PushEmpty(string)
0x9a2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9a3: Call2 0xe0c

0x9a4: Pop(1)
0x9a5: GOTO 0x99c

0x9a6: GOTO 0x9b5

0x9a7: Push("all") // @poff=16
0x9a8: Push("idle") // @poff=24
0x9a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x9aa: Pop(2)
0x9ab: @ WaitForAnimEnd()
0x9ac: Pop(0)
0x9ad: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9ae: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9af: GOTO 0x9b5

0x9b0: Push("all") // @poff=16
0x9b1: Push("idle") // @poff=24
0x9b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b3: Pop(2)
0x9b4: GOTO 0x9ab

0x9b5: Return(); Pop(0)

0x9b6: PushEmpty()
0x9b7: PushEmpty(bool)
0x9b8: Call2 0xe73

0x9b9: Pop(0)
0x9ba: Pop(1); Push((bool) Stack[-1] == 0)
0x9bb: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bc: Return(); Pop(0)

0x9bd: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9be: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bf: Return(); Pop(0)

0x9c0: PushEmpty(string, bool)
0x9c1: Stack[-3] = Stack[-2]
0x9c2: Push("") // @poff=13
0x9c3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c5: Stack[-1] = (bool) 0
0x9c6: GOTO 0x9c8

0x9c7: Stack[-1] = (bool) 1
0x9c8: Call2 0xe13

0x9c9: Pop(2)
0x9ca: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty()
0x9cd: Push((int) 1)
0x9ce: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9cf: PushEmpty()
0x9d0: Call2 0xe28

0x9d1: Pop(0)
0x9d2: Push((int) 31167)
0x9d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d4: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9d5: PushEmpty(object, object)
0x9d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d8: Call2 0xe87

0x9d9: Pop(2)
0x9da: Push((int) 31166)
0x9db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "Neutral" // @poff=0
0x9df: Call2 0x9b6

0x9e0: Pop(1)
0x9e1: Push((int) 529703)
0x9e2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0x9e3: Pop(1)
0x9e4: @@@ ClearReplies(); Obj=0 // @poff=134
0x9e5: Pop(0)
0x9e6: Push((int) 529704)
0x9e7: Push((int) -1)
0x9e8: Push((int) 31167)
0x9e9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x9ea: Pop(3)
0x9eb: Push((int) 529705)
0x9ec: Push((int) -1)
0x9ed: Push((int) 31168)
0x9ee: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0x9ef: Pop(3)
0x9f0: Return(); Pop(0)

0x9f1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9f2: PushEmpty(bool)
0x9f3: Call2 0xe73

0x9f4: Pop(0)
0x9f5: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f6: @ lshStopAnimation()
0x9f7: Pop(0)
0x9f8: GOTO 0x9fb

0x9f9: @ StopAnimation()
0x9fa: Pop(0)
0x9fb: Return(); Pop(0)

0x9fc: GOTO 0x9cd

0x9fd: Return(); Pop(0)

0x9fe: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x9ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa00: PushEmpty(bool, object)
0xa01: PushEmpty(object)
0xa02: Call2 0xe2f

0xa03: Stack[-1] = Stack[-2]
0xa04: Pop(1)
0xa05: Call2 0xd47

0xa06: Pop(2)
0xa07: PushEmpty(bool, object, float)
0xa08: Stack[-12] = Stack[-2]
0xa09: Stack[-1] = (float) 70.0
0xa0a: Call2 0xcf2

0xa0b: Pop(2)
0xa0c: Pop(1); Push((bool) Stack[-1] == 0)
0xa0d: IF (Stack[-1] == 0) GOTO 0xa10; Pop(1)

0xa0e: Stack[-10] = (int) -2
0xa0f: Return(); Pop(8)

0xa10: @ CreateDialog(Stack[-4])
0xa11: Pop(0)
0xa12: PushEmpty(int)
0xa13: Call2 0xe6d

0xa14: Pop(0)
0xa15: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0xa16: Pop(1)
0xa17: PushEmpty(int)
0xa18: Call2 0xe6b

0xa19: Pop(0)
0xa1a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0xa1b: Pop(1)
0xa1c: PushEmpty(string)
0xa1d: Call2 0xe6f

0xa1e: Pop(0)
0xa1f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0xa20: Pop(1)
0xa21: PushEmpty(string)
0xa22: Call2 0xe71

0xa23: Pop(0)
0xa24: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0xa25: Pop(1)
0xa26: PushEmpty(int)
0xa27: Call2 0xf13

0xa28: Pop(0)
0xa29: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0xa2a: Pop(1)
0xa2b: Stack[-2] = (int) -1
0xa2c: @ IsOverrideActive(Stack[-3])
0xa2d: Pop(0)
0xa2e: Push(Stack[-3])
0xa2f: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa30: Stack[-10] = (int) -2
0xa31: Return(); Pop(8)

0xa32: @ DoDialog(Stack[-4])
0xa33: Pop(0)
0xa34: PushEmpty(object, object)
0xa35: Stack[-11] = Stack[-2]
0xa36: Stack[-6] = Stack[-1]
0xa37: Push(-2, 4); TaskCall(23)
0xa38: Call2 0xa4f

0xa39: Pop(-2, 4); TaskReturn
0xa3a: Pop(2)
0xa3b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0xa3c: Pop(0)
0xa3d: Pop(0); Push((bool) Stack[-1] == 0)
0xa3e: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa3f: @ sync()
0xa40: Pop(0)
0xa41: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0xa42: Pop(0)
0xa43: GOTO 0xa3d

0xa44: PushEmpty(object)
0xa45: Stack[-10] = Stack[-1]
0xa46: Call2 0xd36

0xa47: Pop(1)
0xa48: @ StopDialog(Stack[-4])
0xa49: Pop(0)
0xa4a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0xa4b: Pop(0)
0xa4c: Stack[-2] = Stack[-10]
0xa4d: Return(); Pop(8)

0xa4e: Stack[-4] = 0
0xa4f: PushEmpty()
0xa50: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa51: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa52: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa53: Push((int) 1)
0xa54: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa55: PushEmpty(string)
0xa56: Stack[-1] = "Neutral" // @poff=0
0xa57: Call2 0xa8e

0xa58: Pop(1)
0xa59: Push((int) 535231)
0xa5a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xa5b: Pop(1)
0xa5c: @@@ ClearReplies(); Obj=0 // @poff=134
0xa5d: Pop(0)
0xa5e: Push((int) 535232)
0xa5f: Push((int) 36953)
0xa60: Push((int) 36907)
0xa61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xa62: Pop(3)
0xa63: Push((int) 535233)
0xa64: Push((int) -1)
0xa65: Push((int) 36908)
0xa66: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xa67: Pop(3)
0xa68: Push((int) 535280)
0xa69: Push((int) -1)
0xa6a: Push((int) 36956)
0xa6b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xa6c: Pop(3)
0xa6d: GOTO 0xa70

0xa6e: Return(); Pop(0)

0xa6f: GOTO 0xa53

0xa70: PushEmpty(bool)
0xa71: Call2 0xe73

0xa72: Pop(0)
0xa73: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa74: @ lshWaitForAnimEnd()
0xa75: Pop(0)
0xa76: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa77: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa78: GOTO 0xa7e

0xa79: PushEmpty(string)
0xa7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa7b: Call2 0xe0c

0xa7c: Pop(1)
0xa7d: GOTO 0xa74

0xa7e: GOTO 0xa8d

0xa7f: Push("all") // @poff=16
0xa80: Push("idle") // @poff=24
0xa81: @ PlayAnimation(Stack[-2], Stack[-1])
0xa82: Pop(2)
0xa83: @ WaitForAnimEnd()
0xa84: Pop(0)
0xa85: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa86: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa87: GOTO 0xa8d

0xa88: Push("all") // @poff=16
0xa89: Push("idle") // @poff=24
0xa8a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8b: Pop(2)
0xa8c: GOTO 0xa83

0xa8d: Return(); Pop(0)

0xa8e: PushEmpty()
0xa8f: PushEmpty(bool)
0xa90: Call2 0xe73

0xa91: Pop(0)
0xa92: Pop(1); Push((bool) Stack[-1] == 0)
0xa93: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa94: Return(); Pop(0)

0xa95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa96: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa97: Return(); Pop(0)

0xa98: PushEmpty(string, bool)
0xa99: Stack[-3] = Stack[-2]
0xa9a: Push("") // @poff=13
0xa9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa9c: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa9d: Stack[-1] = (bool) 0
0xa9e: GOTO 0xaa0

0xa9f: Stack[-1] = (bool) 1
0xaa0: Call2 0xe13

0xaa1: Pop(2)
0xaa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa3: Return(); Pop(0)

0xaa4: PushEmpty()
0xaa5: Push((int) 1)
0xaa6: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xaa7: PushEmpty()
0xaa8: Call2 0xe28

0xaa9: Pop(0)
0xaaa: Push((int) 36906)
0xaab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaac: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xaad: PushEmpty(string)
0xaae: Stack[-1] = "Neutral" // @poff=0
0xaaf: Call2 0xa8e

0xab0: Pop(1)
0xab1: Push((int) 535231)
0xab2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xab3: Pop(1)
0xab4: @@@ ClearReplies(); Obj=0 // @poff=134
0xab5: Pop(0)
0xab6: Push((int) 535232)
0xab7: Push((int) 36953)
0xab8: Push((int) 36907)
0xab9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xaba: Pop(3)
0xabb: Push((int) 535233)
0xabc: Push((int) -1)
0xabd: Push((int) 36908)
0xabe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xabf: Pop(3)
0xac0: Push((int) 535280)
0xac1: Push((int) -1)
0xac2: Push((int) 36956)
0xac3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xac4: Pop(3)
0xac5: Return(); Pop(0)

0xac6: Push((int) 36953)
0xac7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac8: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xac9: PushEmpty(string)
0xaca: Stack[-1] = "Neutral" // @poff=0
0xacb: Call2 0xa8e

0xacc: Pop(1)
0xacd: Push((int) 535277)
0xace: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xacf: Pop(1)
0xad0: @@@ ClearReplies(); Obj=0 // @poff=134
0xad1: Pop(0)
0xad2: Push((int) 535278)
0xad3: Push((int) 36957)
0xad4: Push((int) 36954)
0xad5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xad6: Pop(3)
0xad7: Push((int) 535279)
0xad8: Push((int) 36957)
0xad9: Push((int) 36955)
0xada: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xadb: Pop(3)
0xadc: Return(); Pop(0)

0xadd: Push((int) 36957)
0xade: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadf: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xae0: PushEmpty(string)
0xae1: Stack[-1] = "Neutral" // @poff=0
0xae2: Call2 0xa8e

0xae3: Pop(1)
0xae4: Push((int) 535281)
0xae5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xae6: Pop(1)
0xae7: @@@ ClearReplies(); Obj=0 // @poff=134
0xae8: Pop(0)
0xae9: Push((int) 535282)
0xaea: Push((int) -1)
0xaeb: Push((int) 36958)
0xaec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xaed: Pop(3)
0xaee: Push((int) 535283)
0xaef: Push((int) -1)
0xaf0: Push((int) 36959)
0xaf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xaf2: Pop(3)
0xaf3: Return(); Pop(0)

0xaf4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaf5: PushEmpty(bool)
0xaf6: Call2 0xe73

0xaf7: Pop(0)
0xaf8: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf9: @ lshStopAnimation()
0xafa: Pop(0)
0xafb: GOTO 0xafe

0xafc: @ StopAnimation()
0xafd: Pop(0)
0xafe: Return(); Pop(0)

0xaff: GOTO 0xaa5

0xb00: Return(); Pop(0)

0xb01: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb02: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb03: PushEmpty(bool, object)
0xb04: PushEmpty(object)
0xb05: Call2 0xe2f

0xb06: Stack[-1] = Stack[-2]
0xb07: Pop(1)
0xb08: Call2 0xd47

0xb09: Pop(2)
0xb0a: PushEmpty(bool, object, float)
0xb0b: Stack[-12] = Stack[-2]
0xb0c: Stack[-1] = (float) 70.0
0xb0d: Call2 0xcf2

0xb0e: Pop(2)
0xb0f: Pop(1); Push((bool) Stack[-1] == 0)
0xb10: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb11: Stack[-10] = (int) -2
0xb12: Return(); Pop(8)

0xb13: @ CreateDialog(Stack[-4])
0xb14: Pop(0)
0xb15: PushEmpty(int)
0xb16: Call2 0xe6d

0xb17: Pop(0)
0xb18: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=34
0xb19: Pop(1)
0xb1a: PushEmpty(int)
0xb1b: Call2 0xe6b

0xb1c: Pop(0)
0xb1d: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=45
0xb1e: Pop(1)
0xb1f: PushEmpty(string)
0xb20: Call2 0xe6f

0xb21: Pop(0)
0xb22: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=63
0xb23: Pop(1)
0xb24: PushEmpty(string)
0xb25: Call2 0xe71

0xb26: Pop(0)
0xb27: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=72
0xb28: Pop(1)
0xb29: PushEmpty(int)
0xb2a: Call2 0xf13

0xb2b: Pop(0)
0xb2c: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=82
0xb2d: Pop(1)
0xb2e: Stack[-2] = (int) -1
0xb2f: @ IsOverrideActive(Stack[-3])
0xb30: Pop(0)
0xb31: Push(Stack[-3])
0xb32: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb33: Stack[-10] = (int) -2
0xb34: Return(); Pop(8)

0xb35: @ DoDialog(Stack[-4])
0xb36: Pop(0)
0xb37: PushEmpty(object, object)
0xb38: Stack[-11] = Stack[-2]
0xb39: Stack[-6] = Stack[-1]
0xb3a: Push(-2, 4); TaskCall(25)
0xb3b: Call2 0xb52

0xb3c: Pop(-2, 4); TaskReturn
0xb3d: Pop(2)
0xb3e: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0xb3f: Pop(0)
0xb40: Pop(0); Push((bool) Stack[-1] == 0)
0xb41: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb42: @ sync()
0xb43: Pop(0)
0xb44: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=96
0xb45: Pop(0)
0xb46: GOTO 0xb40

0xb47: PushEmpty(object)
0xb48: Stack[-10] = Stack[-1]
0xb49: Call2 0xd36

0xb4a: Pop(1)
0xb4b: @ StopDialog(Stack[-4])
0xb4c: Pop(0)
0xb4d: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=108
0xb4e: Pop(0)
0xb4f: Stack[-2] = Stack[-10]
0xb50: Return(); Pop(8)

0xb51: Stack[-4] = 0
0xb52: PushEmpty()
0xb53: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb54: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb55: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb56: Push((int) 1)
0xb57: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb58: PushEmpty(string)
0xb59: Stack[-1] = "Neutral" // @poff=0
0xb5a: Call2 0xb8c

0xb5b: Pop(1)
0xb5c: Push((int) 540545)
0xb5d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xb5e: Pop(1)
0xb5f: @@@ ClearReplies(); Obj=0 // @poff=134
0xb60: Pop(0)
0xb61: Push((int) 540546)
0xb62: Push((int) -1)
0xb63: Push((int) 42555)
0xb64: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xb65: Pop(3)
0xb66: Push((int) 540798)
0xb67: Push((int) -1)
0xb68: Push((int) 42847)
0xb69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xb6a: Pop(3)
0xb6b: GOTO 0xb6e

0xb6c: Return(); Pop(0)

0xb6d: GOTO 0xb56

0xb6e: PushEmpty(bool)
0xb6f: Call2 0xe73

0xb70: Pop(0)
0xb71: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb72: @ lshWaitForAnimEnd()
0xb73: Pop(0)
0xb74: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb75: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb76: GOTO 0xb7c

0xb77: PushEmpty(string)
0xb78: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb79: Call2 0xe0c

0xb7a: Pop(1)
0xb7b: GOTO 0xb72

0xb7c: GOTO 0xb8b

0xb7d: Push("all") // @poff=16
0xb7e: Push("idle") // @poff=24
0xb7f: @ PlayAnimation(Stack[-2], Stack[-1])
0xb80: Pop(2)
0xb81: @ WaitForAnimEnd()
0xb82: Pop(0)
0xb83: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb84: IF (Stack[-1] == 0) GOTO 0xb86; Pop(1)

0xb85: GOTO 0xb8b

0xb86: Push("all") // @poff=16
0xb87: Push("idle") // @poff=24
0xb88: @ PlayAnimation(Stack[-2], Stack[-1])
0xb89: Pop(2)
0xb8a: GOTO 0xb81

0xb8b: Return(); Pop(0)

0xb8c: PushEmpty()
0xb8d: PushEmpty(bool)
0xb8e: Call2 0xe73

0xb8f: Pop(0)
0xb90: Pop(1); Push((bool) Stack[-1] == 0)
0xb91: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb92: Return(); Pop(0)

0xb93: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb94: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb95: Return(); Pop(0)

0xb96: PushEmpty(string, bool)
0xb97: Stack[-3] = Stack[-2]
0xb98: Push("") // @poff=13
0xb99: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9a: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb9b: Stack[-1] = (bool) 0
0xb9c: GOTO 0xb9e

0xb9d: Stack[-1] = (bool) 1
0xb9e: Call2 0xe13

0xb9f: Pop(2)
0xba0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba1: Return(); Pop(0)

0xba2: PushEmpty()
0xba3: Push((int) 1)
0xba4: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xba5: PushEmpty()
0xba6: Call2 0xe28

0xba7: Pop(0)
0xba8: Push((int) 42554)
0xba9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbaa: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbab: PushEmpty(string)
0xbac: Stack[-1] = "Neutral" // @poff=0
0xbad: Call2 0xb8c

0xbae: Pop(1)
0xbaf: Push((int) 540545)
0xbb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=123
0xbb1: Pop(1)
0xbb2: @@@ ClearReplies(); Obj=0 // @poff=134
0xbb3: Pop(0)
0xbb4: Push((int) 540546)
0xbb5: Push((int) -1)
0xbb6: Push((int) 42555)
0xbb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xbb8: Pop(3)
0xbb9: Push((int) 540798)
0xbba: Push((int) -1)
0xbbb: Push((int) 42847)
0xbbc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=147
0xbbd: Pop(3)
0xbbe: Return(); Pop(0)

0xbbf: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbc0: PushEmpty(bool)
0xbc1: Call2 0xe73

0xbc2: Pop(0)
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc7; Pop(1)

0xbc4: @ lshStopAnimation()
0xbc5: Pop(0)
0xbc6: GOTO 0xbc9

0xbc7: @ StopAnimation()
0xbc8: Pop(0)
0xbc9: Return(); Pop(0)

0xbca: GOTO 0xba3

0xbcb: Return(); Pop(0)

0xbcc: PushEmpty()
0xbcd: Call2 0xbd0

0xbce: Pop(0)
0xbcf: Return(); Pop(0)

0xbd0: PushEmpty(bool)
0xbd1: Call2 0xced

0xbd2: Pop(0)
0xbd3: Pop(1); Push((bool) Stack[-1] == 0)
0xbd4: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd5: PushEmpty()
0xbd6: Push(-0, 0); TaskCall(0)
0xbd7: Call2 0x0

0xbd8: Pop(-0, 0); TaskReturn
0xbd9: Pop(0)
0xbda: PushEmpty()
0xbdb: Call2 0xc50

0xbdc: Pop(0)
0xbdd: @ GetDirection(Stack[-0]T)
0xbde: Pop(0)
0xbdf: PushEmpty()
0xbe0: Call2 0xc86

0xbe1: Pop(0)
0xbe2: GOTO 0xbdf

0xbe3: Return(); Pop(0)

0xbe4: PushEmpty(object, object)
0xbe5: Push("player") // @poff=156
0xbe6: @ FindActor(Stack[-2], Stack[-1])
0xbe7: Pop(1)
0xbe8: Pop(0); Push((bool) Stack[-1] == 0)
0xbe9: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbea: Stack[-3] = (bool) 0
0xbeb: Return(); Pop(2)

0xbec: PushEmpty(bool, object)
0xbed: Stack[-3] = Stack[-1]
0xbee: Call2 0xce4

0xbef: Stack[-2] = Stack[-5]
0xbf0: Pop(2)
0xbf1: Return(); Pop(2)

0xbf2: Stack[-1] = 0
0xbf3: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 0))
0xbf4: Push(CvectorIndex(Stack[0 + Tasks[-1].StackPointer], 2))
0xbf5: @ RotateAsync(Stack[-2], Stack[-1])
0xbf6: Pop(2)
0xbf7: Return(); Pop(0)

0xbf8: PushEmpty(object, bool, object, bool)
0xbf9: Push("player") // @poff=156
0xbfa: @ FindActor(Stack[-3], Stack[-1])
0xbfb: Pop(1)
0xbfc: Pop(0); Push((bool) Stack[-2] == 0)
0xbfd: IF (Stack[-1] == 0) GOTO 0xc00; Pop(1)

0xbfe: Stack[-5] = (bool) 0
0xbff: Return(); Pop(4)

0xc00: PushEmpty(float, object)
0xc01: Stack[-4] = Stack[-1]
0xc02: Call2 0xcd2

0xc03: Pop(1)
0xc04: Push((float)90000.0)
0xc05: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xc06: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc07: Stack[-5] = (bool) 0
0xc08: Return(); Pop(4)

0xc09: @ CanSee(Stack[-1], Stack[-2])
0xc0a: Pop(0)
0xc0b: Stack[-1] = Stack[-5]
0xc0c: Return(); Pop(4)

0xc0d: Stack[-2] = 0
0xc0e: PushEmpty(float, float)
0xc0f: Push((int) 8)
0xc10: Push((int) 16)
0xc11: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(2)
0xc13: Push((int) 10)
0xc14: @ SetTimer(Stack[-1], Stack[-2])
0xc15: Pop(1)
0xc16: Return(); Pop(2)

0xc17: Push((int) 10)
0xc18: @ KillTimer(Stack[-1])
0xc19: Pop(1)
0xc1a: Return(); Pop(0)

0xc1b: PushEmpty()
0xc1c: Push((int) 10)
0xc1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc1e: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc1f: PushEmpty()
0xc20: Call2 0xc17

0xc21: Pop(0)
0xc22: PushEmpty(bool)
0xc23: Stack[-1] = (bool) 0
0xc24: PushEmpty(bool)
0xc25: Call2 0xced

0xc26: Pop(0)
0xc27: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc28: PushEmpty(bool)
0xc29: Call2 0xbf8

0xc2a: Pop(0)
0xc2b: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc2c: Stack[-1] = (bool) 1
0xc2d: IF (Stack[-1] == 0) GOTO 0xc3a; Pop(1)

0xc2e: PushEmpty(bool)
0xc2f: Call2 0xbe4

0xc30: Pop(0)
0xc31: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc32: PushEmpty(bool, object)
0xc33: PushEmpty(object)
0xc34: Call2 0xe2f

0xc35: Stack[-1] = Stack[-2]
0xc36: Pop(1)
0xc37: Call2 0xd81

0xc38: Pop(2)
0xc39: GOTO 0xc40

0xc3a: PushEmpty()
0xc3b: Call2 0xbf3

0xc3c: Pop(0)
0xc3d: PushEmpty()
0xc3e: Call2 0xc0e

0xc3f: Pop(0)
0xc40: Return(); Pop(0)

0xc41: PushEmpty()
0xc42: Call2 0xccd

0xc43: Pop(0)
0xc44: PushEmpty()
0xc45: Call2 0xc17

0xc46: Pop(0)
0xc47: @ lshStopSpeech()
0xc48: Pop(0)
0xc49: @ lshStopAnimation()
0xc4a: Pop(0)
0xc4b: @ StopAsync()
0xc4c: Pop(0)
0xc4d: @ Hold()
0xc4e: Pop(0)
0xc4f: Return(); Pop(0)

0xc50: @ StopGroup0()
0xc51: Pop(0)
0xc52: PushEmpty()
0xc53: Call2 0xc17

0xc54: Pop(0)
0xc55: PushEmpty(string)
0xc56: Stack[-1] = "Neutral" // @poff=0
0xc57: Call2 0xe0c

0xc58: Pop(1)
0xc59: PushEmpty()
0xc5a: Call2 0xc0e

0xc5b: Pop(0)
0xc5c: Return(); Pop(0)

0xc5d: PushEmpty()
0xc5e: Push(Stack[-1])
0xc5f: IF (Stack[-1] == 0) GOTO 0xc64; Pop(1)

0xc60: PushEmpty()
0xc61: Call2 0xc0e

0xc62: Pop(0)
0xc63: GOTO 0xc68

0xc64: PushEmpty(string)
0xc65: Stack[-1] = "Neutral" // @poff=0
0xc66: Call2 0xe0c

0xc67: Pop(1)
0xc68: Return(); Pop(0)

0xc69: PushEmpty(bool, bool)
0xc6a: @ IsOverrideActive(Stack[-1])
0xc6b: Pop(0)
0xc6c: Pop(0); Push((bool) Stack[-1] == 0)
0xc6d: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc6e: EventDisable(0)
0xc6f: PushEmpty()
0xc70: Call2 0xccd

0xc71: Pop(0)
0xc72: PushEmpty(bool, object)
0xc73: Stack[-5] = Stack[-1]
0xc74: Call2 0xce4

0xc75: Pop(2)
0xc76: EventEnable(0)
0xc77: PushEmpty(object)
0xc78: Stack[-4] = Stack[-1]
0xc79: Call2 0xf24

0xc7a: Pop(1)
0xc7b: PushEmpty(string)
0xc7c: Stack[-1] = "Neutral" // @poff=0
0xc7d: Call2 0xe0c

0xc7e: Pop(1)
0xc7f: PushEmpty()
0xc80: Call2 0xc17

0xc81: Pop(0)
0xc82: PushEmpty()
0xc83: Call2 0xc0e

0xc84: Pop(0)
0xc85: Return(); Pop(2)

0xc86: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xc87: @ WaitForAnimEnd()
0xc88: Pop(0)
0xc89: PushEmpty(bool)
0xc8a: Call2 0xced

0xc8b: Pop(0)
0xc8c: Pop(1); Push((bool) Stack[-1] == 0)
0xc8d: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc8e: Return(); Pop(12)

0xc8f: PushEmpty(int)
0xc90: Call2 0xe5a

0xc91: Stack[-1] = Stack[-7]
0xc92: Pop(1)
0xc93: Stack[-5] = (int) 0
0xc94: PushEmpty(bool)
0xc95: Stack[-1] = (bool) 0
0xc96: Push((int) 5)
0xc97: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xc98: IF (Stack[-1] == 0) GOTO 0xc9e; Pop(1)

0xc99: PushEmpty(bool)
0xc9a: Call2 0xced

0xc9b: Pop(0)
0xc9c: IF (Stack[-1] == 0) GOTO 0xc9e; Pop(1)

0xc9d: Stack[-1] = (bool) 1
0xc9e: IF (Stack[-1] == 0) GOTO 0xcc8; Pop(1)

0xc9f: Pop(0); Push((bool) Stack[-6] == 0)
0xca0: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xca1: Push((int) 3)
0xca2: @ Sleep(Stack[-1], Stack[-5])
0xca3: Pop(1)
0xca4: Pop(0); Push((bool) Stack[-4] == 0)
0xca5: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca6: GOTO 0xcc8

0xca7: GOTO 0xcbd

0xca8: @ irand(Stack[-3], Stack[-6])
0xca9: Pop(0)
0xcaa: Push((int) 5)
0xcab: @ irand(Stack[-3], Stack[-1])
0xcac: Pop(1)
0xcad: Push((int) 0)
0xcae: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xcaf: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xcb0: Stack[-3] = (int) 0
0xcb1: Push("all") // @poff=16
0xcb2: PushEmpty(string, int)
0xcb3: Stack[-6] = Stack[-1]
0xcb4: Call2 0xe53

0xcb5: Pop(1)
0xcb6: @ PlayAnimation(Stack[-2], Stack[-1])
0xcb7: Pop(2)
0xcb8: @ WaitForAnimEnd(Stack[-1])
0xcb9: Pop(0)
0xcba: Pop(0); Push((bool) Stack[-1] == 0)
0xcbb: IF (Stack[-1] == 0) GOTO 0xcbd; Pop(1)

0xcbc: GOTO 0xcc8

0xcbd: PushEmpty(bool)
0xcbe: Call2 0xccb

0xcbf: Pop(0)
0xcc0: Pop(1); Push((bool) Stack[-1] == 0)
0xcc1: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcc2: GOTO 0xcc8

0xcc3: @ ResetAAS()
0xcc4: Pop(0)
0xcc5: Push((int) 1)
0xcc6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xcc7: GOTO 0xc94

0xcc8: @ ResetAAS()
0xcc9: Pop(0)
0xcca: Return(); Pop(12)

0xccb: Stack[-1] = (bool) 1
0xccc: Return(); Pop(0)

0xccd: @ StopAnimation()
0xcce: Pop(0)
0xccf: @ StopGroup0()
0xcd0: Pop(0)
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xcd3: @ GetPosition(Stack[-3])
0xcd4: Pop(0)
0xcd5: @@ GetPosition(Stack[-2]); Obj=7 // @poff=170
0xcd6: Pop(0)
0xcd7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xcd8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xcd9: Return(); Pop(6)

0xcda: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xcdb: @ GetPosition(Stack[-3])
0xcdc: Pop(0)
0xcdd: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xcde: Push(CvectorIndex(Stack[-2], 0))
0xcdf: Push(CvectorIndex(Stack[-3], 2))
0xce0: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xce1: Pop(2)
0xce2: Stack[-1] = Stack[-8]
0xce3: Return(); Pop(6)

0xce4: PushEmpty(cvector, cvector)
0xce5: @@ GetPosition(Stack[-1]); Obj=3 // @poff=170
0xce6: Pop(0)
0xce7: PushEmpty(bool, cvector)
0xce8: Stack[-3] = Stack[-1]
0xce9: Call2 0xcda

0xcea: Stack[-2] = Stack[-6]
0xceb: Pop(2)
0xcec: Return(); Pop(2)

0xced: PushEmpty(bool, bool)
0xcee: @ IsLoaded(Stack[-1])
0xcef: Pop(0)
0xcf0: Stack[-1] = Stack[-3]
0xcf1: Return(); Pop(2)

0xcf2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xcf3: @@ GetPosition(Stack[-8]); Obj=20 // @poff=170
0xcf4: Pop(0)
0xcf5: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=182
0xcf6: Pop(0)
0xcf7: Push(CvectorIndex(Stack[-8], 1))
0xcf8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xcf9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xcfa: @ GetPosition(Stack[-7])
0xcfb: Pop(0)
0xcfc: @ GetEyesHeight(Stack[-9])
0xcfd: Pop(0)
0xcfe: Push(CvectorIndex(Stack[-7], 1))
0xcff: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xd00: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xd01: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xd02: Push(CvectorIndex(Stack[-6], 1))
0xd03: Stack[-1] = (int) 0
0xd04: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xd05: Pop(0); Push(Stack[-6] | Stack[-6]);
0xd06: Pop(1); Push(Sqrt(Stack[-1]))
0xd07: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xd08: Stack[-5] = -Stack[-6]; Pop(0);
0xd09: Pop(0); Push(Stack[-6] * Stack[-19]);
0xd0a: PushEmpty(cvector, cvector)
0xd0b: Push([0.0, 1.0, 0.0])
0xd0c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xd0d: Call2 0xe35

0xd0e: Pop(1)
0xd0f: Push((int) 25)
0xd10: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd11: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd12: Push([0.0, 10.0, 0.0])
0xd13: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xd14: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xd15: @ IsOverrideActive(Stack[-2])
0xd16: Pop(0)
0xd17: Push(Stack[-2])
0xd18: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd19: Stack[-21] = (bool) 0
0xd1a: Return(); Pop(18)

0xd1b: @ StopWorld()
0xd1c: Pop(0)
0xd1d: @ CameraTransit(Stack[-3], Stack[-5])
0xd1e: Pop(0)
0xd1f: Push(CvectorIndex(Stack[-4], 0))
0xd20: Push(CvectorIndex(Stack[-5], 2))
0xd21: @ Rotate(Stack[-2], Stack[-1])
0xd22: Pop(2)
0xd23: PushEmpty(bool)
0xd24: Call2 0xe73

0xd25: Pop(0)
0xd26: IF (Stack[-1] == 0) GOTO 0xd28; Pop(1)

0xd27: GOTO 0xd30

0xd28: Push("head") // @poff=196
0xd29: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd2a: Pop(1)
0xd2b: Push(Stack[-1])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd2d: Push("head") // @poff=196
0xd2e: @ LookAsyncCamera(Stack[-1])
0xd2f: Pop(1)
0xd30: @ CameraWaitForPlayFinish()
0xd31: Pop(0)
0xd32: @ ResumeWorld()
0xd33: Pop(0)
0xd34: Stack[-21] = (bool) 1
0xd35: Return(); Pop(18)

0xd36: PushEmpty(bool, bool)
0xd37: @ CameraSwitchToNormal()
0xd38: Pop(0)
0xd39: PushEmpty(bool)
0xd3a: Call2 0xe73

0xd3b: Pop(0)
0xd3c: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd3d: GOTO 0xd46

0xd3e: Push("head") // @poff=196
0xd3f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd40: Pop(1)
0xd41: Push(Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd43: Push("head") // @poff=196
0xd44: @ UnlookAsync(Stack[-1])
0xd45: Pop(1)
0xd46: Return(); Pop(2)

0xd47: PushEmpty(int, int, int, int)
0xd48: Push("voice_common") // @poff=206
0xd49: @ GetVariable(Stack[-1], Stack[-3])
0xd4a: Pop(1)
0xd4b: Push(Stack[-2])
0xd4c: IF (Stack[-1] == 0) GOTO 0xd6d; Pop(1)

0xd4d: PushEmpty(bool, object)
0xd4e: Stack[-7] = Stack[-1]
0xd4f: Call2 0xd81

0xd50: Pop(1)
0xd51: Pop(1); Push((bool) Stack[-1] == 0)
0xd52: IF (Stack[-1] == 0) GOTO 0xd5b; Pop(1)

0xd53: PushEmpty(bool, object)
0xd54: Stack[-7] = Stack[-1]
0xd55: Call2 0xda6

0xd56: Pop(1)
0xd57: Pop(1); Push((bool) Stack[-1] == 0)
0xd58: IF (Stack[-1] == 0) GOTO 0xd5b; Pop(1)

0xd59: Stack[-6] = (bool) 0
0xd5a: Return(); Pop(4)

0xd5b: Push((int) 2)
0xd5c: @ irand(Stack[-2], Stack[-1])
0xd5d: Pop(1)
0xd5e: Push(Stack[-1])
0xd5f: IF (Stack[-1] == 0) GOTO 0xd68; Pop(1)

0xd60: Push("voice_common") // @poff=206
0xd61: Push((int) 1)
0xd62: Pop(1); Push(Stack[-4] + Stack[-1]);
0xd63: Push((int) 3)
0xd64: Pop(2); Push(Stack[-2] % Stack[-1]);
0xd65: @ SetVariable(Stack[-2], Stack[-1])
0xd66: Pop(2)
0xd67: GOTO 0xd6c

0xd68: Push("voice_common") // @poff=206
0xd69: Push((int) 0)
0xd6a: @ SetVariable(Stack[-2], Stack[-1])
0xd6b: Pop(2)
0xd6c: GOTO 0xd7f

0xd6d: PushEmpty(bool, object)
0xd6e: Stack[-7] = Stack[-1]
0xd6f: Call2 0xda6

0xd70: Pop(1)
0xd71: Pop(1); Push((bool) Stack[-1] == 0)
0xd72: IF (Stack[-1] == 0) GOTO 0xd7b; Pop(1)

0xd73: PushEmpty(bool, object)
0xd74: Stack[-7] = Stack[-1]
0xd75: Call2 0xd81

0xd76: Pop(1)
0xd77: Pop(1); Push((bool) Stack[-1] == 0)
0xd78: IF (Stack[-1] == 0) GOTO 0xd7b; Pop(1)

0xd79: Stack[-6] = (bool) 0
0xd7a: Return(); Pop(4)

0xd7b: Push("voice_common") // @poff=206
0xd7c: Push((int) 1)
0xd7d: @ SetVariable(Stack[-2], Stack[-1])
0xd7e: Pop(2)
0xd7f: Stack[-6] = (bool) 1
0xd80: Return(); Pop(4)

0xd81: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xd82: Stack[-5] = "c" // @poff=232
0xd83: Stack[-4] = (int) 0
0xd84: Push((int) 1)
0xd85: IF (Stack[-1] == 0) GOTO 0xd91; Pop(1)

0xd86: Push((int) 1)
0xd87: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd88: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd89: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xd8a: Pop(1)
0xd8b: Pop(0); Push((bool) Stack[-3] == 0)
0xd8c: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd8d: GOTO 0xd91

0xd8e: Push((int) 1)
0xd8f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd90: GOTO 0xd84

0xd91: Pop(0); Push((bool) Stack[-4] == 0)
0xd92: IF (Stack[-1] == 0) GOTO 0xd95; Pop(1)

0xd93: Stack[-12] = (bool) 0
0xd94: Return(); Pop(10)

0xd95: Stack[-2] = (int) 0
0xd96: Push((int) 1)
0xd97: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd98: IF (Stack[-1] == 0) GOTO 0xd9b; Pop(1)

0xd99: @ irand(Stack[-2], Stack[-4])
0xd9a: Pop(0)
0xd9b: Push((int) 1)
0xd9c: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd9d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd9e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xd9f: Pop(1)
0xda0: PushEmpty(bool, string)
0xda1: Stack[-3] = Stack[-1]
0xda2: Call2 0xe19

0xda3: Stack[-2] = Stack[-14]
0xda4: Pop(2)
0xda5: Return(); Pop(10)

0xda6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xda7: Push("d") // @poff=202
0xda8: PushEmpty(int)
0xda9: Call2 0xe44

0xdaa: Pop(0)
0xdab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdac: Push("m") // @poff=260
0xdad: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xdae: Stack[-4] = (int) 0
0xdaf: Push((int) 1)
0xdb0: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xdb1: Push((int) 1)
0xdb2: Pop(1); Push(Stack[-5] + Stack[-1]);
0xdb3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdb4: @@ HasProperty(Stack[-1], Stack[-4]); Obj=12 // @poff=236
0xdb5: Pop(1)
0xdb6: Pop(0); Push((bool) Stack[-3] == 0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdb9; Pop(1)

0xdb8: GOTO 0xdbc

0xdb9: Push((int) 1)
0xdba: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xdbb: GOTO 0xdaf

0xdbc: Pop(0); Push((bool) Stack[-4] == 0)
0xdbd: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdbe: Stack[-12] = (bool) 0
0xdbf: Return(); Pop(10)

0xdc0: Stack[-2] = (int) 0
0xdc1: Push((int) 1)
0xdc2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xdc3: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdc4: @ irand(Stack[-2], Stack[-4])
0xdc5: Pop(0)
0xdc6: Push((int) 1)
0xdc7: Pop(1); Push(Stack[-3] + Stack[-1]);
0xdc8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xdc9: @@ GetProperty(Stack[-1], Stack[-2]); Obj=12 // @poff=248
0xdca: Pop(1)
0xdcb: PushEmpty(bool, string)
0xdcc: Stack[-3] = Stack[-1]
0xdcd: Call2 0xe19

0xdce: Stack[-2] = Stack[-14]
0xdcf: Pop(2)
0xdd0: Return(); Pop(10)

0xdd1: PushEmpty()
0xdd2: PushEmpty(bool, object, float)
0xdd3: Stack[-4] = Stack[-2]
0xdd4: Stack[-1] = (int) 70
0xdd5: Call2 0xdd9

0xdd6: Stack[-3] = Stack[-5]
0xdd7: Pop(3)
0xdd8: Return(); Pop(0)

0xdd9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xdda: @@ GetPosition(Stack[-7]); Obj=18 // @poff=170
0xddb: Pop(0)
0xddc: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=182
0xddd: Pop(0)
0xdde: Push(CvectorIndex(Stack[-7], 1))
0xddf: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xde0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xde1: @ GetPosition(Stack[-6])
0xde2: Pop(0)
0xde3: @ GetEyesHeight(Stack[-8])
0xde4: Pop(0)
0xde5: Push(CvectorIndex(Stack[-6], 1))
0xde6: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xde7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xde8: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xde9: Push(CvectorIndex(Stack[-5], 1))
0xdea: Stack[-1] = (int) 0
0xdeb: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xdec: Pop(0); Push(Stack[-5] | Stack[-5]);
0xded: Pop(1); Push(Sqrt(Stack[-1]))
0xdee: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xdef: Stack[-4] = -Stack[-5]; Pop(0);
0xdf0: Pop(0); Push(Stack[-5] * Stack[-17]);
0xdf1: Push([0.0, 10.0, 0.0])
0xdf2: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xdf3: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xdf4: @ IsOverrideActive(Stack[-1])
0xdf5: Pop(0)
0xdf6: Push(Stack[-1])
0xdf7: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf8: Stack[-19] = (bool) 0
0xdf9: Return(); Pop(16)

0xdfa: @ StopWorld()
0xdfb: Pop(0)
0xdfc: @ CameraTransit(Stack[-2], Stack[-4])
0xdfd: Pop(0)
0xdfe: Push(CvectorIndex(Stack[-3], 0))
0xdff: Push(CvectorIndex(Stack[-4], 2))
0xe00: @ Rotate(Stack[-2], Stack[-1])
0xe01: Pop(2)
0xe02: @ CameraWaitForPlayFinish()
0xe03: Pop(0)
0xe04: @ ResumeWorld()
0xe05: Pop(0)
0xe06: Stack[-19] = (bool) 1
0xe07: Return(); Pop(16)

0xe08: PushEmpty()
0xe09: @ CameraSwitchToNormal()
0xe0a: Pop(0)
0xe0b: Return(); Pop(0)

0xe0c: PushEmpty(float, float, float, float)
0xe0d: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xe0e: Pop(0)
0xe0f: Push((bool) 0)
0xe10: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe11: Pop(1)
0xe12: Return(); Pop(4)

0xe13: PushEmpty(float, float, float, float)
0xe14: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xe15: Pop(0)
0xe16: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xe17: Pop(0)
0xe18: Return(); Pop(4)

0xe19: PushEmpty(bool, bool)
0xe1a: PushEmpty(bool)
0xe1b: Call2 0xe73

0xe1c: Pop(0)
0xe1d: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xe1e: @ lshHasSpeech(Stack[-1], Stack[-3])
0xe1f: Pop(0)
0xe20: Push(Stack[-1])
0xe21: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xe22: @ lshPlaySpeech(Stack[-3])
0xe23: Pop(0)
0xe24: Stack[-4] = (bool) 1
0xe25: Return(); Pop(2)

0xe26: Stack[-4] = (bool) 0
0xe27: Return(); Pop(2)

0xe28: PushEmpty(bool)
0xe29: Call2 0xe73

0xe2a: Pop(0)
0xe2b: IF (Stack[-1] == 0) GOTO 0xe2e; Pop(1)

0xe2c: @ lshStopSpeech()
0xe2d: Pop(0)
0xe2e: Return(); Pop(0)

0xe2f: PushEmpty(object, object)
0xe30: @ self(Stack[-1])
0xe31: Pop(0)
0xe32: Stack[-1] = Stack[-3]
0xe33: Return(); Pop(2)

0xe34: Stack[-1] = 0
0xe35: PushEmpty(float, float)
0xe36: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe37: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe38: Push((float)9.999999974752427e-07)
0xe39: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe3a: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe3b: Stack[-4] = [0.0, 0.0, 0.0]
0xe3c: Return(); Pop(2)

0xe3d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xe3e: Return(); Pop(2)

0xe3f: PushEmpty(int, int)
0xe40: @ GetVariable(Stack[-3], Stack[-1])
0xe41: Pop(0)
0xe42: Stack[-1] = Stack[-4]
0xe43: Return(); Pop(2)

0xe44: PushEmpty(float, float)
0xe45: @ GetGameTime(Stack[-1])
0xe46: Pop(0)
0xe47: Push((int) 1)
0xe48: PushEmpty(int)
0xe49: Push((int) 24)
0xe4a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xe4b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe4c: Return(); Pop(2)

0xe4d: PushEmpty()
0xe4e: PushEmpty(int)
0xe4f: Call2 0xe44

0xe50: Pop(0)
0xe51: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xe52: Return(); Pop(0)

0xe53: PushEmpty(string, string)
0xe54: Stack[-1] = "idle" // @poff=24
0xe55: Push(Stack[-3])
0xe56: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe57: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xe58: Stack[-1] = Stack[-4]
0xe59: Return(); Pop(2)

0xe5a: PushEmpty(int, bool, int, bool)
0xe5b: Stack[-2] = (int) 0
0xe5c: Push("all") // @poff=16
0xe5d: PushEmpty(string, int)
0xe5e: Stack[-5] = Stack[-1]
0xe5f: Call2 0xe53

0xe60: Pop(1)
0xe61: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe62: Pop(2)
0xe63: Pop(0); Push((bool) Stack[-1] == 0)
0xe64: IF (Stack[-1] == 0) GOTO 0xe66; Pop(1)

0xe65: GOTO 0xe69

0xe66: Push((int) 1)
0xe67: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe68: GOTO 0xe5c

0xe69: Stack[-2] = Stack[-5]
0xe6a: Return(); Pop(4)

0xe6b: Stack[-1] = (int) 515529
0xe6c: Return(); Pop(0)

0xe6d: Stack[-1] = (int) 502855
0xe6e: Return(); Pop(0)

0xe6f: Stack[-1] = "ui/NPC_Andrei.png" // @poff=264
0xe70: Return(); Pop(0)

0xe71: Stack[-1] = "ui/NPC_Andrei_b.png" // @poff=300
0xe72: Return(); Pop(0)

0xe73: Stack[-1] = (bool) 1
0xe74: Return(); Pop(0)

0xe75: PushEmpty()
0xe76: Push("k2q04") // @poff=340
0xe77: Push((int) 3)
0xe78: @ SetVariable(Stack[-2], Stack[-1])
0xe79: Pop(2)
0xe7a: PushEmpty()
0xe7b: Call2 0xea4

0xe7c: Pop(0)
0xe7d: Return(); Pop(0)

0xe7e: PushEmpty()
0xe7f: Push("k5q02") // @poff=352
0xe80: Push((int) 5)
0xe81: @ SetVariable(Stack[-2], Stack[-1])
0xe82: Pop(2)
0xe83: PushEmpty()
0xe84: Call2 0xeb1

0xe85: Pop(0)
0xe86: Return(); Pop(0)

0xe87: PushEmpty()
0xe88: Push((int) 1000)
0xe89: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=364
0xe8a: Pop(1)
0xe8b: Return(); Pop(0)

0xe8c: PushEmpty()
0xe8d: PushEmpty(int, string)
0xe8e: Stack[-1] = "k2q04" // @poff=340
0xe8f: Call2 0xe3f

0xe90: Pop(1)
0xe91: Push((int) 2)
0xe92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe93: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe94: Stack[-2] = (bool) 1
0xe95: Return(); Pop(0)

0xe96: Stack[-2] = (bool) 0
0xe97: Return(); Pop(0)

0xe98: PushEmpty()
0xe99: PushEmpty(int, string)
0xe9a: Stack[-1] = "k5q02" // @poff=352
0xe9b: Call2 0xe3f

0xe9c: Pop(1)
0xe9d: Push((int) 4)
0xe9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe9f: IF (Stack[-1] == 0) GOTO 0xea2; Pop(1)

0xea0: Stack[-2] = (bool) 1
0xea1: Return(); Pop(0)

0xea2: Stack[-2] = (bool) 0
0xea3: Return(); Pop(0)

0xea4: PushEmpty(object, object)
0xea5: Push((int) 512)
0xea6: Push((int) 2)
0xea7: Push((int) 529711)
0xea8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea9: Pop(3)
0xeaa: PushEmpty(bool, object, int)
0xeab: Stack[-4] = Stack[-2]
0xeac: Stack[-1] = (int) 507
0xead: Call2 0xecb

0xeae: Pop(3)
0xeaf: Return(); Pop(2)

0xeb0: Stack[-1] = 0
0xeb1: PushEmpty(object, object)
0xeb2: Push((int) 402)
0xeb3: Push((int) 2)
0xeb4: Push((int) 525940)
0xeb5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xeb6: Pop(3)
0xeb7: PushEmpty(bool, object, int)
0xeb8: Stack[-4] = Stack[-2]
0xeb9: Stack[-1] = (int) 397
0xeba: Call2 0xecb

0xebb: Pop(3)
0xebc: Return(); Pop(2)

0xebd: Stack[-1] = 0
0xebe: PushEmpty(object, object)
0xebf: @ GetDiaryRoot(Stack[-1])
0xec0: Pop(0)
0xec1: Pop(0); Push((bool) Stack[-1] == 0)
0xec2: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xec3: Push("Can't retrieve diary root") // @poff=379
0xec4: @ Trace(Stack[-1])
0xec5: Pop(1)
0xec6: Stack[-3] = (bool) 0
0xec7: Return(); Pop(2)

0xec8: Stack[-1] = Stack[-3]
0xec9: Return(); Pop(2)

0xeca: Stack[-1] = 0
0xecb: PushEmpty(object, object, int, object, object, int)
0xecc: PushEmpty(object)
0xecd: Call2 0xebe

0xece: Stack[-1] = Stack[-4]
0xecf: Pop(1)
0xed0: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=431
0xed1: Pop(0)
0xed2: Pop(0); Push((bool) Stack[-2] == 0)
0xed3: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xed4: Push("Can't find diary parent with id: ") // @poff=436
0xed5: Pop(1); Push(Stack[-1] + Stack[-8]);
0xed6: @ Trace(Stack[-1])
0xed7: Pop(1)
0xed8: Stack[-9] = (bool) 0
0xed9: Return(); Pop(6)

0xeda: @@ AddChild(Stack[-8]); Obj=2 // @poff=504
0xedb: Pop(0)
0xedc: Push((int) 7)
0xedd: @ SendWorldWndMessage(Stack[-1])
0xede: Pop(1)
0xedf: @@ GetCategory(Stack[-1]); Obj=8 // @poff=513
0xee0: Pop(0)
0xee1: @ SetDiarySection(Stack[-1])
0xee2: Pop(0)
0xee3: Stack[-9] = (bool) 0
0xee4: Return(); Pop(6)

0xee5: Stack[-2] = 0
0xee6: Stack[-3] = 0
0xee7: PushEmpty(int, bool, int, int, object, int, bool, int, bool, int, int, object, int, bool)
0xee8: Push((int) 0)
0xee9: @ ClearSubContainer(Stack[-1])
0xeea: Pop(1)
0xeeb: Push((int) 8)
0xeec: @ irand(Stack[-6], Stack[-1])
0xeed: Pop(1)
0xeee: Push((int) 2)
0xeef: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xef0: Stack[-4] = (int) 0
0xef1: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0xef2: IF (Stack[-1] == 0) GOTO 0xf12; Pop(1)

0xef3: @ CreateInvItem(Stack[-3])
0xef4: Pop(0)
0xef5: Push("grass_combination") // @poff=525
0xef6: @@ SetItemName(Stack[-1]); Obj=4 // @poff=561
0xef7: Pop(1)
0xef8: Push((int) 50)
0xef9: @ irand(Stack[-3], Stack[-1])
0xefa: Pop(1)
0xefb: Push((int) 30)
0xefc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xefd: Push("im_inc") // @poff=573
0xefe: Push((float)100.0)
0xeff: Pop(1); Push(Stack[-4] / Stack[-1]);
0xf00: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=587
0xf01: Pop(2)
0xf02: Push((int) 40)
0xf03: @ irand(Stack[-3], Stack[-1])
0xf04: Pop(1)
0xf05: Push("hl_inc") // @poff=599
0xf06: Push((float)100.0)
0xf07: Pop(1); Push(Stack[-4] / Stack[-1]);
0xf08: Pop(1); Push(( -Stack[-1])
0xf09: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=587
0xf0a: Pop(2)
0xf0b: Push((int) 0)
0xf0c: @ AddItem(Stack[-2], Stack[-4], Stack[-1])
0xf0d: Pop(1)
0xf0e: Stack[-3] = 0
0xf0f: Push((int) 1)
0xf10: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf11: GOTO 0xef1

0xf12: Return(); Pop(14)

0xf13: PushEmpty(int, int)
0xf14: Push("branch") // @poff=613
0xf15: @ GetVariable(Stack[-1], Stack[-2])
0xf16: Pop(1)
0xf17: Push((int) 0)
0xf18: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf19: IF (Stack[-1] == 0) GOTO 0xf1d; Pop(1)

0xf1a: Stack[-3] = (int) 1
0xf1b: Return(); Pop(2)

0xf1c: GOTO 0xf22

0xf1d: Push((int) 1)
0xf1e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1f: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xf20: Stack[-3] = (int) 2
0xf21: Return(); Pop(2)

0xf22: Stack[-3] = (int) 3
0xf23: Return(); Pop(2)

0xf24: PushEmpty(int, int, int, int)
0xf25: Push("tr_andrei") // @poff=627
0xf26: @ GetVariable(Stack[-1], Stack[-3])
0xf27: Pop(1)
0xf28: PushEmpty(int)
0xf29: Call2 0xe44

0xf2a: Pop(0)
0xf2b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xf2c: IF (Stack[-1] == 0) GOTO 0xf36; Pop(1)

0xf2d: PushEmpty()
0xf2e: Call2 0xee7

0xf2f: Pop(0)
0xf30: Push("tr_andrei") // @poff=627
0xf31: PushEmpty(int)
0xf32: Call2 0xe44

0xf33: Pop(0)
0xf34: @ SetVariable(Stack[-2], Stack[-1])
0xf35: Pop(2)
0xf36: Push("mt_andrei") // @poff=647
0xf37: @ GetVariable(Stack[-1], Stack[-2])
0xf38: Pop(1)
0xf39: Pop(0); Push((bool) Stack[-1] == 0)
0xf3a: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf3b: PushEmpty(int, object)
0xf3c: Stack[-7] = Stack[-1]
0xf3d: Push(-2, 1); TaskCall(4)
0xf3e: Call2 0x16c

0xf3f: Pop(-2, 1); TaskReturn
0xf40: Pop(2)
0xf41: Push("mt_andrei") // @poff=647
0xf42: Push((int) 1)
0xf43: @ SetVariable(Stack[-2], Stack[-1])
0xf44: Pop(2)
0xf45: PushEmpty(bool, int)
0xf46: Stack[-1] = (int) 2
0xf47: Call2 0xe4d

0xf48: Pop(1)
0xf49: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf4a: Push((int) 1000)
0xf4b: PushEmpty(int, object)
0xf4c: Stack[-8] = Stack[-1]
0xf4d: Push(-2, 1); TaskCall(2)
0xf4e: Call2 0x35

0xf4f: Pop(-2, 1); TaskReturn
0xf50: Pop(1)
0xf51: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf52: IF (Stack[-1] == 0) GOTO 0xf64; Pop(1)

0xf53: PushEmpty(bool, object)
0xf54: Stack[-7] = Stack[-1]
0xf55: Call2 0xdd1

0xf56: Pop(1)
0xf57: Pop(1); Push((bool) Stack[-1] == 0)
0xf58: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf59: Return(); Pop(4)

0xf5a: PushEmpty(object)
0xf5b: Stack[-6] = Stack[-1]
0xf5c: Push(-1, 1); TaskCall(1)
0xf5d: Call2 0xd

0xf5e: Pop(-1, 1); TaskReturn
0xf5f: Pop(1)
0xf60: PushEmpty(object)
0xf61: Stack[-6] = Stack[-1]
0xf62: Call2 0xe08

0xf63: Pop(1)
0xf64: Return(); Pop(4)

0xf65: PushEmpty(bool, int)
0xf66: Stack[-1] = (int) 3
0xf67: Call2 0xe4d

0xf68: Pop(1)
0xf69: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf6a: Push((int) 1000)
0xf6b: PushEmpty(int, object)
0xf6c: Stack[-8] = Stack[-1]
0xf6d: Push(-2, 1); TaskCall(8)
0xf6e: Call2 0x439

0xf6f: Pop(-2, 1); TaskReturn
0xf70: Pop(1)
0xf71: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf72: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf73: PushEmpty(bool, object)
0xf74: Stack[-7] = Stack[-1]
0xf75: Call2 0xdd1

0xf76: Pop(1)
0xf77: Pop(1); Push((bool) Stack[-1] == 0)
0xf78: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf79: Return(); Pop(4)

0xf7a: PushEmpty(object)
0xf7b: Stack[-6] = Stack[-1]
0xf7c: Push(-1, 1); TaskCall(1)
0xf7d: Call2 0xd

0xf7e: Pop(-1, 1); TaskReturn
0xf7f: Pop(1)
0xf80: PushEmpty(object)
0xf81: Stack[-6] = Stack[-1]
0xf82: Call2 0xe08

0xf83: Pop(1)
0xf84: Return(); Pop(4)

0xf85: PushEmpty(bool, int)
0xf86: Stack[-1] = (int) 4
0xf87: Call2 0xe4d

0xf88: Pop(1)
0xf89: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xf8a: Push((int) 1000)
0xf8b: PushEmpty(int, object)
0xf8c: Stack[-8] = Stack[-1]
0xf8d: Push(-2, 1); TaskCall(10)
0xf8e: Call2 0x50c

0xf8f: Pop(-2, 1); TaskReturn
0xf90: Pop(1)
0xf91: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf92: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xf93: PushEmpty(bool, object)
0xf94: Stack[-7] = Stack[-1]
0xf95: Call2 0xdd1

0xf96: Pop(1)
0xf97: Pop(1); Push((bool) Stack[-1] == 0)
0xf98: IF (Stack[-1] == 0) GOTO 0xf9a; Pop(1)

0xf99: Return(); Pop(4)

0xf9a: PushEmpty(object)
0xf9b: Stack[-6] = Stack[-1]
0xf9c: Push(-1, 1); TaskCall(1)
0xf9d: Call2 0xd

0xf9e: Pop(-1, 1); TaskReturn
0xf9f: Pop(1)
0xfa0: PushEmpty(object)
0xfa1: Stack[-6] = Stack[-1]
0xfa2: Call2 0xe08

0xfa3: Pop(1)
0xfa4: Return(); Pop(4)

0xfa5: PushEmpty(bool, int)
0xfa6: Stack[-1] = (int) 5
0xfa7: Call2 0xe4d

0xfa8: Pop(1)
0xfa9: IF (Stack[-1] == 0) GOTO 0xfc5; Pop(1)

0xfaa: Push((int) 1000)
0xfab: PushEmpty(int, object)
0xfac: Stack[-8] = Stack[-1]
0xfad: Push(-2, 1); TaskCall(6)
0xfae: Call2 0x24e

0xfaf: Pop(-2, 1); TaskReturn
0xfb0: Pop(1)
0xfb1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfb2: IF (Stack[-1] == 0) GOTO 0xfc4; Pop(1)

0xfb3: PushEmpty(bool, object)
0xfb4: Stack[-7] = Stack[-1]
0xfb5: Call2 0xdd1

0xfb6: Pop(1)
0xfb7: Pop(1); Push((bool) Stack[-1] == 0)
0xfb8: IF (Stack[-1] == 0) GOTO 0xfba; Pop(1)

0xfb9: Return(); Pop(4)

0xfba: PushEmpty(object)
0xfbb: Stack[-6] = Stack[-1]
0xfbc: Push(-1, 1); TaskCall(1)
0xfbd: Call2 0xd

0xfbe: Pop(-1, 1); TaskReturn
0xfbf: Pop(1)
0xfc0: PushEmpty(object)
0xfc1: Stack[-6] = Stack[-1]
0xfc2: Call2 0xe08

0xfc3: Pop(1)
0xfc4: Return(); Pop(4)

0xfc5: PushEmpty(bool, int)
0xfc6: Stack[-1] = (int) 6
0xfc7: Call2 0xe4d

0xfc8: Pop(1)
0xfc9: IF (Stack[-1] == 0) GOTO 0xfe5; Pop(1)

0xfca: Push((int) 1000)
0xfcb: PushEmpty(int, object)
0xfcc: Stack[-8] = Stack[-1]
0xfcd: Push(-2, 1); TaskCall(12)
0xfce: Call2 0x5df

0xfcf: Pop(-2, 1); TaskReturn
0xfd0: Pop(1)
0xfd1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfd2: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfd3: PushEmpty(bool, object)
0xfd4: Stack[-7] = Stack[-1]
0xfd5: Call2 0xdd1

0xfd6: Pop(1)
0xfd7: Pop(1); Push((bool) Stack[-1] == 0)
0xfd8: IF (Stack[-1] == 0) GOTO 0xfda; Pop(1)

0xfd9: Return(); Pop(4)

0xfda: PushEmpty(object)
0xfdb: Stack[-6] = Stack[-1]
0xfdc: Push(-1, 1); TaskCall(1)
0xfdd: Call2 0xd

0xfde: Pop(-1, 1); TaskReturn
0xfdf: Pop(1)
0xfe0: PushEmpty(object)
0xfe1: Stack[-6] = Stack[-1]
0xfe2: Call2 0xe08

0xfe3: Pop(1)
0xfe4: Return(); Pop(4)

0xfe5: PushEmpty(bool, int)
0xfe6: Stack[-1] = (int) 7
0xfe7: Call2 0xe4d

0xfe8: Pop(1)
0xfe9: IF (Stack[-1] == 0) GOTO 0x1005; Pop(1)

0xfea: Push((int) 1000)
0xfeb: PushEmpty(int, object)
0xfec: Stack[-8] = Stack[-1]
0xfed: Push(-2, 1); TaskCall(14)
0xfee: Call2 0x6b2

0xfef: Pop(-2, 1); TaskReturn
0xff0: Pop(1)
0xff1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xff2: IF (Stack[-1] == 0) GOTO 0x1004; Pop(1)

0xff3: PushEmpty(bool, object)
0xff4: Stack[-7] = Stack[-1]
0xff5: Call2 0xdd1

0xff6: Pop(1)
0xff7: Pop(1); Push((bool) Stack[-1] == 0)
0xff8: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xff9: Return(); Pop(4)

0xffa: PushEmpty(object)
0xffb: Stack[-6] = Stack[-1]
0xffc: Push(-1, 1); TaskCall(1)
0xffd: Call2 0xd

0xffe: Pop(-1, 1); TaskReturn
0xfff: Pop(1)
0x1000: PushEmpty(object)
0x1001: Stack[-6] = Stack[-1]
0x1002: Call2 0xe08

0x1003: Pop(1)
0x1004: Return(); Pop(4)

0x1005: PushEmpty(bool, int)
0x1006: Stack[-1] = (int) 8
0x1007: Call2 0xe4d

0x1008: Pop(1)
0x1009: IF (Stack[-1] == 0) GOTO 0x1025; Pop(1)

0x100a: Push((int) 1000)
0x100b: PushEmpty(int, object)
0x100c: Stack[-8] = Stack[-1]
0x100d: Push(-2, 1); TaskCall(16)
0x100e: Call2 0x785

0x100f: Pop(-2, 1); TaskReturn
0x1010: Pop(1)
0x1011: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1012: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1013: PushEmpty(bool, object)
0x1014: Stack[-7] = Stack[-1]
0x1015: Call2 0xdd1

0x1016: Pop(1)
0x1017: Pop(1); Push((bool) Stack[-1] == 0)
0x1018: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1019: Return(); Pop(4)

0x101a: PushEmpty(object)
0x101b: Stack[-6] = Stack[-1]
0x101c: Push(-1, 1); TaskCall(1)
0x101d: Call2 0xd

0x101e: Pop(-1, 1); TaskReturn
0x101f: Pop(1)
0x1020: PushEmpty(object)
0x1021: Stack[-6] = Stack[-1]
0x1022: Call2 0xe08

0x1023: Pop(1)
0x1024: Return(); Pop(4)

0x1025: PushEmpty(bool, int)
0x1026: Stack[-1] = (int) 9
0x1027: Call2 0xe4d

0x1028: Pop(1)
0x1029: IF (Stack[-1] == 0) GOTO 0x1045; Pop(1)

0x102a: Push((int) 1000)
0x102b: PushEmpty(int, object)
0x102c: Stack[-8] = Stack[-1]
0x102d: Push(-2, 1); TaskCall(18)
0x102e: Call2 0x858

0x102f: Pop(-2, 1); TaskReturn
0x1030: Pop(1)
0x1031: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1032: IF (Stack[-1] == 0) GOTO 0x1044; Pop(1)

0x1033: PushEmpty(bool, object)
0x1034: Stack[-7] = Stack[-1]
0x1035: Call2 0xdd1

0x1036: Pop(1)
0x1037: Pop(1); Push((bool) Stack[-1] == 0)
0x1038: IF (Stack[-1] == 0) GOTO 0x103a; Pop(1)

0x1039: Return(); Pop(4)

0x103a: PushEmpty(object)
0x103b: Stack[-6] = Stack[-1]
0x103c: Push(-1, 1); TaskCall(1)
0x103d: Call2 0xd

0x103e: Pop(-1, 1); TaskReturn
0x103f: Pop(1)
0x1040: PushEmpty(object)
0x1041: Stack[-6] = Stack[-1]
0x1042: Call2 0xe08

0x1043: Pop(1)
0x1044: Return(); Pop(4)

0x1045: PushEmpty(bool, int)
0x1046: Stack[-1] = (int) 10
0x1047: Call2 0xe4d

0x1048: Pop(1)
0x1049: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x104a: Push((int) 1000)
0x104b: PushEmpty(int, object)
0x104c: Stack[-8] = Stack[-1]
0x104d: Push(-2, 1); TaskCall(20)
0x104e: Call2 0x92b

0x104f: Pop(-2, 1); TaskReturn
0x1050: Pop(1)
0x1051: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1052: IF (Stack[-1] == 0) GOTO 0x1064; Pop(1)

0x1053: PushEmpty(bool, object)
0x1054: Stack[-7] = Stack[-1]
0x1055: Call2 0xdd1

0x1056: Pop(1)
0x1057: Pop(1); Push((bool) Stack[-1] == 0)
0x1058: IF (Stack[-1] == 0) GOTO 0x105a; Pop(1)

0x1059: Return(); Pop(4)

0x105a: PushEmpty(object)
0x105b: Stack[-6] = Stack[-1]
0x105c: Push(-1, 1); TaskCall(1)
0x105d: Call2 0xd

0x105e: Pop(-1, 1); TaskReturn
0x105f: Pop(1)
0x1060: PushEmpty(object)
0x1061: Stack[-6] = Stack[-1]
0x1062: Call2 0xe08

0x1063: Pop(1)
0x1064: Return(); Pop(4)

0x1065: PushEmpty(bool, int)
0x1066: Stack[-1] = (int) 12
0x1067: Call2 0xe4d

0x1068: Pop(1)
0x1069: IF (Stack[-1] == 0) GOTO 0x1071; Pop(1)

0x106a: PushEmpty(int, object)
0x106b: Stack[-7] = Stack[-1]
0x106c: Push(-2, 1); TaskCall(22)
0x106d: Call2 0x9fe

0x106e: Pop(-2, 1); TaskReturn
0x106f: Pop(2)
0x1070: Return(); Pop(4)

0x1071: PushEmpty(int, object)
0x1072: Stack[-7] = Stack[-1]
0x1073: Push(-2, 1); TaskCall(24)
0x1074: Call2 0xb01

0x1075: Pop(-2, 1); TaskReturn
0x1076: Pop(2)
0x1077: Return(); Pop(4)

