GlobalVarCount = 1
	G_VAR_0 object 

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
	Menace
	Untrust
	Smile
	cleanup
	restore
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	k3q04
	quest_k3_04
	completed
	k3q04Promise
	k3q04SendBurahMail
	money2000 is given
	playsound
	givemoney
	k3q04SawDanko
	fail
	neomicin is given
	neomicin
	k3q04LopuhTalk
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	GetInvItemByName (2 args)
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

RunOp = 0x28b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd3 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x28f Vars = (string)
		EVENT_6 Op = 0x2a3 Vars = ()
		EVENT_5 Op = 0x2b0 Vars = ()
		EVENT_7 Op = 0x2f9 Vars = (int)
		EVENT_45 Op = 0x33b Vars = (bool)
		EVENT_0 Op = 0x347 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3d7

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x651

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x64f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x653

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x655

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x63e

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
0x31: Call2 0x4eb

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x42c

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
0x48: Call2 0x41b

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
0x56: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x5c9

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xbd

0x5f: Pop(1)
0x60: Push((int) 525642)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 525640)
0x66: Push((int) 26983)
0x67: Push((int) 26982)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 539159)
0x6b: Push((int) 41099)
0x6c: Push((int) 41098)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x9f

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x5bd

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x75: PushEmpty(object, object)
0x76: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x78: Call2 0x5a2

0x79: Pop(2)
0x7a: PushEmpty(string)
0x7b: Stack[-1] = "Neutral"
0x7c: Call2 0xbd

0x7d: Pop(1)
0x7e: Push((int) 525624)
0x7f: @@ SetMessage(Stack[-1])
0x80: Pop(1)
0x81: @@ ClearReplies()
0x82: Pop(0)
0x83: Push((int) 525625)
0x84: Push((int) 41108)
0x85: Push((int) 26967)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x9f

0x89: PushEmpty(string)
0x8a: Stack[-1] = "Neutral"
0x8b: Call2 0xbd

0x8c: Pop(1)
0x8d: Push((int) 525632)
0x8e: @@ SetMessage(Stack[-1])
0x8f: Pop(1)
0x90: @@ ClearReplies()
0x91: Pop(0)
0x92: Push((int) 525633)
0x93: Push((int) -1)
0x94: Push((int) 26975)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: Push((int) 539168)
0x98: Push((int) -1)
0x99: Push((int) 41107)
0x9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b: Pop(3)
0x9c: GOTO 0x9f

0x9d: Return(); Pop(0)

0x9e: GOTO 0x55

0x9f: PushEmpty(bool)
0xa0: Call2 0x657

0xa1: Pop(0)
0xa2: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa3: @ lshWaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: PushEmpty(string)
0xa9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaa: Call2 0x4b6

0xab: Pop(1)
0xac: GOTO 0xa3

0xad: GOTO 0xbc

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: @ WaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: Push("all")
0xb8: Push("idle")
0xb9: @ PlayAnimation(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: GOTO 0xb2

0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: PushEmpty(bool)
0xbf: Call2 0x657

0xc0: Pop(0)
0xc1: Pop(1); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Return(); Pop(0)

0xc4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: PushEmpty(string, bool)
0xc8: Stack[-2] = Stack[-3]
0xc9: Push("")
0xca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-1] = (bool) 0
0xcd: GOTO 0xcf

0xce: Stack[-1] = (bool) 1
0xcf: Call2 0x4c6

0xd0: Pop(2)
0xd1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: Push((int) 1)
0xd5: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0x4e4

0xd8: Pop(0)
0xd9: Push((int) 26986)
0xda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x57f

0xe0: Pop(2)
0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x592

0xe5: Pop(2)
0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x5b2

0xea: Pop(2)
0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x59c

0xef: Pop(2)
0xf0: Push((int) 41106)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x57f

0xf7: Pop(2)
0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call2 0x592

0xfc: Pop(2)
0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x59c

0x101: Pop(2)
0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x5b2

0x106: Pop(2)
0x107: Push((int) 26985)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x575

0x10e: Pop(2)
0x10f: Push((int) 41103)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x575

0x116: Pop(2)
0x117: Push((int) 41102)
0x118: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x575

0x11e: Pop(2)
0x11f: Push((int) 41122)
0x120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x56c

0x126: Pop(2)
0x127: Push((int) 43720)
0x128: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x56c

0x12e: Pop(2)
0x12f: Push((int) 26973)
0x130: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object, object)
0x133: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x134: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x135: Call2 0x56c

0x136: Pop(2)
0x137: Push((int) 41121)
0x138: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: PushEmpty(object, object)
0x13b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13d: Call2 0x56c

0x13e: Pop(2)
0x13f: Push((int) 41110)
0x140: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: PushEmpty(object, object)
0x143: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x5a8

0x146: Pop(2)
0x147: Push((int) 26984)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0x5c9

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0xbd

0x152: Pop(1)
0x153: Push((int) 525642)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 525640)
0x159: Push((int) 26983)
0x15a: Push((int) 26982)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 539159)
0x15e: Push((int) 41099)
0x15f: Push((int) 41098)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: PushEmpty(bool, object)
0x164: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x165: Call2 0x5bd

0x166: Pop(1)
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(object, object)
0x169: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16b: Call2 0x5a2

0x16c: Pop(2)
0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0xbd

0x170: Pop(1)
0x171: Push((int) 525624)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 525625)
0x177: Push((int) 41108)
0x178: Push((int) 26967)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: PushEmpty(string)
0x17d: Stack[-1] = "Neutral"
0x17e: Call2 0xbd

