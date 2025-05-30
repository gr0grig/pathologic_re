GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Autizm
	Drunk
	Untrust
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Petr.png
	ui/NPC_Petr_b.png
	k5q02
	k5q02PetrGotoAndrei
	pt_map_andrei
	AddMark
	quest_k5_02
	init_kabak
	tvirin 5 is given
	tvirin
	ook11Petr1
	playsound
	giveitem
	tvirin is given
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x6a0
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x444 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x578 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x676 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x6ec Vars = (int)
		EVENT_6 Op = 0x712 Vars = ()
		EVENT_5 Op = 0x721 Vars = ()
		EVENT_45 Op = 0x72e Vars = (bool)
		EVENT_0 Op = 0x73a Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x7c3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x952

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x950

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x954

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x956

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xa4a

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x8d7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x818

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x807

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 525522)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525523)
0x61: Push((int) 30733)
0x62: Push((int) 26879)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 529279)
0x66: Push((int) 30734)
0x67: Push((int) 30732)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x958

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x8a2

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x958

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x8b2

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x8d0

0xa6: Pop(0)
0xa7: Push((int) 26878)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525522)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525523)
0xb4: Push((int) 30733)
0xb5: Push((int) 26879)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 529279)
0xb9: Push((int) 30734)
0xba: Push((int) 30732)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 30734)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 529281)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 529283)
0xcb: Push((int) -1)
0xcc: Push((int) 30736)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 30733)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Neutral"
0xd5: Call2 0x8b

0xd6: Pop(1)
0xd7: Push((int) 529280)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 529282)
0xdd: Push((int) -1)
0xde: Push((int) 30735)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe3: PushEmpty(bool)
0xe4: Call2 0x958

0xe5: Pop(0)
0xe6: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe7: @ lshStopAnimation()
0xe8: Pop(0)
0xe9: GOTO 0xec

0xea: @ StopAnimation()
0xeb: Pop(0)
0xec: Return(); Pop(0)

0xed: GOTO 0xa2

0xee: Return(); Pop(0)

0xef: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf1: PushEmpty(bool, object, float)
0xf2: Stack[-2] = Stack[-12]
0xf3: Stack[-1] = (float) 70.0
0xf4: Call2 0x7c3

0xf5: Pop(2)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-10] = (int) -2
0xf9: Return(); Pop(8)

0xfa: @ CreateDialog(Stack[-4])
0xfb: Pop(0)
0xfc: PushEmpty(int)
0xfd: Call2 0x952

0xfe: Pop(0)
0xff: @@ SetNPCName(Stack[-1])
0x100: Pop(1)
0x101: PushEmpty(int)
0x102: Call2 0x950

0x103: Pop(0)
0x104: @@ SetNPCDescription(Stack[-1])
0x105: Pop(1)
0x106: PushEmpty(string)
0x107: Call2 0x954

0x108: Pop(0)
0x109: @@ SetPhoto(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(string)
0x10c: Call2 0x956

0x10d: Pop(0)
0x10e: @@ SetPhoto2(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(int)
0x111: Call2 0xa4a

0x112: Pop(0)
0x113: @@ SetPlayerName(Stack[-1])
0x114: Pop(1)
0x115: Stack[-2] = (int) -1
0x116: @ IsOverrideActive(Stack[-3])
0x117: Pop(0)
0x118: Push(Stack[-3])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-10] = (int) -2
0x11b: Return(); Pop(8)

0x11c: @ DoDialog(Stack[-4])
0x11d: Pop(0)
0x11e: PushEmpty(bool, object)
0x11f: PushEmpty(object)
0x120: Call2 0x8d7

0x121: Stack[-2] = Stack[-1]
0x122: Pop(1)
0x123: Call2 0x818

0x124: Pop(2)
0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[-11]
0x127: Stack[-1] = Stack[-6]
0x128: Push(-2, 4); TaskCall(3)
0x129: Call2 0x140

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @@ IsDialogEnd(Stack[-1])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-1] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x130: @ sync()
0x131: Pop(0)
0x132: @@ IsDialogEnd(Stack[-1])
0x133: Pop(0)
0x134: GOTO 0x12e

0x135: PushEmpty(object)
0x136: Stack[-1] = Stack[-10]
0x137: Call2 0x807

0x138: Pop(1)
0x139: @ StopDialog(Stack[-4])
0x13a: Pop(0)
0x13b: @@ GetReturnValue(Stack[-2])
0x13c: Pop(0)
0x13d: Stack[-10] = Stack[-2]
0x13e: Return(); Pop(8)

0x13f: Stack[-4] = 0
0x140: PushEmpty()
0x141: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x142: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x143: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x144: Push((int) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call2 0x18e

0x149: Pop(1)
0x14a: Push((int) 525900)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x9b1

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: Push((int) 525901)
0x155: Push((int) 42962)
0x156: Push((int) 27193)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x9bd

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15e: Push((int) 525924)
0x15f: Push((int) 30559)
0x160: Push((int) 27216)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Push((int) 525904)
0x164: Push((int) -1)
0x165: Push((int) 27196)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 529107)
0x169: Push((int) -1)
0x16a: Push((int) 30552)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x144

0x170: PushEmpty(bool)
0x171: Call2 0x958

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x8a2

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all")
0x180: Push("idle")
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all")
0x189: Push("idle")
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x958

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-2] = Stack[-3]
0x19a: Push("")
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x8b2

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x8d0

0x1a9: Pop(0)
0x1aa: Push((int) 27195)
0x1ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ad: PushEmpty(object, object)
0x1ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b0: Call2 0x95a

0x1b1: Pop(2)
0x1b2: PushEmpty(object, object)
0x1b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b5: Call2 0x9a1

0x1b6: Pop(2)
0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x996

0x1bb: Pop(2)
0x1bc: Push((int) 42977)
0x1bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1bf: PushEmpty(object, object)
0x1c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call2 0x95a

0x1c3: Pop(2)
0x1c4: PushEmpty(object, object)
0x1c5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c7: Call2 0x996

0x1c8: Pop(2)
0x1c9: Push((int) 27221)
0x1ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Call2 0x976

0x1d0: Pop(2)
0x1d1: Push((int) 42988)
0x1d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d4: PushEmpty(object, object)
0x1d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d7: Call2 0x976

0x1d8: Pop(2)
0x1d9: Push((int) 42994)
0x1da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(object, object)
0x1dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1df: Call2 0x976

0x1e0: Pop(2)
0x1e1: Push((int) 27223)
0x1e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e4: PushEmpty(object, object)
0x1e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e7: Call2 0x976

0x1e8: Pop(2)
0x1e9: PushEmpty(object, object)
0x1ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ec: Call2 0x990

0x1ed: Pop(2)
0x1ee: PushEmpty(object, object)
0x1ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f1: Call2 0x97f

0x1f2: Pop(2)
0x1f3: Push((int) 27192)
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Neutral"
0x1f8: Call2 0x18e

0x1f9: Pop(1)
0x1fa: Push((int) 525900)
0x1fb: @@ SetMessage(Stack[-1])
0x1fc: Pop(1)
0x1fd: @@ ClearReplies()
0x1fe: Pop(0)
0x1ff: PushEmpty(bool, object)
0x200: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x201: Call2 0x9b1

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: Push((int) 525901)
0x205: Push((int) 42962)
0x206: Push((int) 27193)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: PushEmpty(bool, object)
0x20a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20b: Call2 0x9bd

0x20c: Pop(1)
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: Push((int) 525924)
0x20f: Push((int) 30559)
0x210: Push((int) 27216)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 525904)
0x214: Push((int) -1)
0x215: Push((int) 27196)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 529107)
0x219: Push((int) -1)
0x21a: Push((int) 30552)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 30559)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0x18e

0x224: Pop(1)
0x225: Push((int) 529114)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 529115)
0x22b: Push((int) 27217)
0x22c: Push((int) 30560)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Push((int) 27217)
0x231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x233: PushEmpty(string)
0x234: Stack[-1] = "Autizm"
0x235: Call2 0x18e

0x236: Pop(1)
0x237: Push((int) 525925)
0x238: @@ SetMessage(Stack[-1])
0x239: Pop(1)
0x23a: @@ ClearReplies()
0x23b: Pop(0)
0x23c: Push((int) 525926)
0x23d: Push((int) 27220)
0x23e: Push((int) 27218)
0x23f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Push((int) 525927)
0x242: Push((int) 27222)
0x243: Push((int) 27219)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Return(); Pop(0)

0x247: Push((int) 27222)
0x248: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24a: PushEmpty(string)
0x24b: Stack[-1] = "Drunk"
0x24c: Call2 0x18e

0x24d: Pop(1)
0x24e: Push((int) 525930)
0x24f: @@ SetMessage(Stack[-1])
0x250: Pop(1)
0x251: @@ ClearReplies()
0x252: Pop(0)
0x253: Push((int) 540904)
0x254: Push((int) 42980)
0x255: Push((int) 42979)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Push((int) 525931)
0x259: Push((int) -1)
0x25a: Push((int) 27223)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Push((int) 42980)
0x25f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x261: PushEmpty(string)
0x262: Stack[-1] = "Drunk"
0x263: Call2 0x18e

0x264: Pop(1)
0x265: Push((int) 540905)
0x266: @@ SetMessage(Stack[-1])
0x267: Pop(1)
0x268: @@ ClearReplies()
0x269: Pop(0)
0x26a: Push((int) 540906)
0x26b: Push((int) 42982)
0x26c: Push((int) 42981)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: Push((int) 540914)
0x270: Push((int) 42982)
0x271: Push((int) 42990)
0x272: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(3)
0x274: Return(); Pop(0)

0x275: Push((int) 42982)
0x276: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x278: PushEmpty(string)
0x279: Stack[-1] = "Neutral"
0x27a: Call2 0x18e

