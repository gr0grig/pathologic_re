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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
0xe: Call2 0x653

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x651

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x655

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x657

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x640

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
0x31: Call2 0x4ed

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x42e

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
0x48: Call2 0x41c

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
0x59: Call2 0x5cb

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
0x72: Call2 0x5bf

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x75: PushEmpty(object, object)
0x76: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x78: Call2 0x5a4

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
0xa0: Call2 0x659

0xa1: Pop(0)
0xa2: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa3: @ lshWaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: PushEmpty(string)
0xa9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaa: Call2 0x4b8

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
0xbf: Call2 0x659

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
0xcf: Call2 0x4c8

0xd0: Pop(2)
0xd1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: Push((int) 1)
0xd5: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0x4e6

0xd8: Pop(0)
0xd9: Push((int) 26986)
0xda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x581

0xe0: Pop(2)
0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x594

0xe5: Pop(2)
0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x5b4

0xea: Pop(2)
0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x59e

0xef: Pop(2)
0xf0: Push((int) 41106)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x581

0xf7: Pop(2)
0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call2 0x594

0xfc: Pop(2)
0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x59e

0x101: Pop(2)
0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x5b4

0x106: Pop(2)
0x107: Push((int) 26985)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x577

0x10e: Pop(2)
0x10f: Push((int) 41103)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call2 0x577

0x116: Pop(2)
0x117: Push((int) 41102)
0x118: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x577

0x11e: Pop(2)
0x11f: Push((int) 41122)
0x120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x56e

0x126: Pop(2)
0x127: Push((int) 43720)
0x128: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x56e

0x12e: Pop(2)
0x12f: Push((int) 26973)
0x130: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: PushEmpty(object, object)
0x133: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x134: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x135: Call2 0x56e

0x136: Pop(2)
0x137: Push((int) 41121)
0x138: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: PushEmpty(object, object)
0x13b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13d: Call2 0x56e

0x13e: Pop(2)
0x13f: Push((int) 41110)
0x140: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: PushEmpty(object, object)
0x143: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x5aa

0x146: Pop(2)
0x147: Push((int) 26984)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0x5cb

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
0x165: Call2 0x5bf

0x166: Pop(1)
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(object, object)
0x169: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16b: Call2 0x5a4

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
0x1ba: Call2 0x5d7

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
0x278: Call2 0x659

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
0x299: Call2 0x4ed

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
0x2a6: Call2 0x4ed

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
0x312: Call2 0x4ed

0x313: Stack[-2] = Stack[-1]
0x314: Pop(1)
0x315: Call2 0x468

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
0x335: Call2 0x4b8

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
0x344: Call2 0x4b8

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
0x35b: Call2 0x4b8

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
0x36e: Call2 0x55d

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
0x392: Call2 0x556

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
0x3f2: Call2 0x4f3

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
0x402: Push((bool) 1)
0x403: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x404: Pop(1)
0x405: Push(CvectorIndex(Stack[-4], 0))
0x406: Push(CvectorIndex(Stack[-5], 2))
0x407: @ Rotate(Stack[-2], Stack[-1])
0x408: Pop(2)
0x409: PushEmpty(bool)
0x40a: Call2 0x659

0x40b: Pop(0)
0x40c: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40d: GOTO 0x416

0x40e: Push("head")
0x40f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x410: Pop(1)
0x411: Push(Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x413: Push("head")
0x414: @ LookAsyncCamera(Stack[-1])
0x415: Pop(1)
0x416: @ CameraWaitForPlayFinish()
0x417: Pop(0)
0x418: @ ResumeWorld()
0x419: Pop(0)
0x41a: Stack[-21] = (bool) 1
0x41b: Return(); Pop(18)

0x41c: PushEmpty(bool, bool)
0x41d: Push((bool) 1)
0x41e: @ CameraSwitchToNormal(Stack[-1])
0x41f: Pop(1)
0x420: PushEmpty(bool)
0x421: Call2 0x659

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x424: GOTO 0x42d

0x425: Push("head")
0x426: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x427: Pop(1)
0x428: Push(Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42a: Push("head")
0x42b: @ UnlookAsync(Stack[-1])
0x42c: Pop(1)
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, int, int, int)
0x42f: Push("voice_common")
0x430: @ GetVariable(Stack[-1], Stack[-3])
0x431: Pop(1)
0x432: Push(Stack[-2])
0x433: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[-7]
0x436: Call2 0x468

0x437: Pop(1)
0x438: Pop(1); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[-7]
0x43c: Call2 0x48d

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-6] = (bool) 0
0x441: Return(); Pop(4)