0x17f: Pop(1)
0x180: Push((int) 525632)
0x181: @@ SetMessage(Stack[-1])
0x182: Pop(1)
0x183: @@ ClearReplies()
0x184: Pop(0)
0x185: Push((int) 525633)
0x186: Push((int) -1)
0x187: Push((int) 26975)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Push((int) 539168)
0x18b: Push((int) -1)
0x18c: Push((int) 41107)
0x18d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18e: Pop(3)
0x18f: Return(); Pop(0)

0x190: Push((int) 41108)
0x191: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x193: PushEmpty(string)
0x194: Stack[-1] = "Menace"
0x195: Call2 0xbd

0x196: Pop(1)
0x197: Push((int) 539169)
0x198: @@ SetMessage(Stack[-1])
0x199: Pop(1)
0x19a: @@ ClearReplies()
0x19b: Pop(0)
0x19c: Push((int) 539170)
0x19d: Push((int) 41111)
0x19e: Push((int) 41109)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Push((int) 539171)
0x1a2: Push((int) -1)
0x1a3: Push((int) 41110)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Push((int) 41111)
0x1a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1aa: PushEmpty(string)
0x1ab: Stack[-1] = "Untrust"
0x1ac: Call2 0xbd

0x1ad: Pop(1)
0x1ae: Push((int) 539172)
0x1af: @@ SetMessage(Stack[-1])
0x1b0: Pop(1)
0x1b1: @@ ClearReplies()
0x1b2: Pop(0)
0x1b3: Push((int) 539173)
0x1b4: Push((int) 26968)
0x1b5: Push((int) 41112)
0x1b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(3)
0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Call2 0x5d5

0x1bb: Pop(1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: Push((int) 539174)
0x1be: Push((int) 26968)
0x1bf: Push((int) 41113)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Push((int) 26968)
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1c6: PushEmpty(string)
0x1c7: Stack[-1] = "Untrust"
0x1c8: Call2 0xbd

0x1c9: Pop(1)
0x1ca: Push((int) 525626)
0x1cb: @@ SetMessage(Stack[-1])
0x1cc: Pop(1)
0x1cd: @@ ClearReplies()
0x1ce: Pop(0)
0x1cf: Push((int) 539175)
0x1d0: Push((int) 41116)
0x1d1: Push((int) 41115)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Push((int) 539177)
0x1d5: Push((int) 41118)
0x1d6: Push((int) 41117)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 41118)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral"
0x1df: Call2 0xbd

0x1e0: Pop(1)
0x1e1: Push((int) 539178)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 539179)
0x1e7: Push((int) 41116)
0x1e8: Push((int) 41119)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Push((int) 539180)
0x1ec: Push((int) -1)
0x1ed: Push((int) 41121)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 41116)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Menace"
0x1f6: Call2 0xbd

0x1f7: Pop(1)
0x1f8: Push((int) 539176)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 525627)
0x1fe: Push((int) 26970)
0x1ff: Push((int) 26969)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Push((int) 525631)
0x203: Push((int) -1)
0x204: Push((int) 26973)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 26970)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Menace"
0x20d: Call2 0xbd

0x20e: Pop(1)
0x20f: Push((int) 525628)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 539181)
0x215: Push((int) -1)
0x216: Push((int) 41122)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Push((int) 541553)
0x21a: Push((int) -1)
0x21b: Push((int) 43720)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Push((int) 41099)
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x222: PushEmpty(string)
0x223: Stack[-1] = "Untrust"
0x224: Call2 0xbd

0x225: Pop(1)
0x226: Push((int) 539160)
0x227: @@ SetMessage(Stack[-1])
0x228: Pop(1)
0x229: @@ ClearReplies()
0x22a: Pop(0)
0x22b: Push((int) 539161)
0x22c: Push((int) 41101)
0x22d: Push((int) 41100)
0x22e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22f: Pop(3)
0x230: Push((int) 539163)
0x231: Push((int) -1)
0x232: Push((int) 41102)
0x233: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x234: Pop(3)
0x235: Return(); Pop(0)

0x236: Push((int) 41101)
0x237: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x238: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x239: PushEmpty(string)
0x23a: Stack[-1] = "Menace"
0x23b: Call2 0xbd

0x23c: Pop(1)
0x23d: Push((int) 539162)
0x23e: @@ SetMessage(Stack[-1])
0x23f: Pop(1)
0x240: @@ ClearReplies()
0x241: Pop(0)
0x242: Push((int) 525643)
0x243: Push((int) -1)
0x244: Push((int) 26985)
0x245: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x246: Pop(3)
0x247: Push((int) 539164)
0x248: Push((int) -1)
0x249: Push((int) 41103)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 26983)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Smile"
0x252: Call2 0xbd

0x253: Pop(1)
0x254: Push((int) 525641)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 525644)
0x25a: Push((int) -1)
0x25b: Push((int) 26986)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Push((int) 539165)
0x25f: Push((int) 41105)
0x260: Push((int) 41104)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Return(); Pop(0)

0x264: Push((int) 41105)
0x265: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x267: PushEmpty(string)
0x268: Stack[-1] = "Smile"
0x269: Call2 0xbd

0x26a: Pop(1)
0x26b: Push((int) 539166)
0x26c: @@ SetMessage(Stack[-1])
0x26d: Pop(1)
0x26e: @@ ClearReplies()
0x26f: Pop(0)
0x270: Push((int) 539167)
0x271: Push((int) -1)
0x272: Push((int) 41106)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Return(); Pop(0)

0x276: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x277: PushEmpty(bool)
0x278: Call2 0x657

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27b: @ lshStopAnimation()
0x27c: Pop(0)
0x27d: GOTO 0x280

0x27e: @ StopAnimation()
0x27f: Pop(0)
0x280: Return(); Pop(0)

0x281: GOTO 0xd4