0x27b: Pop(1)
0x27c: Push((int) 540907)
0x27d: @@ SetMessage(Stack[-1])
0x27e: Pop(1)
0x27f: @@ ClearReplies()
0x280: Pop(0)
0x281: Push((int) 540908)
0x282: Push((int) 42984)
0x283: Push((int) 42983)
0x284: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x285: Pop(3)
0x286: Push((int) 540915)
0x287: Push((int) 42987)
0x288: Push((int) 42992)
0x289: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(3)
0x28b: Return(); Pop(0)

0x28c: Push((int) 42984)
0x28d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x28f: PushEmpty(string)
0x290: Stack[-1] = "Neutral"
0x291: Call2 0x18e

0x292: Pop(1)
0x293: Push((int) 540909)
0x294: @@ SetMessage(Stack[-1])
0x295: Pop(1)
0x296: @@ ClearReplies()
0x297: Pop(0)
0x298: Push((int) 540910)
0x299: Push((int) 42987)
0x29a: Push((int) 42985)
0x29b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29c: Pop(3)
0x29d: Push((int) 540911)
0x29e: Push((int) 42987)
0x29f: Push((int) 42986)
0x2a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: Return(); Pop(0)

0x2a3: Push((int) 42987)
0x2a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Autizm"
0x2a8: Call2 0x18e

0x2a9: Pop(1)
0x2aa: Push((int) 540912)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: Push((int) 540913)
0x2b0: Push((int) -1)
0x2b1: Push((int) 42988)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Push((int) 540916)
0x2b5: Push((int) -1)
0x2b6: Push((int) 42994)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: Return(); Pop(0)

0x2ba: Push((int) 27220)
0x2bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2bd: PushEmpty(string)
0x2be: Stack[-1] = "Autizm"
0x2bf: Call2 0x18e

0x2c0: Pop(1)
0x2c1: Push((int) 525928)
0x2c2: @@ SetMessage(Stack[-1])
0x2c3: Pop(1)
0x2c4: @@ ClearReplies()
0x2c5: Pop(0)
0x2c6: Push((int) 529116)
0x2c7: Push((int) 30562)
0x2c8: Push((int) 30561)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Return(); Pop(0)

0x2cc: Push((int) 30562)
0x2cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2cf: PushEmpty(string)
0x2d0: Stack[-1] = "Neutral"
0x2d1: Call2 0x18e

0x2d2: Pop(1)
0x2d3: Push((int) 529117)
0x2d4: @@ SetMessage(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ ClearReplies()
0x2d7: Pop(0)
0x2d8: Push((int) 525929)
0x2d9: Push((int) -1)
0x2da: Push((int) 27221)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Return(); Pop(0)

0x2de: Push((int) 42962)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call2 0x18e

0x2e4: Pop(1)
0x2e5: Push((int) 540891)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 540892)
0x2eb: Push((int) 30553)
0x2ec: Push((int) 42963)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Return(); Pop(0)

0x2f0: Push((int) 30553)
0x2f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f3: PushEmpty(string)
0x2f4: Stack[-1] = "Neutral"
0x2f5: Call2 0x18e

0x2f6: Pop(1)
0x2f7: Push((int) 529108)
0x2f8: @@ SetMessage(Stack[-1])
0x2f9: Pop(1)
0x2fa: @@ ClearReplies()
0x2fb: Pop(0)
0x2fc: Push((int) 529109)
0x2fd: Push((int) 30555)
0x2fe: Push((int) 30554)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Push((int) 540893)
0x302: Push((int) 42965)
0x303: Push((int) 42964)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Return(); Pop(0)

0x307: Push((int) 42965)
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Untrust"
0x30c: Call2 0x18e

0x30d: Pop(1)
0x30e: Push((int) 540894)
0x30f: @@ SetMessage(Stack[-1])
0x310: Pop(1)
0x311: @@ ClearReplies()
0x312: Pop(0)
0x313: Push((int) 540895)
0x314: Push((int) 27194)
0x315: Push((int) 42966)
0x316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(3)
0x318: Push((int) 540900)
0x319: Push((int) 27194)
0x31a: Push((int) 42973)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: Push((int) 30555)
0x31f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Neutral"
0x323: Call2 0x18e

0x324: Pop(1)
0x325: Push((int) 529110)
0x326: @@ SetMessage(Stack[-1])
0x327: Pop(1)
0x328: @@ ClearReplies()
0x329: Pop(0)
0x32a: Push((int) 529111)
0x32b: Push((int) 30557)
0x32c: Push((int) 30556)
0x32d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32e: Pop(3)
0x32f: Push((int) 540899)
0x330: Push((int) 42965)
0x331: Push((int) 42971)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Return(); Pop(0)

0x335: Push((int) 30557)
0x336: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x338: PushEmpty(string)
0x339: Stack[-1] = "Untrust"
0x33a: Call2 0x18e

0x33b: Pop(1)
0x33c: Push((int) 529112)
0x33d: @@ SetMessage(Stack[-1])
0x33e: Pop(1)
0x33f: @@ ClearReplies()
0x340: Pop(0)
0x341: Push((int) 529113)
0x342: Push((int) 27194)
0x343: Push((int) 30558)
0x344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x345: Pop(3)
0x346: Push((int) 540898)
0x347: Push((int) 42969)
0x348: Push((int) 42970)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Return(); Pop(0)

0x34c: Push((int) 27194)
0x34d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x34f: PushEmpty(string)
0x350: Stack[-1] = "Drunk"
0x351: Call2 0x18e

0x352: Pop(1)
0x353: Push((int) 525902)
0x354: @@ SetMessage(Stack[-1])
0x355: Pop(1)
0x356: @@ ClearReplies()
0x357: Pop(0)
0x358: Push((int) 540896)
0x359: Push((int) 42969)
0x35a: Push((int) 42968)
0x35b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(3)
0x35d: Push((int) 541554)
0x35e: Push((int) 42969)
0x35f: Push((int) 43721)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 42969)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x18e

0x369: Pop(1)
0x36a: Push((int) 540897)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: Push((int) 525903)
0x370: Push((int) -1)
0x371: Push((int) 27195)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Push((int) 540901)
0x375: Push((int) 42976)
0x376: Push((int) 42975)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 42976)
0x37b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x37d: PushEmpty(string)
0x37e: Stack[-1] = "Untrust"
0x37f: Call2 0x18e

0x380: Pop(1)
0x381: Push((int) 540902)
0x382: @@ SetMessage(Stack[-1])
0x383: Pop(1)
0x384: @@ ClearReplies()
0x385: Pop(0)
0x386: Push((int) 540903)
0x387: Push((int) -1)
0x388: Push((int) 42977)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x38d: PushEmpty(bool)
0x38e: Call2 0x958

0x38f: Pop(0)
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: @ lshStopAnimation()
0x392: Pop(0)
0x393: GOTO 0x396

0x394: @ StopAnimation()
0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: GOTO 0x1a5

0x398: Return(); Pop(0)

0x399: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x39a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x39b: PushEmpty(bool, object, float)
0x39c: Stack[-2] = Stack[-12]
0x39d: Stack[-1] = (float) 70.0
0x39e: Call2 0x7c3

0x39f: Pop(2)
0x3a0: Pop(1); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-10] = (int) -2
0x3a3: Return(); Pop(8)

0x3a4: @ CreateDialog(Stack[-4])
0x3a5: Pop(0)
0x3a6: PushEmpty(int)
0x3a7: Call2 0x952

0x3a8: Pop(0)
0x3a9: @@ SetNPCName(Stack[-1])
0x3aa: Pop(1)
0x3ab: PushEmpty(int)
0x3ac: Call2 0x950

0x3ad: Pop(0)
0x3ae: @@ SetNPCDescription(Stack[-1])
0x3af: Pop(1)
0x3b0: PushEmpty(string)
0x3b1: Call2 0x954

0x3b2: Pop(0)
0x3b3: @@ SetPhoto(Stack[-1])
0x3b4: Pop(1)
0x3b5: PushEmpty(string)
0x3b6: Call2 0x956

0x3b7: Pop(0)
0x3b8: @@ SetPhoto2(Stack[-1])
0x3b9: Pop(1)
0x3ba: PushEmpty(int)
0x3bb: Call2 0xa4a

0x3bc: Pop(0)
0x3bd: @@ SetPlayerName(Stack[-1])
0x3be: Pop(1)
0x3bf: Stack[-2] = (int) -1
0x3c0: @ IsOverrideActive(Stack[-3])
0x3c1: Pop(0)
0x3c2: Push(Stack[-3])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-10] = (int) -2
0x3c5: Return(); Pop(8)

0x3c6: @ DoDialog(Stack[-4])
0x3c7: Pop(0)
0x3c8: PushEmpty(bool, object)
0x3c9: PushEmpty(object)
0x3ca: Call2 0x8d7

0x3cb: Stack[-2] = Stack[-1]
0x3cc: Pop(1)
0x3cd: Call2 0x818

0x3ce: Pop(2)
0x3cf: PushEmpty(object, object)
0x3d0: Stack[-2] = Stack[-11]
0x3d1: Stack[-1] = Stack[-6]
0x3d2: Push(-2, 4); TaskCall(5)
0x3d3: Call2 0x3ea

0x3d4: Pop(-2, 4); TaskReturn
0x3d5: Pop(2)
0x3d6: @@ IsDialogEnd(Stack[-1])
0x3d7: Pop(0)
0x3d8: Pop(0); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3da: @ sync()
0x3db: Pop(0)
0x3dc: @@ IsDialogEnd(Stack[-1])
0x3dd: Pop(0)
0x3de: GOTO 0x3d8

0x3df: PushEmpty(object)
0x3e0: Stack[-1] = Stack[-10]
0x3e1: Call2 0x807

0x3e2: Pop(1)
0x3e3: @ StopDialog(Stack[-4])
0x3e4: Pop(0)
0x3e5: @@ GetReturnValue(Stack[-2])
0x3e6: Pop(0)
0x3e7: Stack[-10] = Stack[-2]
0x3e8: Return(); Pop(8)