0x442: Push((int) 2)
0x443: @ irand(Stack[-2], Stack[-1])
0x444: Pop(1)
0x445: Push(Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x447: Push("voice_common")
0x448: Push((int) 1)
0x449: Pop(1); Push(Stack[-4] + Stack[-1]);
0x44a: Push((int) 3)
0x44b: Pop(2); Push(Stack[-2] % Stack[-1]);
0x44c: @ SetVariable(Stack[-2], Stack[-1])
0x44d: Pop(2)
0x44e: GOTO 0x453

0x44f: Push("voice_common")
0x450: Push((int) 0)
0x451: @ SetVariable(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: GOTO 0x466

0x454: PushEmpty(bool, object)
0x455: Stack[-1] = Stack[-7]
0x456: Call2 0x48d

0x457: Pop(1)
0x458: Pop(1); Push((bool) Stack[-1] == 0)
0x459: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45a: PushEmpty(bool, object)
0x45b: Stack[-1] = Stack[-7]
0x45c: Call2 0x468

0x45d: Pop(1)
0x45e: Pop(1); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-6] = (bool) 0
0x461: Return(); Pop(4)

0x462: Push("voice_common")
0x463: Push((int) 1)
0x464: @ SetVariable(Stack[-2], Stack[-1])
0x465: Pop(2)
0x466: Stack[-6] = (bool) 1
0x467: Return(); Pop(4)

0x468: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x469: Stack[-5] = "c"
0x46a: Stack[-4] = (int) 0
0x46b: Push((int) 1)
0x46c: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x46d: Push((int) 1)
0x46e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x46f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x470: @@ HasProperty(Stack[-1], Stack[-4])
0x471: Pop(1)
0x472: Pop(0); Push((bool) Stack[-3] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: GOTO 0x478

0x475: Push((int) 1)
0x476: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x477: GOTO 0x46b

0x478: Pop(0); Push((bool) Stack[-4] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-12] = (bool) 0
0x47b: Return(); Pop(10)

0x47c: Stack[-2] = (int) 0
0x47d: Push((int) 1)
0x47e: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: @ irand(Stack[-2], Stack[-4])
0x481: Pop(0)
0x482: Push((int) 1)
0x483: Pop(1); Push(Stack[-3] + Stack[-1]);
0x484: Pop(1); Push(Stack[-6] + Stack[-1]);
0x485: @@ GetProperty(Stack[-1], Stack[-2])
0x486: Pop(1)
0x487: PushEmpty(bool, string)
0x488: Stack[-1] = Stack[-3]
0x489: Call2 0x4d7

0x48a: Stack[-14] = Stack[-2]
0x48b: Pop(2)
0x48c: Return(); Pop(10)

0x48d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x48e: Push("d")
0x48f: PushEmpty(int)
0x490: Call2 0x54d

0x491: Pop(0)
0x492: Pop(2); Push(Stack[-2] + Stack[-1]);
0x493: Push("m")
0x494: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x495: Stack[-4] = (int) 0
0x496: Push((int) 1)
0x497: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x498: Push((int) 1)
0x499: Pop(1); Push(Stack[-5] + Stack[-1]);
0x49a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x49b: @@ HasProperty(Stack[-1], Stack[-4])
0x49c: Pop(1)
0x49d: Pop(0); Push((bool) Stack[-3] == 0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: GOTO 0x4a3

0x4a0: Push((int) 1)
0x4a1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4a2: GOTO 0x496

0x4a3: Pop(0); Push((bool) Stack[-4] == 0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-12] = (bool) 0
0x4a6: Return(); Pop(10)

0x4a7: Stack[-2] = (int) 0
0x4a8: Push((int) 1)
0x4a9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: @ irand(Stack[-2], Stack[-4])
0x4ac: Pop(0)
0x4ad: Push((int) 1)
0x4ae: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4af: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4b0: @@ GetProperty(Stack[-1], Stack[-2])
0x4b1: Pop(1)
0x4b2: PushEmpty(bool, string)
0x4b3: Stack[-1] = Stack[-3]
0x4b4: Call2 0x4d7

0x4b5: Stack[-14] = Stack[-2]
0x4b6: Pop(2)
0x4b7: Return(); Pop(10)

0x4b8: PushEmpty(bool, float, float, bool, float, float)
0x4b9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4ba: Pop(0)
0x4bb: Push(Stack[-3])
0x4bc: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x4bd: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4be: Pop(0)
0x4bf: Push((bool) 0)
0x4c0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(1)
0x4c2: GOTO 0x4c7

0x4c3: Push("Can't find lsh animation : ")
0x4c4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4c5: @ Trace(Stack[-1])
0x4c6: Pop(1)
0x4c7: Return(); Pop(6)

0x4c8: PushEmpty(bool, float, float, bool, float, float)
0x4c9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4ca: Pop(0)
0x4cb: Push(Stack[-3])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4cd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4ce: Pop(0)
0x4cf: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4d0: Pop(0)
0x4d1: GOTO 0x4d6

0x4d2: Push("Can't find lsh animation : ")
0x4d3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4d4: @ Trace(Stack[-1])
0x4d5: Pop(1)
0x4d6: Return(); Pop(6)

0x4d7: PushEmpty(bool, bool)
0x4d8: PushEmpty(bool)
0x4d9: Call2 0x659

0x4da: Pop(0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4dc: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4dd: Pop(0)
0x4de: Push(Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e0: @ lshPlaySpeech(Stack[-3])
0x4e1: Pop(0)
0x4e2: Stack[-4] = (bool) 1
0x4e3: Return(); Pop(2)

0x4e4: Stack[-4] = (bool) 0
0x4e5: Return(); Pop(2)

0x4e6: PushEmpty(bool)
0x4e7: Call2 0x659

0x4e8: Pop(0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4ea: @ lshStopSpeech()
0x4eb: Pop(0)
0x4ec: Return(); Pop(0)

0x4ed: PushEmpty(object, object)
0x4ee: @ self(Stack[-1])
0x4ef: Pop(0)
0x4f0: Stack[-3] = Stack[-1]
0x4f1: Return(); Pop(2)

0x4f2: Stack[-1] = 0
0x4f3: PushEmpty(float, float)
0x4f4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4f5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4f6: Push((float)0.0)
0x4f7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4f9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4fa: Return(); Pop(2)

0x4fb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4fc: Return(); Pop(2)

0x4fd: PushEmpty(int, int)
0x4fe: @ GetVariable(Stack[-3], Stack[-1])
0x4ff: Pop(0)
0x500: Stack[-4] = Stack[-1]
0x501: Return(); Pop(2)

0x502: PushEmpty(object, object)
0x503: @ CreateIntVector(Stack[-1])
0x504: Pop(0)
0x505: @@ add(Stack[-4])
0x506: Pop(0)
0x507: @@ add(Stack[-3])
0x508: Pop(0)
0x509: Push((int) 3)
0x50a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x50b: Pop(1)
0x50c: Return(); Pop(2)

0x50d: Stack[-1] = 0
0x50e: PushEmpty(int, int)
0x50f: PushEmpty(object, string, int)
0x510: Stack[-3] = Stack[-7]
0x511: Stack[-2] = "money"
0x512: Stack[-1] = Stack[-6]
0x513: Call2 0x3b8

0x514: Pop(3)
0x515: Push((int) 0)
0x516: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x518: Push("Money")
0x519: @ GetInvItemByName(Stack[-2], Stack[-1])
0x51a: Pop(1)
0x51b: PushEmpty(int, int)
0x51c: Stack[-2] = Stack[-3]
0x51d: Stack[-1] = Stack[-5]
0x51e: Call2 0x502

0x51f: Pop(2)
0x520: Return(); Pop(2)

0x521: PushEmpty(int, int, bool, int, int, bool)
0x522: @@ GetItemID(Stack[-3])
0x523: Pop(0)
0x524: Push("Category")
0x525: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x526: Pop(1)
0x527: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x528: Pop(0)
0x529: Pop(0); Push((bool) Stack[-1] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52b: @@ DropItems(Stack[-8], Stack[-7])
0x52c: Pop(0)
0x52d: GOTO 0x533

0x52e: PushEmpty(int, int)
0x52f: Stack[-2] = Stack[-5]
0x530: Stack[-1] = Stack[-9]
0x531: Call2 0x502

0x532: Pop(2)
0x533: Return(); Pop(6)

0x534: PushEmpty(object, object)
0x535: @ CreateInvItem(Stack[-1])
0x536: Pop(0)
0x537: @@ SetItemName(Stack[-4])
0x538: Pop(0)
0x539: PushEmpty(object, object, int)
0x53a: Stack[-3] = Stack[-8]
0x53b: Stack[-2] = Stack[-4]
0x53c: Stack[-1] = Stack[-6]
0x53d: Call2 0x521

0x53e: Pop(3)
0x53f: Return(); Pop(2)

0x540: Stack[-1] = 0
0x541: PushEmpty(object, object)
0x542: @ FindActor(Stack[-1], Stack[-4])
0x543: Pop(0)
0x544: Pop(0); Push((bool) Stack[-1] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-5] = (bool) 0
0x547: Return(); Pop(2)

0x548: @ Trigger(Stack[-1], Stack[-3])
0x549: Pop(0)
0x54a: Stack[-5] = (bool) 1
0x54b: Return(); Pop(2)

0x54c: Stack[-1] = 0
0x54d: PushEmpty(float, float)
0x54e: @ GetGameTime(Stack[-1])
0x54f: Pop(0)
0x550: Push((int) 1)
0x551: PushEmpty(int)
0x552: Push((int) 24)
0x553: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x554: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Return(); Pop(2)

0x556: PushEmpty(string, string)
0x557: Stack[-1] = "idle"
0x558: Push(Stack[-3])
0x559: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x55a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x55b: Stack[-4] = Stack[-1]
0x55c: Return(); Pop(2)

0x55d: PushEmpty(int, bool, int, bool)
0x55e: Stack[-2] = (int) 0
0x55f: Push("all")
0x560: PushEmpty(string, int)
0x561: Stack[-1] = Stack[-5]
0x562: Call2 0x556

0x563: Pop(1)
0x564: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x565: Pop(2)
0x566: Pop(0); Push((bool) Stack[-1] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: GOTO 0x56c

0x569: Push((int) 1)
0x56a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x56b: GOTO 0x55f

0x56c: Stack[-5] = Stack[-2]
0x56d: Return(); Pop(4)

0x56e: PushEmpty()
0x56f: Push("k3q04")
0x570: Push((int) 2)
0x571: @ SetVariable(Stack[-2], Stack[-1])
0x572: Pop(2)
0x573: PushEmpty()
0x574: Call2 0x60a

0x575: Pop(0)
0x576: Return(); Pop(0)

0x577: PushEmpty()
0x578: PushEmpty()
0x579: Call2 0x5f0

0x57a: Pop(0)
0x57b: PushEmpty(bool, string, string)
0x57c: Stack[-2] = "quest_k3_04"
0x57d: Stack[-1] = "completed"
0x57e: Call2 0x541

0x57f: Pop(3)
0x580: Return(); Pop(0)

0x581: PushEmpty(int, int)
0x582: PushEmpty()
0x583: Call2 0x5e3

0x584: Pop(0)
0x585: PushEmpty(bool, string, string)
0x586: Stack[-2] = "quest_k3_04"
0x587: Stack[-1] = "completed"
0x588: Call2 0x541

0x589: Pop(3)
0x58a: Push("k3q04Promise")
0x58b: @ GetVariable(Stack[-1], Stack[-2])
0x58c: Pop(1)
0x58d: Push(Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58f: Push("k3q04SendBurahMail")
0x590: Push((int) 1)
0x591: @ SetVariable(Stack[-2], Stack[-1])
0x592: Pop(2)
0x593: Return(); Pop(2)

0x594: PushEmpty()
0x595: Push("money2000 is given")
0x596: @ Trace(Stack[-1])
0x597: Pop(1)
0x598: PushEmpty(object, int)
0x599: Stack[-2] = Stack[-4]
0x59a: Stack[-1] = (int) 2000
0x59b: Call2 0x50e

0x59c: Pop(2)
0x59d: Return(); Pop(0)

0x59e: PushEmpty()
0x59f: Push("playsound")
0x5a0: Push("givemoney")
0x5a1: @ TriggerWorld(Stack[-2], Stack[-1])
0x5a2: Pop(2)
0x5a3: Return(); Pop(0)

0x5a4: PushEmpty()
0x5a5: Push("k3q04SawDanko")
0x5a6: Push((int) 1)
0x5a7: @ SetVariable(Stack[-2], Stack[-1])
0x5a8: Pop(2)
0x5a9: Return(); Pop(0)

0x5aa: PushEmpty()
0x5ab: PushEmpty()
0x5ac: Call2 0x5fd

0x5ad: Pop(0)
0x5ae: PushEmpty(bool, string, string)
0x5af: Stack[-2] = "quest_k3_04"
0x5b0: Stack[-1] = "fail"
0x5b1: Call2 0x541

0x5b2: Pop(3)
0x5b3: Return(); Pop(0)

0x5b4: PushEmpty()
0x5b5: Push("neomicin is given")
0x5b6: @ Trace(Stack[-1])
0x5b7: Pop(1)
0x5b8: PushEmpty(object, string, int)
0x5b9: Stack[-3] = Stack[-5]
0x5ba: Stack[-2] = "neomicin"
0x5bb: Stack[-1] = (int) 1
0x5bc: Call2 0x534

0x5bd: Pop(3)
0x5be: Return(); Pop(0)

0x5bf: PushEmpty()
0x5c0: PushEmpty(int, string)
0x5c1: Stack[-1] = "k3q04"
0x5c2: Call2 0x4fd

0x5c3: Pop(1)
0x5c4: Push((int) 1)
0x5c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-2] = (bool) 1
0x5c8: Return(); Pop(0)

0x5c9: Stack[-2] = (bool) 0
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty()
0x5cc: PushEmpty(int, string)
0x5cd: Stack[-1] = "k3q04"
0x5ce: Call2 0x4fd

0x5cf: Pop(1)
0x5d0: Push((int) 3)
0x5d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-2] = (bool) 1
0x5d4: Return(); Pop(0)

0x5d5: Stack[-2] = (bool) 0
0x5d6: Return(); Pop(0)

0x5d7: PushEmpty()
0x5d8: PushEmpty(int, string)
0x5d9: Stack[-1] = "k3q04LopuhTalk"
0x5da: Call2 0x4fd

0x5db: Pop(1)
0x5dc: Push((int) 0)
0x5dd: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-2] = (bool) 1
0x5e0: Return(); Pop(0)

0x5e1: Stack[-2] = (bool) 0
0x5e2: Return(); Pop(0)

0x5e3: PushEmpty(object, object)
0x5e4: Push((int) 359)
0x5e5: Push((int) 2)
0x5e6: Push((int) 525659)
0x5e7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(3)
0x5e9: PushEmpty(bool, object, int)
0x5ea: Stack[-2] = Stack[-4]
0x5eb: Stack[-1] = (int) 354
0x5ec: Call2 0x624

0x5ed: Pop(3)
0x5ee: Return(); Pop(2)

0x5ef: Stack[-1] = 0
0x5f0: PushEmpty(object, object)
0x5f1: Push((int) 358)
0x5f2: Push((int) 2)
0x5f3: Push((int) 525658)
0x5f4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f5: Pop(3)
0x5f6: PushEmpty(bool, object, int)
0x5f7: Stack[-2] = Stack[-4]
0x5f8: Stack[-1] = (int) 354
0x5f9: Call2 0x624

0x5fa: Pop(3)
0x5fb: Return(); Pop(2)

0x5fc: Stack[-1] = 0
0x5fd: PushEmpty(object, object)
0x5fe: Push((int) 784)
0x5ff: Push((int) 2)
0x600: Push((int) 542469)
0x601: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x602: Pop(3)
0x603: PushEmpty(bool, object, int)
0x604: Stack[-2] = Stack[-4]
0x605: Stack[-1] = (int) 354
0x606: Call2 0x624

0x607: Pop(3)
0x608: Return(); Pop(2)

0x609: Stack[-1] = 0
0x60a: PushEmpty(object, object)
0x60b: Push((int) 356)
0x60c: Push((int) 2)
0x60d: Push((int) 525656)
0x60e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: PushEmpty(bool, object, int)
0x611: Stack[-2] = Stack[-4]
0x612: Stack[-1] = (int) 354
0x613: Call2 0x624

0x614: Pop(3)
0x615: Return(); Pop(2)

0x616: Stack[-1] = 0
0x617: PushEmpty(object, object)
0x618: @ GetDiaryRoot(Stack[-1])
0x619: Pop(0)
0x61a: Pop(0); Push((bool) Stack[-1] == 0)
0x61b: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61c: Push("Can't retrieve diary root")
0x61d: @ Trace(Stack[-1])
0x61e: Pop(1)
0x61f: Stack[-3] = (bool) 0
0x620: Return(); Pop(2)

0x621: Stack[-3] = Stack[-1]
0x622: Return(); Pop(2)

0x623: Stack[-1] = 0
0x624: PushEmpty(object, object, int, object, object, int)
0x625: PushEmpty(object)
0x626: Call2 0x617

0x627: Stack[-4] = Stack[-1]
0x628: Pop(1)
0x629: @@ Find(Stack[-7], Stack[-2])
0x62a: Pop(0)
0x62b: Pop(0); Push((bool) Stack[-2] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x62d: Push("Can't find diary parent with id: ")
0x62e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x62f: @ Trace(Stack[-1])
0x630: Pop(1)
0x631: Stack[-9] = (bool) 0
0x632: Return(); Pop(6)

0x633: @@ AddChild(Stack[-8])
0x634: Pop(0)
0x635: Push((int) 7)
0x636: @ SendWorldWndMessage(Stack[-1])
0x637: Pop(1)
0x638: @@ GetCategory(Stack[-1])
0x639: Pop(0)
0x63a: @ SetDiarySection(Stack[-1])
0x63b: Pop(0)
0x63c: Stack[-9] = (bool) 0
0x63d: Return(); Pop(6)

0x63e: Stack[-2] = 0
0x63f: Stack[-3] = 0
0x640: PushEmpty(int, int)
0x641: Push("branch")
0x642: @ GetVariable(Stack[-1], Stack[-2])
0x643: Pop(1)
0x644: Push((int) 0)
0x645: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x647: Stack[-3] = (int) 1
0x648: Return(); Pop(2)

0x649: GOTO 0x64f

0x64a: Push((int) 1)
0x64b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64d: Stack[-3] = (int) 2
0x64e: Return(); Pop(2)

0x64f: Stack[-3] = (int) 3
0x650: Return(); Pop(2)

0x651: Stack[-1] = (int) 515573
0x652: Return(); Pop(0)

0x653: Stack[-1] = (int) 504032
0x654: Return(); Pop(0)

0x655: Stack[-1] = "ui/NPC_Bakalavr.png"
0x656: Return(); Pop(0)

0x657: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x658: Return(); Pop(0)

0x659: Stack[-1] = (bool) 1
0x65a: Return(); Pop(0)