0x282: Return(); Pop(0)

0x283: PushEmpty()
0x284: PushEmpty(int, object)
0x285: Stack[-1] = Stack[-3]
0x286: Push(-2, 1); TaskCall(0)
0x287: Call2 0x0

0x288: Pop(-2, 1); TaskReturn
0x289: Pop(2)
0x28a: Return(); Pop(0)

0x28b: PushEmpty()
0x28c: Call2 0x2b4

0x28d: Pop(0)
0x28e: Return(); Pop(0)

0x28f: PushEmpty(bool, bool)
0x290: Push("cleanup")
0x291: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x293: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x294: @ IsLoaded(Stack[-1])
0x295: Pop(0)
0x296: Pop(0); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(object)
0x299: Call2 0x4eb

0x29a: Pop(0)
0x29b: @ RemoveActor(Stack[-1])
0x29c: Pop(1)
0x29d: GOTO 0x2a2

0x29e: Push("restore")
0x29f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2a2: Return(); Pop(2)

0x2a3: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a5: PushEmpty(object)
0x2a6: Call2 0x4eb

0x2a7: Pop(0)
0x2a8: @ RemoveActor(Stack[-1])
0x2a9: Pop(1)
0x2aa: @ Hold()
0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x31f

0x2ae: Pop(0)
0x2af: Return(); Pop(0)

0x2b0: PushEmpty()
0x2b1: Call2 0x32e

0x2b2: Pop(0)
0x2b3: Return(); Pop(0)

0x2b4: PushEmpty(bool)
0x2b5: Call2 0x3d2

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: @ Hold()
0x2ba: Pop(0)
0x2bb: @ GetDirection(Stack[-0])
0x2bc: Pop(0)
0x2bd: PushEmpty()
0x2be: Call2 0x364

0x2bf: Pop(0)
0x2c0: GOTO 0x2bd

0x2c1: Return(); Pop(0)

0x2c2: PushEmpty(object, object)
0x2c3: Push("player")
0x2c4: @ FindActor(Stack[-2], Stack[-1])
0x2c5: Pop(1)
0x2c6: Pop(0); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: Stack[-3] = (bool) 0
0x2c9: Return(); Pop(2)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[-3]
0x2cc: Call2 0x3c9

0x2cd: Stack[-5] = Stack[-2]
0x2ce: Pop(2)
0x2cf: Return(); Pop(2)

0x2d0: Stack[-1] = 0
0x2d1: Push(CvectorIndex(Stack[-0], 0))
0x2d2: Push(CvectorIndex(Stack[-0], 2))
0x2d3: @ RotateAsync(Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: Return(); Pop(0)

0x2d6: PushEmpty(object, bool, object, bool)
0x2d7: Push("player")
0x2d8: @ FindActor(Stack[-3], Stack[-1])
0x2d9: Pop(1)
0x2da: Pop(0); Push((bool) Stack[-2] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-5] = (bool) 0
0x2dd: Return(); Pop(4)

0x2de: PushEmpty(float, object)
0x2df: Stack[-1] = Stack[-4]
0x2e0: Call2 0x3b0

0x2e1: Pop(1)
0x2e2: Push((float)90000.0)
0x2e3: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-5] = (bool) 0
0x2e6: Return(); Pop(4)

0x2e7: @ CanSee(Stack[-1], Stack[-2])
0x2e8: Pop(0)
0x2e9: Stack[-5] = Stack[-1]
0x2ea: Return(); Pop(4)

0x2eb: Stack[-2] = 0
0x2ec: PushEmpty(float, float)
0x2ed: Push((int) 8)
0x2ee: Push((int) 16)
0x2ef: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: Push((int) 10)
0x2f2: @ SetTimer(Stack[-1], Stack[-2])
0x2f3: Pop(1)
0x2f4: Return(); Pop(2)

0x2f5: Push((int) 10)
0x2f6: @ KillTimer(Stack[-1])
0x2f7: Pop(1)
0x2f8: Return(); Pop(0)

0x2f9: PushEmpty()
0x2fa: Push((int) 10)
0x2fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x2fd: PushEmpty()
0x2fe: Call2 0x2f5

0x2ff: Pop(0)
0x300: PushEmpty(bool)
0x301: Stack[-1] = (bool) 0
0x302: PushEmpty(bool)
0x303: Call2 0x3d2

0x304: Pop(0)
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: PushEmpty(bool)
0x307: Call2 0x2d6

0x308: Pop(0)
0x309: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x30a: Stack[-1] = (bool) 1
0x30b: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x30c: PushEmpty(bool)
0x30d: Call2 0x2c2

0x30e: Pop(0)
0x30f: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x310: PushEmpty(bool, object)
0x311: PushEmpty(object)
0x312: Call2 0x4eb

0x313: Stack[-2] = Stack[-1]
0x314: Pop(1)
0x315: Call2 0x466

0x316: Pop(2)
0x317: GOTO 0x31e

0x318: PushEmpty()
0x319: Call2 0x2d1

0x31a: Pop(0)
0x31b: PushEmpty()
0x31c: Call2 0x2ec

0x31d: Pop(0)
0x31e: Return(); Pop(0)

0x31f: PushEmpty()
0x320: Call2 0x3ab

0x321: Pop(0)
0x322: PushEmpty()
0x323: Call2 0x2f5

0x324: Pop(0)
0x325: @ lshStopSpeech()
0x326: Pop(0)
0x327: @ lshStopAnimation()
0x328: Pop(0)
0x329: @ StopAsync()
0x32a: Pop(0)
0x32b: @ Hold()
0x32c: Pop(0)
0x32d: Return(); Pop(0)

0x32e: @ StopGroup0()
0x32f: Pop(0)
0x330: PushEmpty()
0x331: Call2 0x2f5