0x3e9: Stack[-4] = 0
0x3ea: PushEmpty()
0x3eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3ec: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3ed: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3ee: Push((int) 1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Neutral"
0x3f2: Call2 0x42e

0x3f3: Pop(1)
0x3f4: Push((int) 528042)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: PushEmpty(bool, object)
0x3fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fb: Call2 0x9c9

0x3fc: Pop(1)
0x3fd: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fe: Push((int) 528043)
0x3ff: Push((int) 29406)
0x400: Push((int) 29405)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Push((int) 528046)
0x404: Push((int) -1)
0x405: Push((int) 29408)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: Push((int) 541057)
0x409: Push((int) -1)
0x40a: Push((int) 43161)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: GOTO 0x410

0x40e: Return(); Pop(0)

0x40f: GOTO 0x3ee

0x410: PushEmpty(bool)
0x411: Call2 0x958

0x412: Pop(0)
0x413: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x414: @ lshWaitForAnimEnd()
0x415: Pop(0)
0x416: Push( Stack[3 + Tasks[-1].StackPointer] )
0x417: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x418: GOTO 0x41e

0x419: PushEmpty(string)
0x41a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x41b: Call2 0x8a2

0x41c: Pop(1)
0x41d: GOTO 0x414

0x41e: GOTO 0x42d

0x41f: Push("all")
0x420: Push("idle")
0x421: @ PlayAnimation(Stack[-2], Stack[-1])
0x422: Pop(2)
0x423: @ WaitForAnimEnd()
0x424: Pop(0)
0x425: Push( Stack[3 + Tasks[-1].StackPointer] )
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: GOTO 0x42d

0x428: Push("all")
0x429: Push("idle")
0x42a: @ PlayAnimation(Stack[-2], Stack[-1])
0x42b: Pop(2)
0x42c: GOTO 0x423

0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: PushEmpty(bool)
0x430: Call2 0x958

0x431: Pop(0)
0x432: Pop(1); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(0)

0x435: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x436: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x437: Return(); Pop(0)

0x438: PushEmpty(string, bool)
0x439: Stack[-2] = Stack[-3]
0x43a: Push("")
0x43b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[-1] = (bool) 0
0x43e: GOTO 0x440

0x43f: Stack[-1] = (bool) 1
0x440: Call2 0x8b2

0x441: Pop(2)
0x442: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: Push((int) 1)
0x446: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x447: PushEmpty()
0x448: Call2 0x8d0

0x449: Pop(0)
0x44a: Push((int) 29405)
0x44b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44d: PushEmpty(object, object)
0x44e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x44f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x450: Call2 0x98a

0x451: Pop(2)
0x452: Push((int) 29404)
0x453: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x455: PushEmpty(string)
0x456: Stack[-1] = "Neutral"
0x457: Call2 0x42e

0x458: Pop(1)
0x459: Push((int) 528042)
0x45a: @@ SetMessage(Stack[-1])
0x45b: Pop(1)
0x45c: @@ ClearReplies()
0x45d: Pop(0)
0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x460: Call2 0x9c9

0x461: Pop(1)
0x462: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x463: Push((int) 528043)
0x464: Push((int) 29406)
0x465: Push((int) 29405)
0x466: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x467: Pop(3)
0x468: Push((int) 528046)
0x469: Push((int) -1)
0x46a: Push((int) 29408)
0x46b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46c: Pop(3)
0x46d: Push((int) 541057)
0x46e: Push((int) -1)
0x46f: Push((int) 43161)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: Return(); Pop(0)

0x473: Push((int) 29406)
0x474: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x476: PushEmpty(string)
0x477: Stack[-1] = "Untrust"
0x478: Call2 0x42e

0x479: Pop(1)
0x47a: Push((int) 528044)
0x47b: @@ SetMessage(Stack[-1])
0x47c: Pop(1)
0x47d: @@ ClearReplies()
0x47e: Pop(0)
0x47f: Push((int) 528045)
0x480: Push((int) 43162)
0x481: Push((int) 29407)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Push((int) 541060)
0x485: Push((int) 43165)
0x486: Push((int) 43164)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: Return(); Pop(0)

0x48a: Push((int) 43165)
0x48b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x48d: PushEmpty(string)
0x48e: Stack[-1] = "Drunk"
0x48f: Call2 0x42e

0x490: Pop(1)
0x491: Push((int) 541061)
0x492: @@ SetMessage(Stack[-1])
0x493: Pop(1)
0x494: @@ ClearReplies()
0x495: Pop(0)
0x496: Push((int) 541062)
0x497: Push((int) 43167)
0x498: Push((int) 43166)
0x499: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(3)
0x49b: Return(); Pop(0)

0x49c: Push((int) 43167)
0x49d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x49f: PushEmpty(string)
0x4a0: Stack[-1] = "Drunk"
0x4a1: Call2 0x42e

0x4a2: Pop(1)
0x4a3: Push((int) 541063)
0x4a4: @@ SetMessage(Stack[-1])
0x4a5: Pop(1)
0x4a6: @@ ClearReplies()
0x4a7: Pop(0)
0x4a8: Push((int) 541064)
0x4a9: Push((int) -1)
0x4aa: Push((int) 43168)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: Push((int) 541065)
0x4ae: Push((int) -1)
0x4af: Push((int) 43169)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: Return(); Pop(0)

0x4b3: Push((int) 43162)
0x4b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4b6: PushEmpty(string)
0x4b7: Stack[-1] = "Neutral"
0x4b8: Call2 0x42e

0x4b9: Pop(1)
0x4ba: Push((int) 541058)
0x4bb: @@ SetMessage(Stack[-1])
0x4bc: Pop(1)
0x4bd: @@ ClearReplies()
0x4be: Pop(0)
0x4bf: Push((int) 541059)
0x4c0: Push((int) 43165)
0x4c1: Push((int) 43163)
0x4c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c3: Pop(3)
0x4c4: Return(); Pop(0)

0x4c5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4c6: PushEmpty(bool)
0x4c7: Call2 0x958

0x4c8: Pop(0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4ca: @ lshStopAnimation()
0x4cb: Pop(0)
0x4cc: GOTO 0x4cf

0x4cd: @ StopAnimation()
0x4ce: Pop(0)
0x4cf: Return(); Pop(0)

0x4d0: GOTO 0x445

0x4d1: Return(); Pop(0)

0x4d2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x4d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4d4: PushEmpty(bool, object, float)
0x4d5: Stack[-2] = Stack[-12]
0x4d6: Stack[-1] = (float) 70.0
0x4d7: Call2 0x7c3

0x4d8: Pop(2)
0x4d9: Pop(1); Push((bool) Stack[-1] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-10] = (int) -2
0x4dc: Return(); Pop(8)

0x4dd: @ CreateDialog(Stack[-4])
0x4de: Pop(0)
0x4df: PushEmpty(int)
0x4e0: Call2 0x952

0x4e1: Pop(0)
0x4e2: @@ SetNPCName(Stack[-1])
0x4e3: Pop(1)
0x4e4: PushEmpty(int)
0x4e5: Call2 0x950

0x4e6: Pop(0)
0x4e7: @@ SetNPCDescription(Stack[-1])
0x4e8: Pop(1)
0x4e9: PushEmpty(string)
0x4ea: Call2 0x954

0x4eb: Pop(0)
0x4ec: @@ SetPhoto(Stack[-1])
0x4ed: Pop(1)
0x4ee: PushEmpty(string)
0x4ef: Call2 0x956

0x4f0: Pop(0)
0x4f1: @@ SetPhoto2(Stack[-1])
0x4f2: Pop(1)
0x4f3: PushEmpty(int)
0x4f4: Call2 0xa4a

0x4f5: Pop(0)
0x4f6: @@ SetPlayerName(Stack[-1])
0x4f7: Pop(1)
0x4f8: Stack[-2] = (int) -1
0x4f9: @ IsOverrideActive(Stack[-3])
0x4fa: Pop(0)
0x4fb: Push(Stack[-3])
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-10] = (int) -2
0x4fe: Return(); Pop(8)

0x4ff: @ DoDialog(Stack[-4])
0x500: Pop(0)
0x501: PushEmpty(bool, object)
0x502: PushEmpty(object)
0x503: Call2 0x8d7

0x504: Stack[-2] = Stack[-1]
0x505: Pop(1)
0x506: Call2 0x818

0x507: Pop(2)
0x508: PushEmpty(object, object)
0x509: Stack[-2] = Stack[-11]
0x50a: Stack[-1] = Stack[-6]
0x50b: Push(-2, 4); TaskCall(7)
0x50c: Call2 0x523

0x50d: Pop(-2, 4); TaskReturn
0x50e: Pop(2)
0x50f: @@ IsDialogEnd(Stack[-1])
0x510: Pop(0)
0x511: Pop(0); Push((bool) Stack[-1] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x513: @ sync()
0x514: Pop(0)
0x515: @@ IsDialogEnd(Stack[-1])
0x516: Pop(0)
0x517: GOTO 0x511

0x518: PushEmpty(object)
0x519: Stack[-1] = Stack[-10]
0x51a: Call2 0x807

0x51b: Pop(1)
0x51c: @ StopDialog(Stack[-4])
0x51d: Pop(0)
0x51e: @@ GetReturnValue(Stack[-2])
0x51f: Pop(0)
0x520: Stack[-10] = Stack[-2]
0x521: Return(); Pop(8)

0x522: Stack[-4] = 0
0x523: PushEmpty()
0x524: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x525: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x526: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x527: Push((int) 1)
0x528: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x529: PushEmpty(string)
0x52a: Stack[-1] = "Neutral"
0x52b: Call2 0x562

0x52c: Pop(1)
0x52d: Push((int) 535231)
0x52e: @@ SetMessage(Stack[-1])
0x52f: Pop(1)
0x530: @@ ClearReplies()
0x531: Pop(0)
0x532: Push((int) 535232)
0x533: Push((int) 36953)
0x534: Push((int) 36907)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Push((int) 535233)
0x538: Push((int) -1)
0x539: Push((int) 36908)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Push((int) 535280)
0x53d: Push((int) -1)
0x53e: Push((int) 36956)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: GOTO 0x544

0x542: Return(); Pop(0)

0x543: GOTO 0x527

0x544: PushEmpty(bool)
0x545: Call2 0x958

0x546: Pop(0)
0x547: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x548: @ lshWaitForAnimEnd()
0x549: Pop(0)
0x54a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: GOTO 0x552

0x54d: PushEmpty(string)
0x54e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x54f: Call2 0x8a2

0x550: Pop(1)
0x551: GOTO 0x548

0x552: GOTO 0x561

0x553: Push("all")
0x554: Push("idle")
0x555: @ PlayAnimation(Stack[-2], Stack[-1])
0x556: Pop(2)
0x557: @ WaitForAnimEnd()
0x558: Pop(0)
0x559: Push( Stack[3 + Tasks[-1].StackPointer] )
0x55a: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55b: GOTO 0x561

0x55c: Push("all")
0x55d: Push("idle")
0x55e: @ PlayAnimation(Stack[-2], Stack[-1])
0x55f: Pop(2)
0x560: GOTO 0x557

0x561: Return(); Pop(0)

0x562: PushEmpty()
0x563: PushEmpty(bool)
0x564: Call2 0x958

0x565: Pop(0)
0x566: Pop(1); Push((bool) Stack[-1] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: Return(); Pop(0)

0x569: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x56a: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56b: Return(); Pop(0)

0x56c: PushEmpty(string, bool)
0x56d: Stack[-2] = Stack[-3]
0x56e: Push("")
0x56f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Stack[-1] = (bool) 0
0x572: GOTO 0x574

0x573: Stack[-1] = (bool) 1
0x574: Call2 0x8b2

0x575: Pop(2)
0x576: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x577: Return(); Pop(0)

0x578: PushEmpty()
0x579: Push((int) 1)
0x57a: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x57b: PushEmpty()
0x57c: Call2 0x8d0

0x57d: Pop(0)
0x57e: Push((int) 36906)
0x57f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x581: PushEmpty(string)
0x582: Stack[-1] = "Neutral"
0x583: Call2 0x562

0x584: Pop(1)
0x585: Push((int) 535231)
0x586: @@ SetMessage(Stack[-1])
0x587: Pop(1)
0x588: @@ ClearReplies()
0x589: Pop(0)
0x58a: Push((int) 535232)
0x58b: Push((int) 36953)
0x58c: Push((int) 36907)
0x58d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58e: Pop(3)
0x58f: Push((int) 535233)
0x590: Push((int) -1)
0x591: Push((int) 36908)
0x592: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(3)
0x594: Push((int) 535280)
0x595: Push((int) -1)
0x596: Push((int) 36956)
0x597: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x598: Pop(3)
0x599: Return(); Pop(0)

0x59a: Push((int) 36953)
0x59b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x59d: PushEmpty(string)
0x59e: Stack[-1] = "Neutral"
0x59f: Call2 0x562

0x5a0: Pop(1)
0x5a1: Push((int) 535277)
0x5a2: @@ SetMessage(Stack[-1])
0x5a3: Pop(1)
0x5a4: @@ ClearReplies()
0x5a5: Pop(0)
0x5a6: Push((int) 535278)
0x5a7: Push((int) 36957)
0x5a8: Push((int) 36954)
0x5a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5aa: Pop(3)
0x5ab: Push((int) 535279)
0x5ac: Push((int) 36957)
0x5ad: Push((int) 36955)
0x5ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5af: Pop(3)
0x5b0: Return(); Pop(0)

0x5b1: Push((int) 36957)
0x5b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5b4: PushEmpty(string)
0x5b5: Stack[-1] = "Neutral"
0x5b6: Call2 0x562

0x5b7: Pop(1)
0x5b8: Push((int) 535281)
0x5b9: @@ SetMessage(Stack[-1])
0x5ba: Pop(1)
0x5bb: @@ ClearReplies()
0x5bc: Pop(0)
0x5bd: Push((int) 535282)
0x5be: Push((int) -1)
0x5bf: Push((int) 36958)
0x5c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c1: Pop(3)
0x5c2: Push((int) 535283)
0x5c3: Push((int) -1)
0x5c4: Push((int) 36959)
0x5c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c6: Pop(3)
0x5c7: Return(); Pop(0)

0x5c8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5c9: PushEmpty(bool)
0x5ca: Call2 0x958

0x5cb: Pop(0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cd: @ lshStopAnimation()
0x5ce: Pop(0)
0x5cf: GOTO 0x5d2

0x5d0: @ StopAnimation()
0x5d1: Pop(0)
0x5d2: Return(); Pop(0)

0x5d3: GOTO 0x579

0x5d4: Return(); Pop(0)

0x5d5: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5d6: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5d7: PushEmpty(bool, object, float)
0x5d8: Stack[-2] = Stack[-12]
0x5d9: Stack[-1] = (float) 70.0
0x5da: Call2 0x7c3

0x5db: Pop(2)
0x5dc: Pop(1); Push((bool) Stack[-1] == 0)
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-10] = (int) -2
0x5df: Return(); Pop(8)

0x5e0: @ CreateDialog(Stack[-4])
0x5e1: Pop(0)
0x5e2: PushEmpty(int)
0x5e3: Call2 0x952

0x5e4: Pop(0)
0x5e5: @@ SetNPCName(Stack[-1])
0x5e6: Pop(1)
0x5e7: PushEmpty(int)
0x5e8: Call2 0x950

0x5e9: Pop(0)
0x5ea: @@ SetNPCDescription(Stack[-1])
0x5eb: Pop(1)
0x5ec: PushEmpty(string)
0x5ed: Call2 0x954

0x5ee: Pop(0)
0x5ef: @@ SetPhoto(Stack[-1])
0x5f0: Pop(1)
0x5f1: PushEmpty(string)
0x5f2: Call2 0x956

0x5f3: Pop(0)
0x5f4: @@ SetPhoto2(Stack[-1])
0x5f5: Pop(1)
0x5f6: PushEmpty(int)
0x5f7: Call2 0xa4a

0x5f8: Pop(0)
0x5f9: @@ SetPlayerName(Stack[-1])
0x5fa: Pop(1)
0x5fb: Stack[-2] = (int) -1
0x5fc: @ IsOverrideActive(Stack[-3])
0x5fd: Pop(0)
0x5fe: Push(Stack[-3])
0x5ff: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x600: Stack[-10] = (int) -2
0x601: Return(); Pop(8)

0x602: @ DoDialog(Stack[-4])
0x603: Pop(0)
0x604: PushEmpty(bool, object)
0x605: PushEmpty(object)
0x606: Call2 0x8d7

0x607: Stack[-2] = Stack[-1]
0x608: Pop(1)
0x609: Call2 0x818

0x60a: Pop(2)
0x60b: PushEmpty(object, object)
0x60c: Stack[-2] = Stack[-11]
0x60d: Stack[-1] = Stack[-6]
0x60e: Push(-2, 4); TaskCall(9)
0x60f: Call2 0x626

0x610: Pop(-2, 4); TaskReturn
0x611: Pop(2)
0x612: @@ IsDialogEnd(Stack[-1])
0x613: Pop(0)
0x614: Pop(0); Push((bool) Stack[-1] == 0)
0x615: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x616: @ sync()
0x617: Pop(0)
0x618: @@ IsDialogEnd(Stack[-1])
0x619: Pop(0)
0x61a: GOTO 0x614

0x61b: PushEmpty(object)
0x61c: Stack[-1] = Stack[-10]
0x61d: Call2 0x807

0x61e: Pop(1)
0x61f: @ StopDialog(Stack[-4])
0x620: Pop(0)
0x621: @@ GetReturnValue(Stack[-2])
0x622: Pop(0)
0x623: Stack[-10] = Stack[-2]
0x624: Return(); Pop(8)

0x625: Stack[-4] = 0
0x626: PushEmpty()
0x627: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x628: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x629: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x62a: Push((int) 1)
0x62b: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x62c: PushEmpty(string)
0x62d: Stack[-1] = "Neutral"
0x62e: Call2 0x660

0x62f: Pop(1)
0x630: Push((int) 540545)
0x631: @@ SetMessage(Stack[-1])
0x632: Pop(1)
0x633: @@ ClearReplies()
0x634: Pop(0)
0x635: Push((int) 540546)
0x636: Push((int) -1)
0x637: Push((int) 42555)
0x638: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(3)
0x63a: Push((int) 540798)
0x63b: Push((int) -1)
0x63c: Push((int) 42847)
0x63d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63e: Pop(3)
0x63f: GOTO 0x642

0x640: Return(); Pop(0)

0x641: GOTO 0x62a

0x642: PushEmpty(bool)
0x643: Call2 0x958

0x644: Pop(0)
0x645: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x646: @ lshWaitForAnimEnd()
0x647: Pop(0)
0x648: Push( Stack[3 + Tasks[-1].StackPointer] )
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: GOTO 0x650

0x64b: PushEmpty(string)
0x64c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x64d: Call2 0x8a2

0x64e: Pop(1)
0x64f: GOTO 0x646

0x650: GOTO 0x65f

0x651: Push("all")
0x652: Push("idle")
0x653: @ PlayAnimation(Stack[-2], Stack[-1])
0x654: Pop(2)
0x655: @ WaitForAnimEnd()
0x656: Pop(0)
0x657: Push( Stack[3 + Tasks[-1].StackPointer] )
0x658: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x659: GOTO 0x65f

0x65a: Push("all")
0x65b: Push("idle")
0x65c: @ PlayAnimation(Stack[-2], Stack[-1])
0x65d: Pop(2)
0x65e: GOTO 0x655

0x65f: Return(); Pop(0)

0x660: PushEmpty()
0x661: PushEmpty(bool)
0x662: Call2 0x958

0x663: Pop(0)
0x664: Pop(1); Push((bool) Stack[-1] == 0)
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Return(); Pop(0)

0x667: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Return(); Pop(0)

0x66a: PushEmpty(string, bool)
0x66b: Stack[-2] = Stack[-3]
0x66c: Push("")
0x66d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66f: Stack[-1] = (bool) 0
0x670: GOTO 0x672

0x671: Stack[-1] = (bool) 1
0x672: Call2 0x8b2

0x673: Pop(2)
0x674: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x675: Return(); Pop(0)

0x676: PushEmpty()
0x677: Push((int) 1)
0x678: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x679: PushEmpty()
0x67a: Call2 0x8d0

0x67b: Pop(0)
0x67c: Push((int) 42554)
0x67d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x67f: PushEmpty(string)
0x680: Stack[-1] = "Neutral"
0x681: Call2 0x660

0x682: Pop(1)
0x683: Push((int) 540545)
0x684: @@ SetMessage(Stack[-1])
0x685: Pop(1)
0x686: @@ ClearReplies()
0x687: Pop(0)
0x688: Push((int) 540546)
0x689: Push((int) -1)
0x68a: Push((int) 42555)
0x68b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68c: Pop(3)
0x68d: Push((int) 540798)
0x68e: Push((int) -1)
0x68f: Push((int) 42847)
0x690: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x691: Pop(3)
0x692: Return(); Pop(0)

0x693: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x694: PushEmpty(bool)
0x695: Call2 0x958

0x696: Pop(0)
0x697: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x698: @ lshStopAnimation()
0x699: Pop(0)
0x69a: GOTO 0x69d

0x69b: @ StopAnimation()
0x69c: Pop(0)
0x69d: Return(); Pop(0)

0x69e: GOTO 0x677

0x69f: Return(); Pop(0)

0x6a0: Push(GlobalVars[1])
0x6a1: Stack[-1] = (bool) 0
0x6a2: GlobalVars[1] = Stack[-1]; Pop(1)
0x6a3: PushEmpty()
0x6a4: Call2 0x6a7

0x6a5: Pop(0)
0x6a6: Return(); Pop(0)

0x6a7: PushEmpty(bool)
0x6a8: Call2 0x7be

0x6a9: Pop(0)
0x6aa: Pop(1); Push((bool) Stack[-1] == 0)
0x6ab: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ac: @ Hold()
0x6ad: Pop(0)
0x6ae: @ GetDirection(Stack[-0])
0x6af: Pop(0)
0x6b0: PushEmpty()
0x6b1: Call2 0x757

0x6b2: Pop(0)
0x6b3: GOTO 0x6b0

0x6b4: Return(); Pop(0)

0x6b5: PushEmpty(object, object)
0x6b6: Push("player")
0x6b7: @ FindActor(Stack[-2], Stack[-1])
0x6b8: Pop(1)
0x6b9: Pop(0); Push((bool) Stack[-1] == 0)
0x6ba: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bb: Stack[-3] = (bool) 0
0x6bc: Return(); Pop(2)

0x6bd: PushEmpty(bool, object)
0x6be: Stack[-1] = Stack[-3]
0x6bf: Call2 0x7b5

0x6c0: Stack[-5] = Stack[-2]
0x6c1: Pop(2)
0x6c2: Return(); Pop(2)

0x6c3: Stack[-1] = 0
0x6c4: Push(CvectorIndex(Stack[-0], 0))
0x6c5: Push(CvectorIndex(Stack[-0], 2))
0x6c6: @ RotateAsync(Stack[-2], Stack[-1])
0x6c7: Pop(2)
0x6c8: Return(); Pop(0)

0x6c9: PushEmpty(object, bool, object, bool)
0x6ca: Push("player")
0x6cb: @ FindActor(Stack[-3], Stack[-1])
0x6cc: Pop(1)
0x6cd: Pop(0); Push((bool) Stack[-2] == 0)
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cf: Stack[-5] = (bool) 0
0x6d0: Return(); Pop(4)

0x6d1: PushEmpty(float, object)
0x6d2: Stack[-1] = Stack[-4]
0x6d3: Call2 0x7a3

0x6d4: Pop(1)
0x6d5: Push((float)90000.0)
0x6d6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d8: Stack[-5] = (bool) 0
0x6d9: Return(); Pop(4)

0x6da: @ CanSee(Stack[-1], Stack[-2])
0x6db: Pop(0)
0x6dc: Stack[-5] = Stack[-1]
0x6dd: Return(); Pop(4)

0x6de: Stack[-2] = 0
0x6df: PushEmpty(float, float)
0x6e0: Push((int) 8)
0x6e1: Push((int) 16)
0x6e2: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(2)
0x6e4: Push((int) 10)
0x6e5: @ SetTimer(Stack[-1], Stack[-2])
0x6e6: Pop(1)
0x6e7: Return(); Pop(2)

0x6e8: Push((int) 10)
0x6e9: @ KillTimer(Stack[-1])
0x6ea: Pop(1)
0x6eb: Return(); Pop(0)

0x6ec: PushEmpty()
0x6ed: Push((int) 10)
0x6ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x6f0: PushEmpty()
0x6f1: Call2 0x6e8

0x6f2: Pop(0)
0x6f3: PushEmpty(bool)
0x6f4: Stack[-1] = (bool) 0
0x6f5: PushEmpty(bool)
0x6f6: Call2 0x7be

0x6f7: Pop(0)
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6f9: PushEmpty(bool)
0x6fa: Call2 0x6c9

0x6fb: Pop(0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fd: Stack[-1] = (bool) 1
0x6fe: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x6ff: PushEmpty(bool)
0x700: Call2 0x6b5

0x701: Pop(0)
0x702: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x703: PushEmpty(bool, object)
0x704: PushEmpty(object)
0x705: Call2 0x8d7

0x706: Stack[-2] = Stack[-1]
0x707: Pop(1)
0x708: Call2 0x852

0x709: Pop(2)
0x70a: GOTO 0x711

0x70b: PushEmpty()
0x70c: Call2 0x6c4

0x70d: Pop(0)
0x70e: PushEmpty()
0x70f: Call2 0x6df

0x710: Pop(0)
0x711: Return(); Pop(0)

0x712: PushEmpty()
0x713: Call2 0x79e

0x714: Pop(0)
0x715: PushEmpty()
0x716: Call2 0x6e8

0x717: Pop(0)
0x718: @ lshStopSpeech()
0x719: Pop(0)
0x71a: @ lshStopAnimation()
0x71b: Pop(0)
0x71c: @ StopAsync()
0x71d: Pop(0)
0x71e: @ Hold()
0x71f: Pop(0)
0x720: Return(); Pop(0)

0x721: @ StopGroup0()
0x722: Pop(0)
0x723: PushEmpty()
0x724: Call2 0x6e8

0x725: Pop(0)
0x726: PushEmpty(string)
0x727: Stack[-1] = "Neutral"
0x728: Call2 0x8a2

0x729: Pop(1)
0x72a: PushEmpty()
0x72b: Call2 0x6df

0x72c: Pop(0)
0x72d: Return(); Pop(0)

0x72e: PushEmpty()
0x72f: Push(Stack[-1])
0x730: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x731: PushEmpty()
0x732: Call2 0x6df

0x733: Pop(0)
0x734: GOTO 0x739

0x735: PushEmpty(string)
0x736: Stack[-1] = "Neutral"
0x737: Call2 0x8a2

0x738: Pop(1)
0x739: Return(); Pop(0)

0x73a: PushEmpty(bool, bool)
0x73b: @ IsOverrideActive(Stack[-1])
0x73c: Pop(0)
0x73d: Pop(0); Push((bool) Stack[-1] == 0)
0x73e: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x73f: EventDisable(0)
0x740: PushEmpty()
0x741: Call2 0x79e

0x742: Pop(0)
0x743: PushEmpty(bool, object)
0x744: Stack[-1] = Stack[-5]
0x745: Call2 0x7b5

0x746: Pop(2)
0x747: EventEnable(0)
0x748: PushEmpty(object)
0x749: Stack[-1] = Stack[-4]
0x74a: Call2 0xa5b

0x74b: Pop(1)
0x74c: PushEmpty(string)
0x74d: Stack[-1] = "Neutral"
0x74e: Call2 0x8a2

0x74f: Pop(1)
0x750: PushEmpty()
0x751: Call2 0x6e8

0x752: Pop(0)
0x753: PushEmpty()
0x754: Call2 0x6df

0x755: Pop(0)
0x756: Return(); Pop(2)

0x757: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x758: @ WaitForAnimEnd()
0x759: Pop(0)
0x75a: PushEmpty(bool)
0x75b: Call2 0x7be

0x75c: Pop(0)
0x75d: Pop(1); Push((bool) Stack[-1] == 0)
0x75e: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x75f: Return(); Pop(12)

0x760: PushEmpty(int)
0x761: Call2 0x93f

0x762: Stack[-7] = Stack[-1]
0x763: Pop(1)
0x764: Stack[-5] = (int) 0
0x765: PushEmpty(bool)
0x766: Stack[-1] = (bool) 0
0x767: Push((int) 5)
0x768: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x769: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76a: PushEmpty(bool)
0x76b: Call2 0x7be

0x76c: Pop(0)
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: Stack[-1] = (bool) 1
0x76f: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x770: Pop(0); Push((bool) Stack[-6] == 0)
0x771: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x772: Push((int) 3)
0x773: @ Sleep(Stack[-1], Stack[-5])
0x774: Pop(1)
0x775: Pop(0); Push((bool) Stack[-4] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x799

0x778: GOTO 0x78e

0x779: @ irand(Stack[-3], Stack[-6])
0x77a: Pop(0)
0x77b: Push((int) 5)
0x77c: @ irand(Stack[-3], Stack[-1])
0x77d: Pop(1)
0x77e: Push((int) 0)
0x77f: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: Stack[-3] = (int) 0
0x782: Push("all")
0x783: PushEmpty(string, int)
0x784: Stack[-1] = Stack[-6]
0x785: Call2 0x938

0x786: Pop(1)
0x787: @ PlayAnimation(Stack[-2], Stack[-1])
0x788: Pop(2)
0x789: @ WaitForAnimEnd(Stack[-1])
0x78a: Pop(0)
0x78b: Pop(0); Push((bool) Stack[-1] == 0)
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: GOTO 0x799

0x78e: PushEmpty(bool)
0x78f: Call2 0x79c

0x790: Pop(0)
0x791: Pop(1); Push((bool) Stack[-1] == 0)
0x792: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x793: GOTO 0x799

0x794: @ ResetAAS()
0x795: Pop(0)
0x796: Push((int) 1)
0x797: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x798: GOTO 0x765

0x799: @ ResetAAS()
0x79a: Pop(0)
0x79b: Return(); Pop(12)

0x79c: Stack[-1] = (bool) 1
0x79d: Return(); Pop(0)

0x79e: @ StopAnimation()
0x79f: Pop(0)
0x7a0: @ StopGroup0()
0x7a1: Pop(0)
0x7a2: Return(); Pop(0)

0x7a3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7a4: @ GetPosition(Stack[-3])
0x7a5: Pop(0)
0x7a6: @@ GetPosition(Stack[-2])
0x7a7: Pop(0)
0x7a8: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x7a9: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x7aa: Return(); Pop(6)

0x7ab: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x7ac: @ GetPosition(Stack[-3])
0x7ad: Pop(0)
0x7ae: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x7af: Push(CvectorIndex(Stack[-2], 0))
0x7b0: Push(CvectorIndex(Stack[-3], 2))
0x7b1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x7b2: Pop(2)
0x7b3: Stack[-8] = Stack[-1]
0x7b4: Return(); Pop(6)

0x7b5: PushEmpty(cvector, cvector)
0x7b6: @@ GetPosition(Stack[-1])
0x7b7: Pop(0)
0x7b8: PushEmpty(bool, cvector)
0x7b9: Stack[-1] = Stack[-3]
0x7ba: Call2 0x7ab

0x7bb: Stack[-6] = Stack[-2]
0x7bc: Pop(2)
0x7bd: Return(); Pop(2)

0x7be: PushEmpty(bool, bool)
0x7bf: @ IsLoaded(Stack[-1])
0x7c0: Pop(0)
0x7c1: Stack[-3] = Stack[-1]
0x7c2: Return(); Pop(2)

0x7c3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x7c4: @@ GetPosition(Stack[-8])
0x7c5: Pop(0)
0x7c6: @@ GetEyesHeight(Stack[-9])
0x7c7: Pop(0)
0x7c8: Push(CvectorIndex(Stack[-8], 1))
0x7c9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7ca: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x7cb: @ GetPosition(Stack[-7])
0x7cc: Pop(0)
0x7cd: @ GetEyesHeight(Stack[-9])
0x7ce: Pop(0)
0x7cf: Push(CvectorIndex(Stack[-7], 1))
0x7d0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x7d1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x7d2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x7d3: Push(CvectorIndex(Stack[-6], 1))
0x7d4: Stack[-1] = (int) 0
0x7d5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x7d6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x7d7: Pop(1); Push(Sqrt(Stack[-1]))
0x7d8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x7d9: Stack[-5] = -Stack[-6]; Pop(0);
0x7da: Pop(0); Push(Stack[-6] * Stack[-19]);
0x7db: PushEmpty(cvector, cvector)
0x7dc: Push(CVector(0.0, 1.0, 0.0))
0x7dd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x7de: Call2 0x8dd

0x7df: Pop(1)
0x7e0: Push((int) 25)
0x7e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7e3: Push(CVector(0.0, 10.0, 0.0))
0x7e4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7e5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x7e6: @ IsOverrideActive(Stack[-2])
0x7e7: Pop(0)
0x7e8: Push(Stack[-2])
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-21] = (bool) 0
0x7eb: Return(); Pop(18)

0x7ec: @ StopWorld()
0x7ed: Pop(0)
0x7ee: @ CameraTransit(Stack[-3], Stack[-5])
0x7ef: Pop(0)
0x7f0: Push(CvectorIndex(Stack[-4], 0))
0x7f1: Push(CvectorIndex(Stack[-5], 2))
0x7f2: @ Rotate(Stack[-2], Stack[-1])
0x7f3: Pop(2)
0x7f4: PushEmpty(bool)
0x7f5: Call2 0x958

0x7f6: Pop(0)
0x7f7: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f8: GOTO 0x801

0x7f9: Push("head")
0x7fa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x7fb: Pop(1)
0x7fc: Push(Stack[-1])
0x7fd: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7fe: Push("head")
0x7ff: @ LookAsyncCamera(Stack[-1])
0x800: Pop(1)
0x801: @ CameraWaitForPlayFinish()
0x802: Pop(0)
0x803: @ ResumeWorld()
0x804: Pop(0)
0x805: Stack[-21] = (bool) 1
0x806: Return(); Pop(18)

0x807: PushEmpty(bool, bool)
0x808: @ CameraSwitchToNormal()
0x809: Pop(0)
0x80a: PushEmpty(bool)
0x80b: Call2 0x958

0x80c: Pop(0)
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: GOTO 0x817

0x80f: Push("head")
0x810: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x811: Pop(1)
0x812: Push(Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x814: Push("head")
0x815: @ UnlookAsync(Stack[-1])
0x816: Pop(1)
0x817: Return(); Pop(2)

0x818: PushEmpty(int, int, int, int)
0x819: Push("voice_common")
0x81a: @ GetVariable(Stack[-1], Stack[-3])
0x81b: Pop(1)
0x81c: Push(Stack[-2])
0x81d: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x81e: PushEmpty(bool, object)
0x81f: Stack[-1] = Stack[-7]
0x820: Call2 0x852

0x821: Pop(1)
0x822: Pop(1); Push((bool) Stack[-1] == 0)
0x823: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x824: PushEmpty(bool, object)
0x825: Stack[-1] = Stack[-7]
0x826: Call2 0x877

0x827: Pop(1)
0x828: Pop(1); Push((bool) Stack[-1] == 0)
0x829: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82a: Stack[-6] = (bool) 0
0x82b: Return(); Pop(4)

0x82c: Push((int) 2)
0x82d: @ irand(Stack[-2], Stack[-1])
0x82e: Pop(1)
0x82f: Push(Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x831: Push("voice_common")
0x832: Push((int) 1)
0x833: Pop(1); Push(Stack[-4] + Stack[-1]);
0x834: Push((int) 3)
0x835: Pop(2); Push(Stack[-2] % Stack[-1]);
0x836: @ SetVariable(Stack[-2], Stack[-1])
0x837: Pop(2)
0x838: GOTO 0x83d

0x839: Push("voice_common")
0x83a: Push((int) 0)
0x83b: @ SetVariable(Stack[-2], Stack[-1])
0x83c: Pop(2)
0x83d: GOTO 0x850

0x83e: PushEmpty(bool, object)
0x83f: Stack[-1] = Stack[-7]
0x840: Call2 0x877

0x841: Pop(1)
0x842: Pop(1); Push((bool) Stack[-1] == 0)
0x843: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x844: PushEmpty(bool, object)
0x845: Stack[-1] = Stack[-7]
0x846: Call2 0x852

0x847: Pop(1)
0x848: Pop(1); Push((bool) Stack[-1] == 0)
0x849: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84a: Stack[-6] = (bool) 0
0x84b: Return(); Pop(4)

0x84c: Push("voice_common")
0x84d: Push((int) 1)
0x84e: @ SetVariable(Stack[-2], Stack[-1])
0x84f: Pop(2)
0x850: Stack[-6] = (bool) 1
0x851: Return(); Pop(4)

0x852: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x853: Stack[-5] = "c"
0x854: Stack[-4] = (int) 0
0x855: Push((int) 1)
0x856: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x857: Push((int) 1)
0x858: Pop(1); Push(Stack[-5] + Stack[-1]);
0x859: Pop(1); Push(Stack[-6] + Stack[-1]);
0x85a: @@ HasProperty(Stack[-1], Stack[-4])
0x85b: Pop(1)
0x85c: Pop(0); Push((bool) Stack[-3] == 0)
0x85d: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85e: GOTO 0x862

0x85f: Push((int) 1)
0x860: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x861: GOTO 0x855

0x862: Pop(0); Push((bool) Stack[-4] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x864: Stack[-12] = (bool) 0
0x865: Return(); Pop(10)

0x866: Stack[-2] = (int) 0
0x867: Push((int) 1)
0x868: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x869: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86a: @ irand(Stack[-2], Stack[-4])
0x86b: Pop(0)
0x86c: Push((int) 1)
0x86d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x86e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x86f: @@ GetProperty(Stack[-1], Stack[-2])
0x870: Pop(1)
0x871: PushEmpty(bool, string)
0x872: Stack[-1] = Stack[-3]
0x873: Call2 0x8c1

0x874: Stack[-14] = Stack[-2]
0x875: Pop(2)
0x876: Return(); Pop(10)

0x877: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x878: Push("d")
0x879: PushEmpty(int)
0x87a: Call2 0x929

0x87b: Pop(0)
0x87c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87d: Push("m")
0x87e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x87f: Stack[-4] = (int) 0
0x880: Push((int) 1)
0x881: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x882: Push((int) 1)
0x883: Pop(1); Push(Stack[-5] + Stack[-1]);
0x884: Pop(1); Push(Stack[-6] + Stack[-1]);
0x885: @@ HasProperty(Stack[-1], Stack[-4])
0x886: Pop(1)
0x887: Pop(0); Push((bool) Stack[-3] == 0)
0x888: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x889: GOTO 0x88d

0x88a: Push((int) 1)
0x88b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x88c: GOTO 0x880

0x88d: Pop(0); Push((bool) Stack[-4] == 0)
0x88e: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88f: Stack[-12] = (bool) 0
0x890: Return(); Pop(10)

0x891: Stack[-2] = (int) 0
0x892: Push((int) 1)
0x893: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: @ irand(Stack[-2], Stack[-4])
0x896: Pop(0)
0x897: Push((int) 1)
0x898: Pop(1); Push(Stack[-3] + Stack[-1]);
0x899: Pop(1); Push(Stack[-6] + Stack[-1]);
0x89a: @@ GetProperty(Stack[-1], Stack[-2])
0x89b: Pop(1)
0x89c: PushEmpty(bool, string)
0x89d: Stack[-1] = Stack[-3]
0x89e: Call2 0x8c1

0x89f: Stack[-14] = Stack[-2]
0x8a0: Pop(2)
0x8a1: Return(); Pop(10)

0x8a2: PushEmpty(bool, float, float, bool, float, float)
0x8a3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x8a4: Pop(0)
0x8a5: Push(Stack[-3])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8a7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x8a8: Pop(0)
0x8a9: Push((bool) 0)
0x8aa: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8ab: Pop(1)
0x8ac: GOTO 0x8b1

0x8ad: Push("Can't find lsh animation : ")
0x8ae: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8af: @ Trace(Stack[-1])
0x8b0: Pop(1)
0x8b1: Return(); Pop(6)

0x8b2: PushEmpty(bool, float, float, bool, float, float)
0x8b3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x8b4: Pop(0)
0x8b5: Push(Stack[-3])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x8b8: Pop(0)
0x8b9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x8ba: Pop(0)
0x8bb: GOTO 0x8c0

0x8bc: Push("Can't find lsh animation : ")
0x8bd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8be: @ Trace(Stack[-1])
0x8bf: Pop(1)
0x8c0: Return(); Pop(6)

0x8c1: PushEmpty(bool, bool)
0x8c2: PushEmpty(bool)
0x8c3: Call2 0x958

0x8c4: Pop(0)
0x8c5: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c6: @ lshHasSpeech(Stack[-1], Stack[-3])
0x8c7: Pop(0)
0x8c8: Push(Stack[-1])
0x8c9: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8ca: @ lshPlaySpeech(Stack[-3])
0x8cb: Pop(0)
0x8cc: Stack[-4] = (bool) 1
0x8cd: Return(); Pop(2)

0x8ce: Stack[-4] = (bool) 0
0x8cf: Return(); Pop(2)

0x8d0: PushEmpty(bool)
0x8d1: Call2 0x958

0x8d2: Pop(0)
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d4: @ lshStopSpeech()
0x8d5: Pop(0)
0x8d6: Return(); Pop(0)

0x8d7: PushEmpty(object, object)
0x8d8: @ self(Stack[-1])
0x8d9: Pop(0)
0x8da: Stack[-3] = Stack[-1]
0x8db: Return(); Pop(2)

0x8dc: Stack[-1] = 0
0x8dd: PushEmpty(float, float)
0x8de: Pop(0); Push(Stack[-3] | Stack[-3]);
0x8df: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8e0: Push((float)0.0)
0x8e1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x8e4: Return(); Pop(2)

0x8e5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x8e6: Return(); Pop(2)

0x8e7: PushEmpty(int, int)
0x8e8: @ GetVariable(Stack[-3], Stack[-1])
0x8e9: Pop(0)
0x8ea: Stack[-4] = Stack[-1]
0x8eb: Return(); Pop(2)

0x8ec: PushEmpty(object, object)
0x8ed: @ CreateIntVector(Stack[-1])
0x8ee: Pop(0)
0x8ef: @@ add(Stack[-4])
0x8f0: Pop(0)
0x8f1: @@ add(Stack[-3])
0x8f2: Pop(0)
0x8f3: Push((int) 3)
0x8f4: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8f5: Pop(1)
0x8f6: Return(); Pop(2)

0x8f7: Stack[-1] = 0
0x8f8: PushEmpty(int, int, bool, int, int, bool)
0x8f9: @@ GetItemID(Stack[-3])
0x8fa: Pop(0)
0x8fb: Push("Category")
0x8fc: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x8fd: Pop(1)
0x8fe: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x8ff: Pop(0)
0x900: Pop(0); Push((bool) Stack[-1] == 0)
0x901: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x902: @@ DropItems(Stack[-8], Stack[-7])
0x903: Pop(0)
0x904: GOTO 0x90a

0x905: PushEmpty(int, int)
0x906: Stack[-2] = Stack[-5]
0x907: Stack[-1] = Stack[-9]
0x908: Call2 0x8ec

0x909: Pop(2)
0x90a: Return(); Pop(6)

0x90b: PushEmpty(object, object)
0x90c: @ CreateInvItem(Stack[-1])
0x90d: Pop(0)
0x90e: @@ SetItemName(Stack[-4])
0x90f: Pop(0)
0x910: PushEmpty(object, object, int)
0x911: Stack[-3] = Stack[-8]
0x912: Stack[-2] = Stack[-4]
0x913: Stack[-1] = Stack[-6]
0x914: Call2 0x8f8

0x915: Pop(3)
0x916: Return(); Pop(2)

0x917: Stack[-1] = 0
0x918: PushEmpty(object, object)
0x919: @ FindActor(Stack[-1], Stack[-4])
0x91a: Pop(0)
0x91b: Pop(0); Push((bool) Stack[-1] == 0)
0x91c: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91d: Stack[-5] = (bool) 0
0x91e: Return(); Pop(2)

0x91f: @ Trigger(Stack[-1], Stack[-3])
0x920: Pop(0)
0x921: Stack[-5] = (bool) 1
0x922: Return(); Pop(2)

0x923: Stack[-1] = 0
0x924: PushEmpty(float, float)
0x925: @ GetGameTime(Stack[-1])
0x926: Pop(0)
0x927: Stack[-3] = Stack[-1]
0x928: Return(); Pop(2)

0x929: PushEmpty(float, float)
0x92a: @ GetGameTime(Stack[-1])
0x92b: Pop(0)
0x92c: Push((int) 1)
0x92d: PushEmpty(int)
0x92e: Push((int) 24)
0x92f: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x930: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x931: Return(); Pop(2)

0x932: PushEmpty()
0x933: PushEmpty(int)
0x934: Call2 0x929

0x935: Pop(0)
0x936: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x937: Return(); Pop(0)

0x938: PushEmpty(string, string)
0x939: Stack[-1] = "idle"
0x93a: Push(Stack[-3])
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x93d: Stack[-4] = Stack[-1]
0x93e: Return(); Pop(2)

0x93f: PushEmpty(int, bool, int, bool)
0x940: Stack[-2] = (int) 0
0x941: Push("all")
0x942: PushEmpty(string, int)
0x943: Stack[-1] = Stack[-5]
0x944: Call2 0x938

0x945: Pop(1)
0x946: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x947: Pop(2)
0x948: Pop(0); Push((bool) Stack[-1] == 0)
0x949: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x94a: GOTO 0x94e

0x94b: Push((int) 1)
0x94c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x94d: GOTO 0x941

0x94e: Stack[-5] = Stack[-2]
0x94f: Return(); Pop(4)

0x950: Stack[-1] = (int) 515550
0x951: Return(); Pop(0)

0x952: Stack[-1] = (int) 502875
0x953: Return(); Pop(0)

0x954: Stack[-1] = "ui/NPC_Petr.png"
0x955: Return(); Pop(0)

0x956: Stack[-1] = "ui/NPC_Petr_b.png"
0x957: Return(); Pop(0)

0x958: Stack[-1] = (bool) 1
0x959: Return(); Pop(0)

0x95a: PushEmpty(object, object)
0x95b: Push("k5q02")
0x95c: Push((int) 2)
0x95d: @ SetVariable(Stack[-2], Stack[-1])
0x95e: Pop(2)
0x95f: PushEmpty(object)
0x960: Call2 0xa18

0x961: Stack[-2] = Stack[-1]
0x962: Pop(1)
0x963: Push("k5q02PetrGotoAndrei")
0x964: Push("pt_map_andrei")
0x965: Push((int) 0)
0x966: Push((int) 515295)
0x967: PushEmpty(float)
0x968: Call2 0x924

0x969: Pop(0)
0x96a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96b: Pop(5)
0x96c: PushEmpty()
0x96d: Call2 0x9d5

0x96e: Pop(0)
0x96f: PushEmpty(bool, string, string)
0x970: Stack[-2] = "quest_k5_02"
0x971: Stack[-1] = "init_kabak"
0x972: Call2 0x918

0x973: Pop(3)
0x974: Return(); Pop(2)

0x975: Stack[-1] = 0
0x976: PushEmpty()
0x977: Push("k5q02")
0x978: Push((int) 6)
0x979: @ SetVariable(Stack[-2], Stack[-1])
0x97a: Pop(2)
0x97b: PushEmpty()
0x97c: Call2 0x9e2

0x97d: Pop(0)
0x97e: Return(); Pop(0)

0x97f: PushEmpty()
0x980: Push("tvirin 5 is given")
0x981: @ Trace(Stack[-1])
0x982: Pop(1)
0x983: PushEmpty(object, string, int)
0x984: Stack[-3] = Stack[-5]
0x985: Stack[-2] = "tvirin"
0x986: Stack[-1] = (int) 5
0x987: Call2 0x90b

0x988: Pop(3)
0x989: Return(); Pop(0)

0x98a: PushEmpty()
0x98b: Push("ook11Petr1")
0x98c: Push((int) 1)
0x98d: @ SetVariable(Stack[-2], Stack[-1])
0x98e: Pop(2)
0x98f: Return(); Pop(0)

0x990: PushEmpty()
0x991: Push("playsound")
0x992: Push("giveitem")
0x993: @ TriggerWorld(Stack[-2], Stack[-1])
0x994: Pop(2)
0x995: Return(); Pop(0)

0x996: PushEmpty()
0x997: Push("tvirin is given")
0x998: @ Trace(Stack[-1])
0x999: Pop(1)
0x99a: PushEmpty(object, string, int)
0x99b: Stack[-3] = Stack[-5]
0x99c: Stack[-2] = "tvirin"
0x99d: Stack[-1] = (int) 1
0x99e: Call2 0x90b

0x99f: Pop(3)
0x9a0: Return(); Pop(0)

0x9a1: PushEmpty()
0x9a2: PushEmpty(object, string, float)
0x9a3: PushEmpty(object)
0x9a4: Call2 0xa18

0x9a5: Stack[-4] = Stack[-1]
0x9a6: Pop(1)
0x9a7: Stack[-2] = "pt_map_andrei"
0x9a8: Stack[-1] = (int) 2
0x9a9: Call2 0xa29

0x9aa: Pop(3)
0x9ab: PushEmpty(object)
0x9ac: Call2 0xa18

0x9ad: Pop(0)
0x9ae: @@ ShowMap(Stack[-1])
0x9af: Pop(1)
0x9b0: Return(); Pop(0)

0x9b1: PushEmpty()
0x9b2: PushEmpty(int, string)
0x9b3: Stack[-1] = "k5q02"
0x9b4: Call2 0x8e7

0x9b5: Pop(1)
0x9b6: Push((int) 1)
0x9b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9b8: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b9: Stack[-2] = (bool) 1
0x9ba: Return(); Pop(0)

0x9bb: Stack[-2] = (bool) 0
0x9bc: Return(); Pop(0)

0x9bd: PushEmpty()
0x9be: PushEmpty(int, string)
0x9bf: Stack[-1] = "k5q02"
0x9c0: Call2 0x8e7

0x9c1: Pop(1)
0x9c2: Push((int) 5)
0x9c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c5: Stack[-2] = (bool) 1
0x9c6: Return(); Pop(0)

0x9c7: Stack[-2] = (bool) 0
0x9c8: Return(); Pop(0)

0x9c9: PushEmpty()
0x9ca: PushEmpty(int, string)
0x9cb: Stack[-1] = "ook11Petr1"
0x9cc: Call2 0x8e7

0x9cd: Pop(1)
0x9ce: Push((int) 0)
0x9cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9d0: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9d1: Stack[-2] = (bool) 1
0x9d2: Return(); Pop(0)

0x9d3: Stack[-2] = (bool) 0
0x9d4: Return(); Pop(0)

0x9d5: PushEmpty(object, object)
0x9d6: Push((int) 399)
0x9d7: Push((int) 2)
0x9d8: Push((int) 525937)
0x9d9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9da: Pop(3)
0x9db: PushEmpty(bool, object, int)
0x9dc: Stack[-2] = Stack[-4]
0x9dd: Stack[-1] = (int) 397
0x9de: Call2 0x9fc

0x9df: Pop(3)
0x9e0: Return(); Pop(2)

0x9e1: Stack[-1] = 0
0x9e2: PushEmpty(object, object)
0x9e3: Push((int) 403)
0x9e4: Push((int) 2)
0x9e5: Push((int) 525941)
0x9e6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: PushEmpty(bool, object, int)
0x9e9: Stack[-2] = Stack[-4]
0x9ea: Stack[-1] = (int) 397
0x9eb: Call2 0x9fc

0x9ec: Pop(3)
0x9ed: Return(); Pop(2)

0x9ee: Stack[-1] = 0
0x9ef: PushEmpty(object, object)
0x9f0: @ GetDiaryRoot(Stack[-1])
0x9f1: Pop(0)
0x9f2: Pop(0); Push((bool) Stack[-1] == 0)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f4: Push("Can't retrieve diary root")
0x9f5: @ Trace(Stack[-1])
0x9f6: Pop(1)
0x9f7: Stack[-3] = (bool) 0
0x9f8: Return(); Pop(2)

0x9f9: Stack[-3] = Stack[-1]
0x9fa: Return(); Pop(2)

0x9fb: Stack[-1] = 0
0x9fc: PushEmpty(object, object, int, object, object, int)
0x9fd: PushEmpty(object)
0x9fe: Call2 0x9ef

0x9ff: Stack[-4] = Stack[-1]
0xa00: Pop(1)
0xa01: @@ Find(Stack[-7], Stack[-2])
0xa02: Pop(0)
0xa03: Pop(0); Push((bool) Stack[-2] == 0)
0xa04: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa05: Push("Can't find diary parent with id: ")
0xa06: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa07: @ Trace(Stack[-1])
0xa08: Pop(1)
0xa09: Stack[-9] = (bool) 0
0xa0a: Return(); Pop(6)

0xa0b: @@ AddChild(Stack[-8])
0xa0c: Pop(0)
0xa0d: Push((int) 7)
0xa0e: @ SendWorldWndMessage(Stack[-1])
0xa0f: Pop(1)
0xa10: @@ GetCategory(Stack[-1])
0xa11: Pop(0)
0xa12: @ SetDiarySection(Stack[-1])
0xa13: Pop(0)
0xa14: Stack[-9] = (bool) 0
0xa15: Return(); Pop(6)

0xa16: Stack[-2] = 0
0xa17: Stack[-3] = 0
0xa18: PushEmpty(object, object, object, object)
0xa19: @ GetMainOutdoorScene(Stack[-2])
0xa1a: Pop(0)
0xa1b: Pop(0); Push((bool) Stack[-2] == 0)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa1d: Push("Can't find main outdoor scene")
0xa1e: @ Trace(Stack[-1])
0xa1f: Pop(1)
0xa20: Stack[-1] = 0
0xa21: Stack[-5] = Stack[-1]
0xa22: Return(); Pop(4)

0xa23: @@ GetMap(Stack[-1])
0xa24: Pop(0)
0xa25: Stack[-5] = Stack[-1]
0xa26: Return(); Pop(4)

0xa27: Stack[-1] = 0
0xa28: Stack[-2] = 0
0xa29: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xa2a: @ GetMainOutdoorScene(Stack[-2])
0xa2b: Pop(0)
0xa2c: Pop(0); Push((bool) Stack[-2] == 0)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa2e: Push("Can't find main outdoor scene")
0xa2f: @ Trace(Stack[-1])
0xa30: Pop(1)
0xa31: Return(); Pop(8)

0xa32: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xa33: Pop(0)
0xa34: Pop(0); Push((bool) Stack[-1] == 0)
0xa35: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa36: Push("Warning: outdoor scene locator ")
0xa37: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa38: Push(" doesnt exist")
0xa39: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa3a: @ Trace(Stack[-1])
0xa3b: Pop(1)
0xa3c: @@ GetMap(Stack[-11])
0xa3d: Pop(0)
0xa3e: Pop(0); Push((bool) Stack[-11] == 0)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa40: Push("Can't find map")
0xa41: @ Trace(Stack[-1])
0xa42: Pop(1)
0xa43: Return(); Pop(8)

0xa44: Push(CvectorIndex(Stack[-4], 0))
0xa45: Push(CvectorIndex(Stack[-5], 2))
0xa46: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xa47: Pop(2)
0xa48: Return(); Pop(8)

0xa49: Stack[-2] = 0
0xa4a: PushEmpty(int, int)
0xa4b: Push("branch")
0xa4c: @ GetVariable(Stack[-1], Stack[-2])
0xa4d: Pop(1)
0xa4e: Push((int) 0)
0xa4f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa51: Stack[-3] = (int) 1
0xa52: Return(); Pop(2)

0xa53: GOTO 0xa59

0xa54: Push((int) 1)
0xa55: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: Stack[-3] = (int) 2
0xa58: Return(); Pop(2)

0xa59: Stack[-3] = (int) 3
0xa5a: Return(); Pop(2)

0xa5b: PushEmpty()
0xa5c: Push(GlobalVars[1])
0xa5d: Pop(1); Push((bool) Stack[-1] == 0)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa5f: PushEmpty(int, object)
0xa60: Stack[-1] = Stack[-3]
0xa61: Push(-2, 1); TaskCall(0)
0xa62: Call2 0x0

0xa63: Pop(-2, 1); TaskReturn
0xa64: Pop(2)
0xa65: Push(GlobalVars[1])
0xa66: Stack[-1] = (bool) 1
0xa67: GlobalVars[1] = Stack[-1]; Pop(1)
0xa68: PushEmpty(bool, int)
0xa69: Stack[-1] = (int) 5
0xa6a: Call2 0x932

0xa6b: Pop(1)
0xa6c: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa6d: PushEmpty(int, object)
0xa6e: Stack[-1] = Stack[-3]
0xa6f: Push(-2, 1); TaskCall(2)
0xa70: Call2 0xef

0xa71: Pop(-2, 1); TaskReturn
0xa72: Pop(2)
0xa73: Return(); Pop(0)

0xa74: PushEmpty(bool, int)
0xa75: Stack[-1] = (int) 11
0xa76: Call2 0x932

0xa77: Pop(1)
0xa78: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa79: PushEmpty(int, object)
0xa7a: Stack[-1] = Stack[-3]
0xa7b: Push(-2, 1); TaskCall(4)
0xa7c: Call2 0x399

0xa7d: Pop(-2, 1); TaskReturn
0xa7e: Pop(2)
0xa7f: Return(); Pop(0)

0xa80: PushEmpty(bool, int)
0xa81: Stack[-1] = (int) 12
0xa82: Call2 0x932

0xa83: Pop(1)
0xa84: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa85: PushEmpty(int, object)
0xa86: Stack[-1] = Stack[-3]
0xa87: Push(-2, 1); TaskCall(6)
0xa88: Call2 0x4d2

0xa89: Pop(-2, 1); TaskReturn
0xa8a: Pop(2)
0xa8b: Return(); Pop(0)

0xa8c: PushEmpty(int, object)
0xa8d: Stack[-1] = Stack[-3]
0xa8e: Push(-2, 1); TaskCall(8)
0xa8f: Call2 0x5d5

0xa90: Pop(-2, 1); TaskReturn
0xa91: Pop(2)
0xa92: Return(); Pop(0)