0x332: Pop(0)
0x333: PushEmpty(string)
0x334: Stack[-1] = "Neutral"
0x335: Call2 0x4b6

0x336: Pop(1)
0x337: PushEmpty()
0x338: Call2 0x2ec

0x339: Pop(0)
0x33a: Return(); Pop(0)

0x33b: PushEmpty()
0x33c: Push(Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33e: PushEmpty()
0x33f: Call2 0x2ec

0x340: Pop(0)
0x341: GOTO 0x346

0x342: PushEmpty(string)
0x343: Stack[-1] = "Neutral"
0x344: Call2 0x4b6

0x345: Pop(1)
0x346: Return(); Pop(0)

0x347: PushEmpty(bool, bool)
0x348: @ IsOverrideActive(Stack[-1])
0x349: Pop(0)
0x34a: Pop(0); Push((bool) Stack[-1] == 0)
0x34b: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x34c: EventDisable(0)
0x34d: PushEmpty()
0x34e: Call2 0x3ab

0x34f: Pop(0)
0x350: PushEmpty(bool, object)
0x351: Stack[-1] = Stack[-5]
0x352: Call2 0x3c9

0x353: Pop(2)
0x354: EventEnable(0)
0x355: PushEmpty(object)
0x356: Stack[-1] = Stack[-4]
0x357: Call2 0x283

0x358: Pop(1)
0x359: PushEmpty(string)
0x35a: Stack[-1] = "Neutral"
0x35b: Call2 0x4b6

0x35c: Pop(1)
0x35d: PushEmpty()
0x35e: Call2 0x2f5

0x35f: Pop(0)
0x360: PushEmpty()
0x361: Call2 0x2ec

0x362: Pop(0)
0x363: Return(); Pop(2)

0x364: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x365: @ WaitForAnimEnd()
0x366: Pop(0)
0x367: PushEmpty(bool)
0x368: Call2 0x3d2

0x369: Pop(0)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: Return(); Pop(12)

0x36d: PushEmpty(int)
0x36e: Call2 0x55b

0x36f: Stack[-7] = Stack[-1]
0x370: Pop(1)
0x371: Stack[-5] = (int) 0
0x372: PushEmpty(bool)
0x373: Stack[-1] = (bool) 0
0x374: Push((int) 5)
0x375: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x377: PushEmpty(bool)
0x378: Call2 0x3d2

0x379: Pop(0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: Stack[-1] = (bool) 1
0x37c: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x37d: Pop(0); Push((bool) Stack[-6] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37f: Push((int) 3)
0x380: @ Sleep(Stack[-1], Stack[-5])
0x381: Pop(1)
0x382: Pop(0); Push((bool) Stack[-4] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: GOTO 0x3a6

0x385: GOTO 0x39b

0x386: @ irand(Stack[-3], Stack[-6])
0x387: Pop(0)
0x388: Push((int) 5)
0x389: @ irand(Stack[-3], Stack[-1])
0x38a: Pop(1)
0x38b: Push((int) 0)
0x38c: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: Stack[-3] = (int) 0
0x38f: Push("all")
0x390: PushEmpty(string, int)
0x391: Stack[-1] = Stack[-6]
0x392: Call2 0x554

0x393: Pop(1)
0x394: @ PlayAnimation(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: @ WaitForAnimEnd(Stack[-1])
0x397: Pop(0)
0x398: Pop(0); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: GOTO 0x3a6

0x39b: PushEmpty(bool)
0x39c: Call2 0x3a9

0x39d: Pop(0)
0x39e: Pop(1); Push((bool) Stack[-1] == 0)
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: GOTO 0x3a6

0x3a1: @ ResetAAS()
0x3a2: Pop(0)
0x3a3: Push((int) 1)
0x3a4: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3a5: GOTO 0x372

0x3a6: @ ResetAAS()
0x3a7: Pop(0)
0x3a8: Return(); Pop(12)

0x3a9: Stack[-1] = (bool) 1
0x3aa: Return(); Pop(0)

0x3ab: @ StopAnimation()
0x3ac: Pop(0)
0x3ad: @ StopGroup0()
0x3ae: Pop(0)
0x3af: Return(); Pop(0)

0x3b0: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3b1: @ GetPosition(Stack[-3])
0x3b2: Pop(0)
0x3b3: @@ GetPosition(Stack[-2])
0x3b4: Pop(0)
0x3b5: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3b6: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3b7: Return(); Pop(6)

0x3b8: PushEmpty(int, int)
0x3b9: @@ GetProperty(Stack[-4], Stack[-1])
0x3ba: Pop(0)
0x3bb: Pop(0); Push(Stack[-1] + Stack[-3]);
0x3bc: @@ SetProperty(Stack[-5], Stack[-1])
0x3bd: Pop(1)
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3c0: @ GetPosition(Stack[-3])
0x3c1: Pop(0)
0x3c2: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3c3: Push(CvectorIndex(Stack[-2], 0))
0x3c4: Push(CvectorIndex(Stack[-3], 2))
0x3c5: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3c6: Pop(2)
0x3c7: Stack[-8] = Stack[-1]
0x3c8: Return(); Pop(6)

0x3c9: PushEmpty(cvector, cvector)
0x3ca: @@ GetPosition(Stack[-1])
0x3cb: Pop(0)
0x3cc: PushEmpty(bool, cvector)
0x3cd: Stack[-1] = Stack[-3]
0x3ce: Call2 0x3bf

0x3cf: Stack[-6] = Stack[-2]
0x3d0: Pop(2)
0x3d1: Return(); Pop(2)

0x3d2: PushEmpty(bool, bool)
0x3d3: @ IsLoaded(Stack[-1])
0x3d4: Pop(0)
0x3d5: Stack[-3] = Stack[-1]
0x3d6: Return(); Pop(2)

0x3d7: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3d8: @@ GetPosition(Stack[-8])
0x3d9: Pop(0)
0x3da: @@ GetEyesHeight(Stack[-9])
0x3db: Pop(0)
0x3dc: Push(CvectorIndex(Stack[-8], 1))
0x3dd: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3de: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3df: @ GetPosition(Stack[-7])
0x3e0: Pop(0)
0x3e1: @ GetEyesHeight(Stack[-9])
0x3e2: Pop(0)
0x3e3: Push(CvectorIndex(Stack[-7], 1))
0x3e4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3e5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3e6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3e7: Push(CvectorIndex(Stack[-6], 1))
0x3e8: Stack[-1] = (int) 0
0x3e9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3ea: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3eb: Pop(1); Push(Sqrt(Stack[-1]))
0x3ec: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3ed: Stack[-5] = -Stack[-6]; Pop(0);
0x3ee: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3ef: PushEmpty(cvector, cvector)
0x3f0: Push(CVector(0.0, 1.0, 0.0))
0x3f1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3f2: Call2 0x4f1

0x3f3: Pop(1)
0x3f4: Push((int) 25)
0x3f5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f7: Push(CVector(0.0, 10.0, 0.0))
0x3f8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3f9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3fa: @ IsOverrideActive(Stack[-2])
0x3fb: Pop(0)
0x3fc: Push(Stack[-2])
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-21] = (bool) 0
0x3ff: Return(); Pop(18)

0x400: @ StopWorld()
0x401: Pop(0)
0x402: @ CameraTransit(Stack[-3], Stack[-5])
0x403: Pop(0)
0x404: Push(CvectorIndex(Stack[-4], 0))
0x405: Push(CvectorIndex(Stack[-5], 2))
0x406: @ Rotate(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: PushEmpty(bool)
0x409: Call2 0x657

0x40a: Pop(0)
0x40b: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40c: GOTO 0x415

0x40d: Push("head")
0x40e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x40f: Pop(1)
0x410: Push(Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x412: Push("head")
0x413: @ LookAsyncCamera(Stack[-1])
0x414: Pop(1)
0x415: @ CameraWaitForPlayFinish()
0x416: Pop(0)
0x417: @ ResumeWorld()
0x418: Pop(0)
0x419: Stack[-21] = (bool) 1
0x41a: Return(); Pop(18)

0x41b: PushEmpty(bool, bool)
0x41c: @ CameraSwitchToNormal()
0x41d: Pop(0)
0x41e: PushEmpty(bool)
0x41f: Call2 0x657

0x420: Pop(0)
0x421: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x422: GOTO 0x42b

0x423: Push("head")
0x424: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x425: Pop(1)
0x426: Push(Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x428: Push("head")
0x429: @ UnlookAsync(Stack[-1])
0x42a: Pop(1)
0x42b: Return(); Pop(2)

0x42c: PushEmpty(int, int, int, int)
0x42d: Push("voice_common")
0x42e: @ GetVariable(Stack[-1], Stack[-3])
0x42f: Pop(1)
0x430: Push(Stack[-2])
0x431: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x432: PushEmpty(bool, object)
0x433: Stack[-1] = Stack[-7]
0x434: Call2 0x466

0x435: Pop(1)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[-7]
0x43a: Call2 0x48b

0x43b: Pop(1)
0x43c: Pop(1); Push((bool) Stack[-1] == 0)
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-6] = (bool) 0
0x43f: Return(); Pop(4)

0x440: Push((int) 2)
0x441: @ irand(Stack[-2], Stack[-1])
0x442: Pop(1)
0x443: Push(Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x445: Push("voice_common")
0x446: Push((int) 1)
0x447: Pop(1); Push(Stack[-4] + Stack[-1]);
0x448: Push((int) 3)
0x449: Pop(2); Push(Stack[-2] % Stack[-1]);
0x44a: @ SetVariable(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: GOTO 0x451

0x44d: Push("voice_common")
0x44e: Push((int) 0)
0x44f: @ SetVariable(Stack[-2], Stack[-1])
0x450: Pop(2)
0x451: GOTO 0x464

0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[-7]
0x454: Call2 0x48b

0x455: Pop(1)
0x456: Pop(1); Push((bool) Stack[-1] == 0)
0x457: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x458: PushEmpty(bool, object)
0x459: Stack[-1] = Stack[-7]
0x45a: Call2 0x466

0x45b: Pop(1)
0x45c: Pop(1); Push((bool) Stack[-1] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45e: Stack[-6] = (bool) 0
0x45f: Return(); Pop(4)

0x460: Push("voice_common")
0x461: Push((int) 1)
0x462: @ SetVariable(Stack[-2], Stack[-1])
0x463: Pop(2)
0x464: Stack[-6] = (bool) 1
0x465: Return(); Pop(4)

0x466: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x467: Stack[-5] = "c"
0x468: Stack[-4] = (int) 0
0x469: Push((int) 1)
0x46a: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x46b: Push((int) 1)
0x46c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x46d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x46e: @@ HasProperty(Stack[-1], Stack[-4])
0x46f: Pop(1)
0x470: Pop(0); Push((bool) Stack[-3] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x476

0x473: Push((int) 1)
0x474: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x475: GOTO 0x469

0x476: Pop(0); Push((bool) Stack[-4] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-12] = (bool) 0
0x479: Return(); Pop(10)

0x47a: Stack[-2] = (int) 0
0x47b: Push((int) 1)
0x47c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x47d: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47e: @ irand(Stack[-2], Stack[-4])
0x47f: Pop(0)
0x480: Push((int) 1)
0x481: Pop(1); Push(Stack[-3] + Stack[-1]);
0x482: Pop(1); Push(Stack[-6] + Stack[-1]);
0x483: @@ GetProperty(Stack[-1], Stack[-2])
0x484: Pop(1)
0x485: PushEmpty(bool, string)
0x486: Stack[-1] = Stack[-3]
0x487: Call2 0x4d5

0x488: Stack[-14] = Stack[-2]
0x489: Pop(2)
0x48a: Return(); Pop(10)

0x48b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x48c: Push("d")
0x48d: PushEmpty(int)
0x48e: Call2 0x54b

0x48f: Pop(0)
0x490: Pop(2); Push(Stack[-2] + Stack[-1]);
0x491: Push("m")
0x492: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Stack[-4] = (int) 0
0x494: Push((int) 1)
0x495: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x496: Push((int) 1)
0x497: Pop(1); Push(Stack[-5] + Stack[-1]);
0x498: Pop(1); Push(Stack[-6] + Stack[-1]);
0x499: @@ HasProperty(Stack[-1], Stack[-4])
0x49a: Pop(1)
0x49b: Pop(0); Push((bool) Stack[-3] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: GOTO 0x4a1

0x49e: Push((int) 1)
0x49f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4a0: GOTO 0x494

0x4a1: Pop(0); Push((bool) Stack[-4] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-12] = (bool) 0
0x4a4: Return(); Pop(10)

0x4a5: Stack[-2] = (int) 0
0x4a6: Push((int) 1)
0x4a7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: @ irand(Stack[-2], Stack[-4])
0x4aa: Pop(0)
0x4ab: Push((int) 1)
0x4ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4ad: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4ae: @@ GetProperty(Stack[-1], Stack[-2])
0x4af: Pop(1)
0x4b0: PushEmpty(bool, string)
0x4b1: Stack[-1] = Stack[-3]
0x4b2: Call2 0x4d5

0x4b3: Stack[-14] = Stack[-2]
0x4b4: Pop(2)
0x4b5: Return(); Pop(10)

0x4b6: PushEmpty(bool, float, float, bool, float, float)
0x4b7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4b8: Pop(0)
0x4b9: Push(Stack[-3])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4bc: Pop(0)
0x4bd: Push((bool) 0)
0x4be: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4bf: Pop(1)
0x4c0: GOTO 0x4c5

0x4c1: Push("Can't find lsh animation : ")
0x4c2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c3: @ Trace(Stack[-1])
0x4c4: Pop(1)
0x4c5: Return(); Pop(6)

0x4c6: PushEmpty(bool, float, float, bool, float, float)
0x4c7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4c8: Pop(0)
0x4c9: Push(Stack[-3])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cb: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4cc: Pop(0)
0x4cd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4ce: Pop(0)
0x4cf: GOTO 0x4d4

0x4d0: Push("Can't find lsh animation : ")
0x4d1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4d2: @ Trace(Stack[-1])
0x4d3: Pop(1)
0x4d4: Return(); Pop(6)

0x4d5: PushEmpty(bool, bool)
0x4d6: PushEmpty(bool)
0x4d7: Call2 0x657

0x4d8: Pop(0)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4da: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4db: Pop(0)
0x4dc: Push(Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4de: @ lshPlaySpeech(Stack[-3])
0x4df: Pop(0)
0x4e0: Stack[-4] = (bool) 1
0x4e1: Return(); Pop(2)

0x4e2: Stack[-4] = (bool) 0
0x4e3: Return(); Pop(2)

0x4e4: PushEmpty(bool)
0x4e5: Call2 0x657

0x4e6: Pop(0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: @ lshStopSpeech()
0x4e9: Pop(0)
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty(object, object)
0x4ec: @ self(Stack[-1])
0x4ed: Pop(0)
0x4ee: Stack[-3] = Stack[-1]
0x4ef: Return(); Pop(2)

0x4f0: Stack[-1] = 0
0x4f1: PushEmpty(float, float)
0x4f2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4f3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4f4: Push((float)0.0)
0x4f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4f8: Return(); Pop(2)

0x4f9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4fa: Return(); Pop(2)

0x4fb: PushEmpty(int, int)
0x4fc: @ GetVariable(Stack[-3], Stack[-1])
0x4fd: Pop(0)
0x4fe: Stack[-4] = Stack[-1]
0x4ff: Return(); Pop(2)

0x500: PushEmpty(object, object)
0x501: @ CreateIntVector(Stack[-1])
0x502: Pop(0)
0x503: @@ add(Stack[-4])
0x504: Pop(0)
0x505: @@ add(Stack[-3])
0x506: Pop(0)
0x507: Push((int) 3)
0x508: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x509: Pop(1)
0x50a: Return(); Pop(2)

0x50b: Stack[-1] = 0
0x50c: PushEmpty(int, int)
0x50d: PushEmpty(object, string, int)
0x50e: Stack[-3] = Stack[-7]
0x50f: Stack[-2] = "money"
0x510: Stack[-1] = Stack[-6]
0x511: Call2 0x3b8

0x512: Pop(3)
0x513: Push((int) 0)
0x514: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x516: Push("Money")
0x517: @ GetInvItemByName(Stack[-2], Stack[-1])
0x518: Pop(1)
0x519: PushEmpty(int, int)
0x51a: Stack[-2] = Stack[-3]
0x51b: Stack[-1] = Stack[-5]
0x51c: Call2 0x500

0x51d: Pop(2)
0x51e: Return(); Pop(2)

0x51f: PushEmpty(int, int, bool, int, int, bool)
0x520: @@ GetItemID(Stack[-3])
0x521: Pop(0)
0x522: Push("Category")
0x523: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x524: Pop(1)
0x525: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-1] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x529: @@ DropItems(Stack[-8], Stack[-7])
0x52a: Pop(0)
0x52b: GOTO 0x531

0x52c: PushEmpty(int, int)
0x52d: Stack[-2] = Stack[-5]
0x52e: Stack[-1] = Stack[-9]
0x52f: Call2 0x500

0x530: Pop(2)
0x531: Return(); Pop(6)

0x532: PushEmpty(object, object)
0x533: @ CreateInvItem(Stack[-1])
0x534: Pop(0)
0x535: @@ SetItemName(Stack[-4])
0x536: Pop(0)
0x537: PushEmpty(object, object, int)
0x538: Stack[-3] = Stack[-8]
0x539: Stack[-2] = Stack[-4]
0x53a: Stack[-1] = Stack[-6]
0x53b: Call2 0x51f

0x53c: Pop(3)
0x53d: Return(); Pop(2)

0x53e: Stack[-1] = 0
0x53f: PushEmpty(object, object)
0x540: @ FindActor(Stack[-1], Stack[-4])
0x541: Pop(0)
0x542: Pop(0); Push((bool) Stack[-1] == 0)
0x543: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x544: Stack[-5] = (bool) 0
0x545: Return(); Pop(2)

0x546: @ Trigger(Stack[-1], Stack[-3])
0x547: Pop(0)
0x548: Stack[-5] = (bool) 1
0x549: Return(); Pop(2)

0x54a: Stack[-1] = 0
0x54b: PushEmpty(float, float)
0x54c: @ GetGameTime(Stack[-1])
0x54d: Pop(0)
0x54e: Push((int) 1)
0x54f: PushEmpty(int)
0x550: Push((int) 24)
0x551: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x552: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x553: Return(); Pop(2)

0x554: PushEmpty(string, string)
0x555: Stack[-1] = "idle"
0x556: Push(Stack[-3])
0x557: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x558: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x559: Stack[-4] = Stack[-1]
0x55a: Return(); Pop(2)

0x55b: PushEmpty(int, bool, int, bool)
0x55c: Stack[-2] = (int) 0
0x55d: Push("all")
0x55e: PushEmpty(string, int)
0x55f: Stack[-1] = Stack[-5]
0x560: Call2 0x554

0x561: Pop(1)
0x562: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x563: Pop(2)
0x564: Pop(0); Push((bool) Stack[-1] == 0)
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: GOTO 0x56a

0x567: Push((int) 1)
0x568: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x569: GOTO 0x55d

0x56a: Stack[-5] = Stack[-2]
0x56b: Return(); Pop(4)

0x56c: PushEmpty()
0x56d: Push("k3q04")
0x56e: Push((int) 2)
0x56f: @ SetVariable(Stack[-2], Stack[-1])
0x570: Pop(2)
0x571: PushEmpty()
0x572: Call2 0x608

0x573: Pop(0)
0x574: Return(); Pop(0)

0x575: PushEmpty()
0x576: PushEmpty()
0x577: Call2 0x5ee

0x578: Pop(0)
0x579: PushEmpty(bool, string, string)
0x57a: Stack[-2] = "quest_k3_04"
0x57b: Stack[-1] = "completed"
0x57c: Call2 0x53f

0x57d: Pop(3)
0x57e: Return(); Pop(0)

0x57f: PushEmpty(int, int)
0x580: PushEmpty()
0x581: Call2 0x5e1

0x582: Pop(0)
0x583: PushEmpty(bool, string, string)
0x584: Stack[-2] = "quest_k3_04"
0x585: Stack[-1] = "completed"
0x586: Call2 0x53f

0x587: Pop(3)
0x588: Push("k3q04Promise")
0x589: @ GetVariable(Stack[-1], Stack[-2])
0x58a: Pop(1)
0x58b: Push(Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58d: Push("k3q04SendBurahMail")
0x58e: Push((int) 1)
0x58f: @ SetVariable(Stack[-2], Stack[-1])
0x590: Pop(2)
0x591: Return(); Pop(2)

0x592: PushEmpty()
0x593: Push("money2000 is given")
0x594: @ Trace(Stack[-1])
0x595: Pop(1)
0x596: PushEmpty(object, int)
0x597: Stack[-2] = Stack[-4]
0x598: Stack[-1] = (int) 2000
0x599: Call2 0x50c

0x59a: Pop(2)
0x59b: Return(); Pop(0)

0x59c: PushEmpty()
0x59d: Push("playsound")
0x59e: Push("givemoney")
0x59f: @ TriggerWorld(Stack[-2], Stack[-1])
0x5a0: Pop(2)
0x5a1: Return(); Pop(0)

0x5a2: PushEmpty()
0x5a3: Push("k3q04SawDanko")
0x5a4: Push((int) 1)
0x5a5: @ SetVariable(Stack[-2], Stack[-1])
0x5a6: Pop(2)
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: PushEmpty()
0x5aa: Call2 0x5fb

0x5ab: Pop(0)
0x5ac: PushEmpty(bool, string, string)
0x5ad: Stack[-2] = "quest_k3_04"
0x5ae: Stack[-1] = "fail"
0x5af: Call2 0x53f

0x5b0: Pop(3)
0x5b1: Return(); Pop(0)

0x5b2: PushEmpty()
0x5b3: Push("neomicin is given")
0x5b4: @ Trace(Stack[-1])
0x5b5: Pop(1)
0x5b6: PushEmpty(object, string, int)
0x5b7: Stack[-3] = Stack[-5]
0x5b8: Stack[-2] = "neomicin"
0x5b9: Stack[-1] = (int) 1
0x5ba: Call2 0x532

0x5bb: Pop(3)
0x5bc: Return(); Pop(0)

0x5bd: PushEmpty()
0x5be: PushEmpty(int, string)
0x5bf: Stack[-1] = "k3q04"
0x5c0: Call2 0x4fb

0x5c1: Pop(1)
0x5c2: Push((int) 1)
0x5c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c5: Stack[-2] = (bool) 1
0x5c6: Return(); Pop(0)

0x5c7: Stack[-2] = (bool) 0
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: PushEmpty(int, string)
0x5cb: Stack[-1] = "k3q04"
0x5cc: Call2 0x4fb

0x5cd: Pop(1)
0x5ce: Push((int) 3)
0x5cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-2] = (bool) 1
0x5d2: Return(); Pop(0)

0x5d3: Stack[-2] = (bool) 0
0x5d4: Return(); Pop(0)

0x5d5: PushEmpty()
0x5d6: PushEmpty(int, string)
0x5d7: Stack[-1] = "k3q04LopuhTalk"
0x5d8: Call2 0x4fb

0x5d9: Pop(1)
0x5da: Push((int) 0)
0x5db: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-2] = (bool) 1
0x5de: Return(); Pop(0)

0x5df: Stack[-2] = (bool) 0
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty(object, object)
0x5e2: Push((int) 359)
0x5e3: Push((int) 2)
0x5e4: Push((int) 525659)
0x5e5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e6: Pop(3)
0x5e7: PushEmpty(bool, object, int)
0x5e8: Stack[-2] = Stack[-4]
0x5e9: Stack[-1] = (int) 354
0x5ea: Call2 0x622

0x5eb: Pop(3)
0x5ec: Return(); Pop(2)

0x5ed: Stack[-1] = 0
0x5ee: PushEmpty(object, object)
0x5ef: Push((int) 358)
0x5f0: Push((int) 2)
0x5f1: Push((int) 525658)
0x5f2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: PushEmpty(bool, object, int)
0x5f5: Stack[-2] = Stack[-4]
0x5f6: Stack[-1] = (int) 354
0x5f7: Call2 0x622

0x5f8: Pop(3)
0x5f9: Return(); Pop(2)

0x5fa: Stack[-1] = 0
0x5fb: PushEmpty(object, object)
0x5fc: Push((int) 784)
0x5fd: Push((int) 2)
0x5fe: Push((int) 542469)
0x5ff: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(3)
0x601: PushEmpty(bool, object, int)
0x602: Stack[-2] = Stack[-4]
0x603: Stack[-1] = (int) 354
0x604: Call2 0x622

0x605: Pop(3)
0x606: Return(); Pop(2)

0x607: Stack[-1] = 0
0x608: PushEmpty(object, object)
0x609: Push((int) 356)
0x60a: Push((int) 2)
0x60b: Push((int) 525656)
0x60c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x60d: Pop(3)
0x60e: PushEmpty(bool, object, int)
0x60f: Stack[-2] = Stack[-4]
0x610: Stack[-1] = (int) 354
0x611: Call2 0x622

0x612: Pop(3)
0x613: Return(); Pop(2)

0x614: Stack[-1] = 0
0x615: PushEmpty(object, object)
0x616: @ GetDiaryRoot(Stack[-1])
0x617: Pop(0)
0x618: Pop(0); Push((bool) Stack[-1] == 0)
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: Push("Can't retrieve diary root")
0x61b: @ Trace(Stack[-1])
0x61c: Pop(1)
0x61d: Stack[-3] = (bool) 0
0x61e: Return(); Pop(2)

0x61f: Stack[-3] = Stack[-1]
0x620: Return(); Pop(2)

0x621: Stack[-1] = 0
0x622: PushEmpty(object, object, int, object, object, int)
0x623: PushEmpty(object)
0x624: Call2 0x615

0x625: Stack[-4] = Stack[-1]
0x626: Pop(1)
0x627: @@ Find(Stack[-7], Stack[-2])
0x628: Pop(0)
0x629: Pop(0); Push((bool) Stack[-2] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62b: Push("Can't find diary parent with id: ")
0x62c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x62d: @ Trace(Stack[-1])
0x62e: Pop(1)
0x62f: Stack[-9] = (bool) 0
0x630: Return(); Pop(6)

0x631: @@ AddChild(Stack[-8])
0x632: Pop(0)
0x633: Push((int) 7)
0x634: @ SendWorldWndMessage(Stack[-1])
0x635: Pop(1)
0x636: @@ GetCategory(Stack[-1])
0x637: Pop(0)
0x638: @ SetDiarySection(Stack[-1])
0x639: Pop(0)
0x63a: Stack[-9] = (bool) 0
0x63b: Return(); Pop(6)

0x63c: Stack[-2] = 0
0x63d: Stack[-3] = 0
0x63e: PushEmpty(int, int)
0x63f: Push("branch")
0x640: @ GetVariable(Stack[-1], Stack[-2])
0x641: Pop(1)
0x642: Push((int) 0)
0x643: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x645: Stack[-3] = (int) 1
0x646: Return(); Pop(2)

0x647: GOTO 0x64d

0x648: Push((int) 1)
0x649: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64b: Stack[-3] = (int) 2
0x64c: Return(); Pop(2)

0x64d: Stack[-3] = (int) 3
0x64e: Return(); Pop(2)

0x64f: Stack[-1] = (int) 515573
0x650: Return(); Pop(0)

0x651: Stack[-1] = (int) 504032
0x652: Return(); Pop(0)

0x653: Stack[-1] = "ui/NPC_Bakalavr.png"
0x654: Return(); Pop(0)

0x655: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x656: Return(); Pop(0)

0x657: Stack[-1] = (bool) 1
0x658: Return(); Pop(0)

