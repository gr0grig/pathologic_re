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
	Confusion
	SetMessage
	ClearReplies
	AddReply
	Warning
	all
	idle
	Rage
	Neutral
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Rubin.png
	ui/NPC_Rubin_b.png
	k3q03
	k5q01
	k5q01RubinGotoGeorg
	pt_map_georg
	AddMark
	tvirin
	RemoveItemByType
	fresh_meat
	k11q01SoulCount
	ook11Rubin1
	playsound
	giveitem
	ShowMap
	blackvaccine2 is given
	black_vaccine
	k11q01
	GetItemCountOfType
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x83c
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2fe Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x511 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x670 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x812 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x885 Vars = (int)
		EVENT_6 Op = 0x8ab Vars = ()
		EVENT_5 Op = 0x8ba Vars = ()
		EVENT_45 Op = 0x8c7 Vars = (bool)
		EVENT_0 Op = 0x8d3 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x95c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xadf

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xadd

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xae1

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xae3

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xc9d

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
0x31: Call2 0xa70

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x9b1

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
0x48: Call2 0x9a0

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
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0xb74

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Confusion"
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 525584)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 525585)
0x66: Push((int) 26933)
0x67: Push((int) 26932)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 540637)
0x6b: Push((int) 26933)
0x6c: Push((int) 42660)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Warning"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 525591)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 525592)
0x7a: Push((int) -1)
0x7b: Push((int) 26939)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 540621)
0x7f: Push((int) -1)
0x80: Push((int) 42643)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0xae5

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0xa3b

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0xae5

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0xa4b

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0xa69

0xbf: Pop(0)
0xc0: Push((int) 26936)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0xae7

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0xb53

0xcc: Pop(2)
0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0xb69

0xd1: Pop(2)
0xd2: Push((int) 26937)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0xae7

0xd9: Pop(2)
0xda: Push((int) 42688)
0xdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0xae7

0xe1: Pop(2)
0xe2: Push((int) 26931)
0xe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0xb74

0xe8: Pop(1)
0xe9: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Confusion"
0xec: Call2 0xa4

0xed: Pop(1)
0xee: Push((int) 525584)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 525585)
0xf4: Push((int) 26933)
0xf5: Push((int) 26932)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 540637)
0xf9: Push((int) 26933)
0xfa: Push((int) 42660)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "Warning"
0x100: Call2 0xa4

0x101: Pop(1)
0x102: Push((int) 525591)
0x103: @@ SetMessage(Stack[-1])
0x104: Pop(1)
0x105: @@ ClearReplies()
0x106: Pop(0)
0x107: Push((int) 525592)
0x108: Push((int) -1)
0x109: Push((int) 26939)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Push((int) 540621)
0x10d: Push((int) -1)
0x10e: Push((int) 42643)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 26933)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Confusion"
0x117: Call2 0xa4

0x118: Pop(1)
0x119: Push((int) 525586)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 525587)
0x11f: Push((int) 42662)
0x120: Push((int) 26934)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Push((int) 540639)
0x124: Push((int) 42664)
0x125: Push((int) 42663)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Push((int) 42664)
0x12a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: PushEmpty(string)
0x12d: Stack[-1] = "Rage"
0x12e: Call2 0xa4

0x12f: Pop(1)
0x130: Push((int) 540640)
0x131: @@ SetMessage(Stack[-1])
0x132: Pop(1)
0x133: @@ ClearReplies()
0x134: Pop(0)
0x135: Push((int) 540641)
0x136: Push((int) 26935)
0x137: Push((int) 42665)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: Return(); Pop(0)

0x13b: Push((int) 26935)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x13e: PushEmpty(string)
0x13f: Stack[-1] = "Warning"
0x140: Call2 0xa4

0x141: Pop(1)
0x142: Push((int) 525588)
0x143: @@ SetMessage(Stack[-1])
0x144: Pop(1)
0x145: @@ ClearReplies()
0x146: Pop(0)
0x147: Push((int) 540642)
0x148: Push((int) 42667)
0x149: Push((int) 42666)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 42667)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Warning"
0x152: Call2 0xa4

0x153: Pop(1)
0x154: Push((int) 540643)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 525589)
0x15a: Push((int) -1)
0x15b: Push((int) 26936)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 540625)
0x15f: Push((int) 42648)
0x160: Push((int) 42647)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: Return(); Pop(0)

0x164: Push((int) 42648)
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Rage"
0x169: Call2 0xa4

0x16a: Pop(1)
0x16b: Push((int) 540626)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 525590)
0x171: Push((int) -1)
0x172: Push((int) 26937)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Push((int) 540661)
0x176: Push((int) 42689)
0x177: Push((int) 42690)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Return(); Pop(0)

0x17b: Push((int) 42689)
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x17e: PushEmpty(string)
0x17f: Stack[-1] = "Rage"
0x180: Call2 0xa4

0x181: Pop(1)
0x182: Push((int) 540660)
0x183: @@ SetMessage(Stack[-1])
0x184: Pop(1)
0x185: @@ ClearReplies()
0x186: Pop(0)
0x187: Push((int) 540659)
0x188: Push((int) -1)
0x189: Push((int) 42688)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 42662)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Warning"
0x192: Call2 0xa4

0x193: Pop(1)
0x194: Push((int) 540638)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 540644)
0x19a: Push((int) 26935)
0x19b: Push((int) 42668)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 540645)
0x19f: Push((int) 42670)
0x1a0: Push((int) 42669)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Push((int) 42670)
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = "Warning"
0x1a9: Call2 0xa4

0x1aa: Pop(1)
0x1ab: Push((int) 540646)
0x1ac: @@ SetMessage(Stack[-1])
0x1ad: Pop(1)
0x1ae: @@ ClearReplies()
0x1af: Pop(0)
0x1b0: Push((int) 540647)
0x1b1: Push((int) 42673)
0x1b2: Push((int) 42671)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: Push((int) 540649)
0x1b6: Push((int) 42673)
0x1b7: Push((int) 42675)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 42673)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Warning"
0x1c0: Call2 0xa4

0x1c1: Pop(1)
0x1c2: Push((int) 540648)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 540650)
0x1c8: Push((int) 42678)
0x1c9: Push((int) 42677)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 42678)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Warning"
0x1d2: Call2 0xa4

0x1d3: Pop(1)
0x1d4: Push((int) 540651)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 540652)
0x1da: Push((int) 42680)
0x1db: Push((int) 42679)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 42680)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call2 0xa4

0x1e5: Pop(1)
0x1e6: Push((int) 540653)
0x1e7: @@ SetMessage(Stack[-1])
0x1e8: Pop(1)
0x1e9: @@ ClearReplies()
0x1ea: Pop(0)
0x1eb: Push((int) 540654)
0x1ec: Push((int) 42691)
0x1ed: Push((int) 42681)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Push((int) 540655)
0x1f1: Push((int) 42683)
0x1f2: Push((int) 42682)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 42683)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral"
0x1fb: Call2 0xa4

0x1fc: Pop(1)
0x1fd: Push((int) 540656)
0x1fe: @@ SetMessage(Stack[-1])
0x1ff: Pop(1)
0x200: @@ ClearReplies()
0x201: Pop(0)
0x202: Push((int) 540657)
0x203: Push((int) 26935)
0x204: Push((int) 42684)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Push((int) 540658)
0x208: Push((int) 26935)
0x209: Push((int) 42685)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Return(); Pop(0)

0x20d: Push((int) 42691)
0x20e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x210: PushEmpty(string)
0x211: Stack[-1] = "Warning"
0x212: Call2 0xa4

0x213: Pop(1)
0x214: Push((int) 540662)
0x215: @@ SetMessage(Stack[-1])
0x216: Pop(1)
0x217: @@ ClearReplies()
0x218: Pop(0)
0x219: Push((int) 540663)
0x21a: Push((int) 26935)
0x21b: Push((int) 42692)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x220: PushEmpty(bool)
0x221: Call2 0xae5

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x224: @ lshStopAnimation()
0x225: Pop(0)
0x226: GOTO 0x229

0x227: @ StopAnimation()
0x228: Pop(0)
0x229: Return(); Pop(0)

0x22a: GOTO 0xbb

0x22b: Return(); Pop(0)

0x22c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x22d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x22e: PushEmpty(bool, object, float)
0x22f: Stack[-2] = Stack[-12]
0x230: Stack[-1] = (float) 70.0
0x231: Call2 0x95c

0x232: Pop(2)
0x233: Pop(1); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: Stack[-10] = (int) -2
0x236: Return(); Pop(8)

0x237: @ CreateDialog(Stack[-4])
0x238: Pop(0)
0x239: PushEmpty(int)
0x23a: Call2 0xadf

0x23b: Pop(0)
0x23c: @@ SetNPCName(Stack[-1])
0x23d: Pop(1)
0x23e: PushEmpty(int)
0x23f: Call2 0xadd

0x240: Pop(0)
0x241: @@ SetNPCDescription(Stack[-1])
0x242: Pop(1)
0x243: PushEmpty(string)
0x244: Call2 0xae1

0x245: Pop(0)
0x246: @@ SetPhoto(Stack[-1])
0x247: Pop(1)
0x248: PushEmpty(string)
0x249: Call2 0xae3

0x24a: Pop(0)
0x24b: @@ SetPhoto2(Stack[-1])
0x24c: Pop(1)
0x24d: PushEmpty(int)
0x24e: Call2 0xc9d

0x24f: Pop(0)
0x250: @@ SetPlayerName(Stack[-1])
0x251: Pop(1)
0x252: Stack[-2] = (int) -1
0x253: @ IsOverrideActive(Stack[-3])
0x254: Pop(0)
0x255: Push(Stack[-3])
0x256: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x257: Stack[-10] = (int) -2
0x258: Return(); Pop(8)

0x259: @ DoDialog(Stack[-4])
0x25a: Pop(0)
0x25b: PushEmpty(bool, object)
0x25c: PushEmpty(object)
0x25d: Call2 0xa70

0x25e: Stack[-2] = Stack[-1]
0x25f: Pop(1)
0x260: Call2 0x9b1

0x261: Pop(2)
0x262: PushEmpty(object, object)
0x263: Stack[-2] = Stack[-11]
0x264: Stack[-1] = Stack[-6]
0x265: Push(-2, 4); TaskCall(3)
0x266: Call2 0x27d

0x267: Pop(-2, 4); TaskReturn
0x268: Pop(2)
0x269: @@ IsDialogEnd(Stack[-1])
0x26a: Pop(0)
0x26b: Pop(0); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26d: @ sync()
0x26e: Pop(0)
0x26f: @@ IsDialogEnd(Stack[-1])
0x270: Pop(0)
0x271: GOTO 0x26b

0x272: PushEmpty(object)
0x273: Stack[-1] = Stack[-10]
0x274: Call2 0x9a0

0x275: Pop(1)
0x276: @ StopDialog(Stack[-4])
0x277: Pop(0)
0x278: @@ GetReturnValue(Stack[-2])
0x279: Pop(0)
0x27a: Stack[-10] = Stack[-2]
0x27b: Return(); Pop(8)

0x27c: Stack[-4] = 0
0x27d: PushEmpty()
0x27e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x27f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x280: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x281: Push((int) 1)
0x282: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x283: PushEmpty(string)
0x284: Stack[-1] = "Confusion"
0x285: Call2 0x2e8

0x286: Pop(1)
0x287: Push((int) 525847)
0x288: @@ SetMessage(Stack[-1])
0x289: Pop(1)
0x28a: @@ ClearReplies()
0x28b: Pop(0)
0x28c: PushEmpty(bool)
0x28d: Stack[-1] = (bool) 0
0x28e: PushEmpty(bool, object)
0x28f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x290: Call2 0xb80

0x291: Pop(1)
0x292: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x295: Call2 0xb8c

0x296: Pop(1)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Stack[-1] = (bool) 1
0x29a: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29b: Push((int) 525848)
0x29c: Push((int) 27148)
0x29d: Push((int) 27147)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 0
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Call2 0xb80

0x2a5: Pop(1)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a9: Call2 0xb8c

0x2aa: Pop(1)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[-1] = (bool) 1
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ae: Push((int) 525851)
0x2af: Push((int) 27151)
0x2b0: Push((int) 27150)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b5: Call2 0xb96

0x2b6: Pop(1)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b8: Push((int) 525875)
0x2b9: Push((int) 27175)
0x2ba: Push((int) 27174)
0x2bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(3)
0x2bd: Push((int) 525862)
0x2be: Push((int) -1)
0x2bf: Push((int) 27161)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Push((int) 529118)
0x2c3: Push((int) -1)
0x2c4: Push((int) 30563)
0x2c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c6: Pop(3)
0x2c7: GOTO 0x2ca

0x2c8: Return(); Pop(0)

0x2c9: GOTO 0x281

0x2ca: PushEmpty(bool)
0x2cb: Call2 0xae5

0x2cc: Pop(0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2ce: @ lshWaitForAnimEnd()
0x2cf: Pop(0)
0x2d0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: GOTO 0x2d8

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2d5: Call2 0xa3b

0x2d6: Pop(1)
0x2d7: GOTO 0x2ce

0x2d8: GOTO 0x2e7

0x2d9: Push("all")
0x2da: Push("idle")
0x2db: @ PlayAnimation(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: @ WaitForAnimEnd()
0x2de: Pop(0)
0x2df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2e7

0x2e2: Push("all")
0x2e3: Push("idle")
0x2e4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e5: Pop(2)
0x2e6: GOTO 0x2dd

0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(bool)
0x2ea: Call2 0xae5

0x2eb: Pop(0)
0x2ec: Pop(1); Push((bool) Stack[-1] == 0)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Return(); Pop(0)

0x2ef: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Return(); Pop(0)

0x2f2: PushEmpty(string, bool)
0x2f3: Stack[-2] = Stack[-3]
0x2f4: Push("")
0x2f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: Stack[-1] = (bool) 0
0x2f8: GOTO 0x2fa

0x2f9: Stack[-1] = (bool) 1
0x2fa: Call2 0xa4b

0x2fb: Pop(2)
0x2fc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2fd: Return(); Pop(0)

0x2fe: PushEmpty()
0x2ff: Push((int) 1)
0x300: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x301: PushEmpty()
0x302: Call2 0xa69

0x303: Pop(0)
0x304: Push((int) 27160)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x307: PushEmpty(object, object)
0x308: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x309: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30a: Call2 0xaf0

0x30b: Pop(2)
0x30c: PushEmpty(object, object)
0x30d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30f: Call2 0xb10

0x310: Pop(2)
0x311: PushEmpty(object, object)
0x312: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x313: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x314: Call2 0xb59

0x315: Pop(2)
0x316: Push((int) 27178)
0x317: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x319: PushEmpty(object, object)
0x31a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31c: Call2 0xb07

0x31d: Pop(2)
0x31e: Push((int) 27146)
0x31f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x321: PushEmpty(string)
0x322: Stack[-1] = "Confusion"
0x323: Call2 0x2e8

0x324: Pop(1)
0x325: Push((int) 525847)
0x326: @@ SetMessage(Stack[-1])
0x327: Pop(1)
0x328: @@ ClearReplies()
0x329: Pop(0)
0x32a: PushEmpty(bool)
0x32b: Stack[-1] = (bool) 0
0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call2 0xb80

0x32f: Pop(1)
0x330: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x333: Call2 0xb8c

0x334: Pop(1)
0x335: Pop(1); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Stack[-1] = (bool) 1
0x338: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x339: Push((int) 525848)
0x33a: Push((int) 27148)
0x33b: Push((int) 27147)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: PushEmpty(bool)
0x33f: Stack[-1] = (bool) 0
0x340: PushEmpty(bool, object)
0x341: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x342: Call2 0xb80

0x343: Pop(1)
0x344: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x345: PushEmpty(bool, object)
0x346: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x347: Call2 0xb8c

0x348: Pop(1)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Stack[-1] = (bool) 1
0x34b: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x34c: Push((int) 525851)
0x34d: Push((int) 27151)
0x34e: Push((int) 27150)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: PushEmpty(bool, object)
0x352: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x353: Call2 0xb96

0x354: Pop(1)
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: Push((int) 525875)
0x357: Push((int) 27175)
0x358: Push((int) 27174)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Push((int) 525862)
0x35c: Push((int) -1)
0x35d: Push((int) 27161)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: Push((int) 529118)
0x361: Push((int) -1)
0x362: Push((int) 30563)
0x363: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x364: Pop(3)
0x365: Return(); Pop(0)

0x366: Push((int) 27175)
0x367: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x369: PushEmpty(string)
0x36a: Stack[-1] = "Warning"
0x36b: Call2 0x2e8

0x36c: Pop(1)
0x36d: Push((int) 525876)
0x36e: @@ SetMessage(Stack[-1])
0x36f: Pop(1)
0x370: @@ ClearReplies()
0x371: Pop(0)
0x372: Push((int) 525877)
0x373: Push((int) 27177)
0x374: Push((int) 27176)
0x375: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: Push((int) 27177)
0x379: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "Neutral"
0x37d: Call2 0x2e8

0x37e: Pop(1)
0x37f: Push((int) 525878)
0x380: @@ SetMessage(Stack[-1])
0x381: Pop(1)
0x382: @@ ClearReplies()
0x383: Pop(0)
0x384: Push((int) 529128)
0x385: Push((int) 30575)
0x386: Push((int) 30574)
0x387: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: Return(); Pop(0)

0x38a: Push((int) 30575)
0x38b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x38d: PushEmpty(string)
0x38e: Stack[-1] = "Neutral"
0x38f: Call2 0x2e8

0x390: Pop(1)
0x391: Push((int) 529129)
0x392: @@ SetMessage(Stack[-1])
0x393: Pop(1)
0x394: @@ ClearReplies()
0x395: Pop(0)
0x396: Push((int) 525879)
0x397: Push((int) -1)
0x398: Push((int) 27178)
0x399: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39a: Pop(3)
0x39b: Return(); Pop(0)

0x39c: Push((int) 27151)
0x39d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x39f: PushEmpty(string)
0x3a0: Stack[-1] = "Neutral"
0x3a1: Call2 0x2e8

0x3a2: Pop(1)
0x3a3: Push((int) 525852)
0x3a4: @@ SetMessage(Stack[-1])
0x3a5: Pop(1)
0x3a6: @@ ClearReplies()
0x3a7: Pop(0)
0x3a8: Push((int) 529119)
0x3a9: Push((int) 30565)
0x3aa: Push((int) 30564)
0x3ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ac: Pop(3)
0x3ad: Return(); Pop(0)

0x3ae: Push((int) 30565)
0x3af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b1: PushEmpty(string)
0x3b2: Stack[-1] = "Neutral"
0x3b3: Call2 0x2e8

0x3b4: Pop(1)
0x3b5: Push((int) 529120)
0x3b6: @@ SetMessage(Stack[-1])
0x3b7: Pop(1)
0x3b8: @@ ClearReplies()
0x3b9: Pop(0)
0x3ba: Push((int) 525853)
0x3bb: Push((int) 27153)
0x3bc: Push((int) 27152)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Push((int) 529121)
0x3c0: Push((int) 30567)
0x3c1: Push((int) 30566)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Return(); Pop(0)

0x3c5: Push((int) 30567)
0x3c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c8: PushEmpty(string)
0x3c9: Stack[-1] = "Neutral"
0x3ca: Call2 0x2e8

0x3cb: Pop(1)
0x3cc: Push((int) 529122)
0x3cd: @@ SetMessage(Stack[-1])
0x3ce: Pop(1)
0x3cf: @@ ClearReplies()
0x3d0: Pop(0)
0x3d1: Push((int) 529123)
0x3d2: Push((int) 27153)
0x3d3: Push((int) 30568)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 27153)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Warning"
0x3dc: Call2 0x2e8

0x3dd: Pop(1)
0x3de: Push((int) 525854)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 529124)
0x3e4: Push((int) 30571)
0x3e5: Push((int) 30570)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 30571)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Warning"
0x3ee: Call2 0x2e8

0x3ef: Pop(1)
0x3f0: Push((int) 529125)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 525855)
0x3f6: Push((int) 27155)
0x3f7: Push((int) 27154)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 27155)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Confusion"
0x400: Call2 0x2e8

0x401: Pop(1)
0x402: Push((int) 525856)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 529126)
0x408: Push((int) 30573)
0x409: Push((int) 30572)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 30573)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Warning"
0x412: Call2 0x2e8

0x413: Pop(1)
0x414: Push((int) 529127)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 525857)
0x41a: Push((int) 27157)
0x41b: Push((int) 27156)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 27157)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Warning"
0x424: Call2 0x2e8

0x425: Pop(1)
0x426: Push((int) 525858)
0x427: @@ SetMessage(Stack[-1])
0x428: Pop(1)
0x429: @@ ClearReplies()
0x42a: Pop(0)
0x42b: Push((int) 525859)
0x42c: Push((int) 27159)
0x42d: Push((int) 27158)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Return(); Pop(0)

0x431: Push((int) 27159)
0x432: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Neutral"
0x436: Call2 0x2e8

0x437: Pop(1)
0x438: Push((int) 525860)
0x439: @@ SetMessage(Stack[-1])
0x43a: Pop(1)
0x43b: @@ ClearReplies()
0x43c: Pop(0)
0x43d: Push((int) 525861)
0x43e: Push((int) -1)
0x43f: Push((int) 27160)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Return(); Pop(0)

0x443: Push((int) 27148)
0x444: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x446: PushEmpty(string)
0x447: Stack[-1] = "Confusion"
0x448: Call2 0x2e8

0x449: Pop(1)
0x44a: Push((int) 525849)
0x44b: @@ SetMessage(Stack[-1])
0x44c: Pop(1)
0x44d: @@ ClearReplies()
0x44e: Pop(0)
0x44f: Push((int) 525850)
0x450: Push((int) -1)
0x451: Push((int) 27149)
0x452: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: Return(); Pop(0)

0x455: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x456: PushEmpty(bool)
0x457: Call2 0xae5

0x458: Pop(0)
0x459: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45a: @ lshStopAnimation()
0x45b: Pop(0)
0x45c: GOTO 0x45f

0x45d: @ StopAnimation()
0x45e: Pop(0)
0x45f: Return(); Pop(0)

0x460: GOTO 0x2ff

0x461: Return(); Pop(0)

0x462: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x463: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x464: PushEmpty(bool, object, float)
0x465: Stack[-2] = Stack[-12]
0x466: Stack[-1] = (float) 70.0
0x467: Call2 0x95c

0x468: Pop(2)
0x469: Pop(1); Push((bool) Stack[-1] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-10] = (int) -2
0x46c: Return(); Pop(8)

0x46d: @ CreateDialog(Stack[-4])
0x46e: Pop(0)
0x46f: PushEmpty(int)
0x470: Call2 0xadf

0x471: Pop(0)
0x472: @@ SetNPCName(Stack[-1])
0x473: Pop(1)
0x474: PushEmpty(int)
0x475: Call2 0xadd

0x476: Pop(0)
0x477: @@ SetNPCDescription(Stack[-1])
0x478: Pop(1)
0x479: PushEmpty(string)
0x47a: Call2 0xae1

0x47b: Pop(0)
0x47c: @@ SetPhoto(Stack[-1])
0x47d: Pop(1)
0x47e: PushEmpty(string)
0x47f: Call2 0xae3

0x480: Pop(0)
0x481: @@ SetPhoto2(Stack[-1])
0x482: Pop(1)
0x483: PushEmpty(int)
0x484: Call2 0xc9d

0x485: Pop(0)
0x486: @@ SetPlayerName(Stack[-1])
0x487: Pop(1)
0x488: Stack[-2] = (int) -1
0x489: @ IsOverrideActive(Stack[-3])
0x48a: Pop(0)
0x48b: Push(Stack[-3])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-10] = (int) -2
0x48e: Return(); Pop(8)

0x48f: @ DoDialog(Stack[-4])
0x490: Pop(0)
0x491: PushEmpty(bool, object)
0x492: PushEmpty(object)
0x493: Call2 0xa70

0x494: Stack[-2] = Stack[-1]
0x495: Pop(1)
0x496: Call2 0x9b1

0x497: Pop(2)
0x498: PushEmpty(object, object)
0x499: Stack[-2] = Stack[-11]
0x49a: Stack[-1] = Stack[-6]
0x49b: Push(-2, 4); TaskCall(5)
0x49c: Call2 0x4b3

0x49d: Pop(-2, 4); TaskReturn
0x49e: Pop(2)
0x49f: @@ IsDialogEnd(Stack[-1])
0x4a0: Pop(0)
0x4a1: Pop(0); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a3: @ sync()
0x4a4: Pop(0)
0x4a5: @@ IsDialogEnd(Stack[-1])
0x4a6: Pop(0)
0x4a7: GOTO 0x4a1

0x4a8: PushEmpty(object)
0x4a9: Stack[-1] = Stack[-10]
0x4aa: Call2 0x9a0

0x4ab: Pop(1)
0x4ac: @ StopDialog(Stack[-4])
0x4ad: Pop(0)
0x4ae: @@ GetReturnValue(Stack[-2])
0x4af: Pop(0)
0x4b0: Stack[-10] = Stack[-2]
0x4b1: Return(); Pop(8)

0x4b2: Stack[-4] = 0
0x4b3: PushEmpty()
0x4b4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4b5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4b6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4b7: Push((int) 1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4b9: PushEmpty(string)
0x4ba: Stack[-1] = "Neutral"
0x4bb: Call2 0x4fb

0x4bc: Pop(1)
0x4bd: Push((int) 527693)
0x4be: @@ SetMessage(Stack[-1])
0x4bf: Pop(1)
0x4c0: @@ ClearReplies()
0x4c1: Pop(0)
0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 0
0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c6: Call2 0xbae

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c9: PushEmpty(bool, object)
0x4ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4cb: Call2 0xba2

0x4cc: Pop(1)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d0: Push((int) 527695)
0x4d1: Push((int) 29046)
0x4d2: Push((int) 29045)
0x4d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d4: Pop(3)
0x4d5: Push((int) 527694)
0x4d6: Push((int) -1)
0x4d7: Push((int) 29044)
0x4d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d9: Pop(3)
0x4da: GOTO 0x4dd

0x4db: Return(); Pop(0)

0x4dc: GOTO 0x4b7

0x4dd: PushEmpty(bool)
0x4de: Call2 0xae5

0x4df: Pop(0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e1: @ lshWaitForAnimEnd()
0x4e2: Pop(0)
0x4e3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e5: GOTO 0x4eb

0x4e6: PushEmpty(string)
0x4e7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4e8: Call2 0xa3b

0x4e9: Pop(1)
0x4ea: GOTO 0x4e1

0x4eb: GOTO 0x4fa

0x4ec: Push("all")
0x4ed: Push("idle")
0x4ee: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ef: Pop(2)
0x4f0: @ WaitForAnimEnd()
0x4f1: Pop(0)
0x4f2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: GOTO 0x4fa

0x4f5: Push("all")
0x4f6: Push("idle")
0x4f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f8: Pop(2)
0x4f9: GOTO 0x4f0

0x4fa: Return(); Pop(0)

0x4fb: PushEmpty()
0x4fc: PushEmpty(bool)
0x4fd: Call2 0xae5

0x4fe: Pop(0)
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: Return(); Pop(0)

0x502: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Return(); Pop(0)

0x505: PushEmpty(string, bool)
0x506: Stack[-2] = Stack[-3]
0x507: Push("")
0x508: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-1] = (bool) 0
0x50b: GOTO 0x50d

0x50c: Stack[-1] = (bool) 1
0x50d: Call2 0xa4b

0x50e: Pop(2)
0x50f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: Push((int) 1)
0x513: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x514: PushEmpty()
0x515: Call2 0xa69

0x516: Pop(0)
0x517: Push((int) 29045)
0x518: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51a: PushEmpty(object, object)
0x51b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x51c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51d: Call2 0xb4d

0x51e: Pop(2)
0x51f: Push((int) 29057)
0x520: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x522: PushEmpty(object, object)
0x523: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x524: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x525: Call2 0xb1a

0x526: Pop(2)
0x527: Push((int) 29043)
0x528: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x52a: PushEmpty(string)
0x52b: Stack[-1] = "Neutral"
0x52c: Call2 0x4fb

0x52d: Pop(1)
0x52e: Push((int) 527693)
0x52f: @@ SetMessage(Stack[-1])
0x530: Pop(1)
0x531: @@ ClearReplies()
0x532: Pop(0)
0x533: PushEmpty(bool)
0x534: Stack[-1] = (bool) 0
0x535: PushEmpty(bool, object)
0x536: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x537: Call2 0xbae

0x538: Pop(1)
0x539: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53a: PushEmpty(bool, object)
0x53b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x53c: Call2 0xba2

0x53d: Pop(1)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Stack[-1] = (bool) 1
0x540: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x541: Push((int) 527695)
0x542: Push((int) 29046)
0x543: Push((int) 29045)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Push((int) 527694)
0x547: Push((int) -1)
0x548: Push((int) 29044)
0x549: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54a: Pop(3)
0x54b: Return(); Pop(0)

0x54c: Push((int) 29046)
0x54d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x54f: PushEmpty(string)
0x550: Stack[-1] = "Warning"
0x551: Call2 0x4fb

0x552: Pop(1)
0x553: Push((int) 527696)
0x554: @@ SetMessage(Stack[-1])
0x555: Pop(1)
0x556: @@ ClearReplies()
0x557: Pop(0)
0x558: Push((int) 527697)
0x559: Push((int) 29048)
0x55a: Push((int) 29047)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Return(); Pop(0)

0x55e: Push((int) 29048)
0x55f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x561: PushEmpty(string)
0x562: Stack[-1] = "Warning"
0x563: Call2 0x4fb

0x564: Pop(1)
0x565: Push((int) 527698)
0x566: @@ SetMessage(Stack[-1])
0x567: Pop(1)
0x568: @@ ClearReplies()
0x569: Pop(0)
0x56a: Push((int) 527699)
0x56b: Push((int) 29050)
0x56c: Push((int) 29049)
0x56d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56e: Pop(3)
0x56f: Return(); Pop(0)

0x570: Push((int) 29050)
0x571: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x573: PushEmpty(string)
0x574: Stack[-1] = "Neutral"
0x575: Call2 0x4fb

0x576: Pop(1)
0x577: Push((int) 527700)
0x578: @@ SetMessage(Stack[-1])
0x579: Pop(1)
0x57a: @@ ClearReplies()
0x57b: Pop(0)
0x57c: Push((int) 527701)
0x57d: Push((int) 29052)
0x57e: Push((int) 29051)
0x57f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x580: Pop(3)
0x581: Return(); Pop(0)

0x582: Push((int) 29052)
0x583: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x585: PushEmpty(string)
0x586: Stack[-1] = "Neutral"
0x587: Call2 0x4fb

0x588: Pop(1)
0x589: Push((int) 527702)
0x58a: @@ SetMessage(Stack[-1])
0x58b: Pop(1)
0x58c: @@ ClearReplies()
0x58d: Pop(0)
0x58e: Push((int) 527703)
0x58f: Push((int) 29054)
0x590: Push((int) 29053)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Push((int) 527712)
0x594: Push((int) 29054)
0x595: Push((int) 29063)
0x596: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x597: Pop(3)
0x598: Return(); Pop(0)

0x599: Push((int) 29054)
0x59a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x59c: PushEmpty(string)
0x59d: Stack[-1] = "Warning"
0x59e: Call2 0x4fb

0x59f: Pop(1)
0x5a0: Push((int) 527704)
0x5a1: @@ SetMessage(Stack[-1])
0x5a2: Pop(1)
0x5a3: @@ ClearReplies()
0x5a4: Pop(0)
0x5a5: Push((int) 527705)
0x5a6: Push((int) 29056)
0x5a7: Push((int) 29055)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Return(); Pop(0)

0x5ab: Push((int) 29056)
0x5ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5ae: PushEmpty(string)
0x5af: Stack[-1] = "Warning"
0x5b0: Call2 0x4fb

0x5b1: Pop(1)
0x5b2: Push((int) 527706)
0x5b3: @@ SetMessage(Stack[-1])
0x5b4: Pop(1)
0x5b5: @@ ClearReplies()
0x5b6: Pop(0)
0x5b7: Push((int) 527707)
0x5b8: Push((int) -1)
0x5b9: Push((int) 29057)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Return(); Pop(0)

0x5bd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5be: PushEmpty(bool)
0x5bf: Call2 0xae5

0x5c0: Pop(0)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c2: @ lshStopAnimation()
0x5c3: Pop(0)
0x5c4: GOTO 0x5c7

0x5c5: @ StopAnimation()
0x5c6: Pop(0)
0x5c7: Return(); Pop(0)

0x5c8: GOTO 0x512

0x5c9: Return(); Pop(0)

0x5ca: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5cb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5cc: PushEmpty(bool, object, float)
0x5cd: Stack[-2] = Stack[-12]
0x5ce: Stack[-1] = (float) 70.0
0x5cf: Call2 0x95c

0x5d0: Pop(2)
0x5d1: Pop(1); Push((bool) Stack[-1] == 0)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-10] = (int) -2
0x5d4: Return(); Pop(8)

0x5d5: @ CreateDialog(Stack[-4])
0x5d6: Pop(0)
0x5d7: PushEmpty(int)
0x5d8: Call2 0xadf

0x5d9: Pop(0)
0x5da: @@ SetNPCName(Stack[-1])
0x5db: Pop(1)
0x5dc: PushEmpty(int)
0x5dd: Call2 0xadd

0x5de: Pop(0)
0x5df: @@ SetNPCDescription(Stack[-1])
0x5e0: Pop(1)
0x5e1: PushEmpty(string)
0x5e2: Call2 0xae1

0x5e3: Pop(0)
0x5e4: @@ SetPhoto(Stack[-1])
0x5e5: Pop(1)
0x5e6: PushEmpty(string)
0x5e7: Call2 0xae3

0x5e8: Pop(0)
0x5e9: @@ SetPhoto2(Stack[-1])
0x5ea: Pop(1)
0x5eb: PushEmpty(int)
0x5ec: Call2 0xc9d

0x5ed: Pop(0)
0x5ee: @@ SetPlayerName(Stack[-1])
0x5ef: Pop(1)
0x5f0: Stack[-2] = (int) -1
0x5f1: @ IsOverrideActive(Stack[-3])
0x5f2: Pop(0)
0x5f3: Push(Stack[-3])
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f5: Stack[-10] = (int) -2
0x5f6: Return(); Pop(8)

0x5f7: @ DoDialog(Stack[-4])
0x5f8: Pop(0)
0x5f9: PushEmpty(bool, object)
0x5fa: PushEmpty(object)
0x5fb: Call2 0xa70

0x5fc: Stack[-2] = Stack[-1]
0x5fd: Pop(1)
0x5fe: Call2 0x9b1

0x5ff: Pop(2)
0x600: PushEmpty(object, object)
0x601: Stack[-2] = Stack[-11]
0x602: Stack[-1] = Stack[-6]
0x603: Push(-2, 4); TaskCall(7)
0x604: Call2 0x61b

0x605: Pop(-2, 4); TaskReturn
0x606: Pop(2)
0x607: @@ IsDialogEnd(Stack[-1])
0x608: Pop(0)
0x609: Pop(0); Push((bool) Stack[-1] == 0)
0x60a: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60b: @ sync()
0x60c: Pop(0)
0x60d: @@ IsDialogEnd(Stack[-1])
0x60e: Pop(0)
0x60f: GOTO 0x609

0x610: PushEmpty(object)
0x611: Stack[-1] = Stack[-10]
0x612: Call2 0x9a0

0x613: Pop(1)
0x614: @ StopDialog(Stack[-4])
0x615: Pop(0)
0x616: @@ GetReturnValue(Stack[-2])
0x617: Pop(0)
0x618: Stack[-10] = Stack[-2]
0x619: Return(); Pop(8)

0x61a: Stack[-4] = 0
0x61b: PushEmpty()
0x61c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x61d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x61e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x61f: Push((int) 1)
0x620: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x621: PushEmpty(string)
0x622: Stack[-1] = "Neutral"
0x623: Call2 0x65a

0x624: Pop(1)
0x625: Push((int) 539294)
0x626: @@ SetMessage(Stack[-1])
0x627: Pop(1)
0x628: @@ ClearReplies()
0x629: Pop(0)
0x62a: Push((int) 542670)
0x62b: Push((int) 45076)
0x62c: Push((int) 45074)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Push((int) 539295)
0x630: Push((int) -1)
0x631: Push((int) 41238)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Push((int) 542671)
0x635: Push((int) -1)
0x636: Push((int) 45075)
0x637: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x638: Pop(3)
0x639: GOTO 0x63c

0x63a: Return(); Pop(0)

0x63b: GOTO 0x61f

0x63c: PushEmpty(bool)
0x63d: Call2 0xae5

0x63e: Pop(0)
0x63f: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x640: @ lshWaitForAnimEnd()
0x641: Pop(0)
0x642: Push( Stack[3 + Tasks[-1].StackPointer] )
0x643: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x644: GOTO 0x64a

0x645: PushEmpty(string)
0x646: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x647: Call2 0xa3b

0x648: Pop(1)
0x649: GOTO 0x640

0x64a: GOTO 0x659

0x64b: Push("all")
0x64c: Push("idle")
0x64d: @ PlayAnimation(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: @ WaitForAnimEnd()
0x650: Pop(0)
0x651: Push( Stack[3 + Tasks[-1].StackPointer] )
0x652: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x653: GOTO 0x659

0x654: Push("all")
0x655: Push("idle")
0x656: @ PlayAnimation(Stack[-2], Stack[-1])
0x657: Pop(2)
0x658: GOTO 0x64f

0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: PushEmpty(bool)
0x65c: Call2 0xae5

0x65d: Pop(0)
0x65e: Pop(1); Push((bool) Stack[-1] == 0)
0x65f: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x660: Return(); Pop(0)

0x661: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: Return(); Pop(0)

0x664: PushEmpty(string, bool)
0x665: Stack[-2] = Stack[-3]
0x666: Push("")
0x667: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: Stack[-1] = (bool) 0
0x66a: GOTO 0x66c

0x66b: Stack[-1] = (bool) 1
0x66c: Call2 0xa4b

0x66d: Pop(2)
0x66e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x66f: Return(); Pop(0)

0x670: PushEmpty()
0x671: Push((int) 1)
0x672: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x673: PushEmpty()
0x674: Call2 0xa69

0x675: Pop(0)
0x676: Push((int) 41237)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Neutral"
0x67b: Call2 0x65a

0x67c: Pop(1)
0x67d: Push((int) 539294)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: Push((int) 542670)
0x683: Push((int) 45076)
0x684: Push((int) 45074)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Push((int) 539295)
0x688: Push((int) -1)
0x689: Push((int) 41238)
0x68a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68b: Pop(3)
0x68c: Push((int) 542671)
0x68d: Push((int) -1)
0x68e: Push((int) 45075)
0x68f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x690: Pop(3)
0x691: Return(); Pop(0)

0x692: Push((int) 45076)
0x693: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x695: PushEmpty(string)
0x696: Stack[-1] = "Neutral"
0x697: Call2 0x65a

0x698: Pop(1)
0x699: Push((int) 542672)
0x69a: @@ SetMessage(Stack[-1])
0x69b: Pop(1)
0x69c: @@ ClearReplies()
0x69d: Pop(0)
0x69e: Push((int) 542673)
0x69f: Push((int) 45078)
0x6a0: Push((int) 45077)
0x6a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a2: Pop(3)
0x6a3: Return(); Pop(0)

0x6a4: Push((int) 45078)
0x6a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a6: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6a7: PushEmpty(string)
0x6a8: Stack[-1] = "Neutral"
0x6a9: Call2 0x65a

0x6aa: Pop(1)
0x6ab: Push((int) 542674)
0x6ac: @@ SetMessage(Stack[-1])
0x6ad: Pop(1)
0x6ae: @@ ClearReplies()
0x6af: Pop(0)
0x6b0: Push((int) 542675)
0x6b1: Push((int) 45081)
0x6b2: Push((int) 45079)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Push((int) 542676)
0x6b6: Push((int) 45084)
0x6b7: Push((int) 45080)
0x6b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b9: Pop(3)
0x6ba: Return(); Pop(0)

0x6bb: Push((int) 45081)
0x6bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6be: PushEmpty(string)
0x6bf: Stack[-1] = "Neutral"
0x6c0: Call2 0x65a

0x6c1: Pop(1)
0x6c2: Push((int) 542677)
0x6c3: @@ SetMessage(Stack[-1])
0x6c4: Pop(1)
0x6c5: @@ ClearReplies()
0x6c6: Pop(0)
0x6c7: Push((int) 542678)
0x6c8: Push((int) 45088)
0x6c9: Push((int) 45082)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Push((int) 542679)
0x6cd: Push((int) 45084)
0x6ce: Push((int) 45083)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Return(); Pop(0)

0x6d2: Push((int) 45088)
0x6d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6d5: PushEmpty(string)
0x6d6: Stack[-1] = "Warning"
0x6d7: Call2 0x65a

0x6d8: Pop(1)
0x6d9: Push((int) 542683)
0x6da: @@ SetMessage(Stack[-1])
0x6db: Pop(1)
0x6dc: @@ ClearReplies()
0x6dd: Pop(0)
0x6de: Push((int) 542684)
0x6df: Push((int) 45084)
0x6e0: Push((int) 45089)
0x6e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e2: Pop(3)
0x6e3: Return(); Pop(0)

0x6e4: Push((int) 45084)
0x6e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6e7: PushEmpty(string)
0x6e8: Stack[-1] = "Warning"
0x6e9: Call2 0x65a

0x6ea: Pop(1)
0x6eb: Push((int) 542680)
0x6ec: @@ SetMessage(Stack[-1])
0x6ed: Pop(1)
0x6ee: @@ ClearReplies()
0x6ef: Pop(0)
0x6f0: Push((int) 542681)
0x6f1: Push((int) 45091)
0x6f2: Push((int) 45085)
0x6f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Push((int) 542687)
0x6f6: Push((int) 45094)
0x6f7: Push((int) 45093)
0x6f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: Return(); Pop(0)

0x6fb: Push((int) 45094)
0x6fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fd: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x6fe: PushEmpty(string)
0x6ff: Stack[-1] = "Confusion"
0x700: Call2 0x65a

0x701: Pop(1)
0x702: Push((int) 542688)
0x703: @@ SetMessage(Stack[-1])
0x704: Pop(1)
0x705: @@ ClearReplies()
0x706: Pop(0)
0x707: Push((int) 542689)
0x708: Push((int) 45096)
0x709: Push((int) 45095)
0x70a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70b: Pop(3)
0x70c: Return(); Pop(0)

0x70d: Push((int) 45091)
0x70e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x710: PushEmpty(string)
0x711: Stack[-1] = "Warning"
0x712: Call2 0x65a

0x713: Pop(1)
0x714: Push((int) 542685)
0x715: @@ SetMessage(Stack[-1])
0x716: Pop(1)
0x717: @@ ClearReplies()
0x718: Pop(0)
0x719: Push((int) 542686)
0x71a: Push((int) 45096)
0x71b: Push((int) 45092)
0x71c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71d: Pop(3)
0x71e: Return(); Pop(0)

0x71f: Push((int) 45096)
0x720: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x722: PushEmpty(string)
0x723: Stack[-1] = "Neutral"
0x724: Call2 0x65a

0x725: Pop(1)
0x726: Push((int) 542690)
0x727: @@ SetMessage(Stack[-1])
0x728: Pop(1)
0x729: @@ ClearReplies()
0x72a: Pop(0)
0x72b: Push((int) 542691)
0x72c: Push((int) 45100)
0x72d: Push((int) 45098)
0x72e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: Push((int) 542692)
0x731: Push((int) -1)
0x732: Push((int) 45099)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: Return(); Pop(0)

0x736: Push((int) 45100)
0x737: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x739: PushEmpty(string)
0x73a: Stack[-1] = "Neutral"
0x73b: Call2 0x65a

0x73c: Pop(1)
0x73d: Push((int) 542693)
0x73e: @@ SetMessage(Stack[-1])
0x73f: Pop(1)
0x740: @@ ClearReplies()
0x741: Pop(0)
0x742: Push((int) 542694)
0x743: Push((int) 45103)
0x744: Push((int) 45101)
0x745: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x746: Pop(3)
0x747: Push((int) 542695)
0x748: Push((int) 45103)
0x749: Push((int) 45102)
0x74a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74b: Pop(3)
0x74c: Return(); Pop(0)

0x74d: Push((int) 45103)
0x74e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x750: PushEmpty(string)
0x751: Stack[-1] = "Neutral"
0x752: Call2 0x65a

0x753: Pop(1)
0x754: Push((int) 542696)
0x755: @@ SetMessage(Stack[-1])
0x756: Pop(1)
0x757: @@ ClearReplies()
0x758: Pop(0)
0x759: Push((int) 542697)
0x75a: Push((int) -1)
0x75b: Push((int) 45105)
0x75c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(3)
0x75e: Push((int) 542698)
0x75f: Push((int) -1)
0x760: Push((int) 45106)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: Return(); Pop(0)

0x764: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x765: PushEmpty(bool)
0x766: Call2 0xae5

0x767: Pop(0)
0x768: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x769: @ lshStopAnimation()
0x76a: Pop(0)
0x76b: GOTO 0x76e

0x76c: @ StopAnimation()
0x76d: Pop(0)
0x76e: Return(); Pop(0)

0x76f: GOTO 0x671

0x770: Return(); Pop(0)

0x771: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x772: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x773: PushEmpty(bool, object, float)
0x774: Stack[-2] = Stack[-12]
0x775: Stack[-1] = (float) 70.0
0x776: Call2 0x95c

0x777: Pop(2)
0x778: Pop(1); Push((bool) Stack[-1] == 0)
0x779: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77a: Stack[-10] = (int) -2
0x77b: Return(); Pop(8)

0x77c: @ CreateDialog(Stack[-4])
0x77d: Pop(0)
0x77e: PushEmpty(int)
0x77f: Call2 0xadf

0x780: Pop(0)
0x781: @@ SetNPCName(Stack[-1])
0x782: Pop(1)
0x783: PushEmpty(int)
0x784: Call2 0xadd

0x785: Pop(0)
0x786: @@ SetNPCDescription(Stack[-1])
0x787: Pop(1)
0x788: PushEmpty(string)
0x789: Call2 0xae1

0x78a: Pop(0)
0x78b: @@ SetPhoto(Stack[-1])
0x78c: Pop(1)
0x78d: PushEmpty(string)
0x78e: Call2 0xae3

0x78f: Pop(0)
0x790: @@ SetPhoto2(Stack[-1])
0x791: Pop(1)
0x792: PushEmpty(int)
0x793: Call2 0xc9d

0x794: Pop(0)
0x795: @@ SetPlayerName(Stack[-1])
0x796: Pop(1)
0x797: Stack[-2] = (int) -1
0x798: @ IsOverrideActive(Stack[-3])
0x799: Pop(0)
0x79a: Push(Stack[-3])
0x79b: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79c: Stack[-10] = (int) -2
0x79d: Return(); Pop(8)

0x79e: @ DoDialog(Stack[-4])
0x79f: Pop(0)
0x7a0: PushEmpty(bool, object)
0x7a1: PushEmpty(object)
0x7a2: Call2 0xa70

0x7a3: Stack[-2] = Stack[-1]
0x7a4: Pop(1)
0x7a5: Call2 0x9b1

0x7a6: Pop(2)
0x7a7: PushEmpty(object, object)
0x7a8: Stack[-2] = Stack[-11]
0x7a9: Stack[-1] = Stack[-6]
0x7aa: Push(-2, 4); TaskCall(9)
0x7ab: Call2 0x7c2

0x7ac: Pop(-2, 4); TaskReturn
0x7ad: Pop(2)
0x7ae: @@ IsDialogEnd(Stack[-1])
0x7af: Pop(0)
0x7b0: Pop(0); Push((bool) Stack[-1] == 0)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b2: @ sync()
0x7b3: Pop(0)
0x7b4: @@ IsDialogEnd(Stack[-1])
0x7b5: Pop(0)
0x7b6: GOTO 0x7b0

0x7b7: PushEmpty(object)
0x7b8: Stack[-1] = Stack[-10]
0x7b9: Call2 0x9a0

0x7ba: Pop(1)
0x7bb: @ StopDialog(Stack[-4])
0x7bc: Pop(0)
0x7bd: @@ GetReturnValue(Stack[-2])
0x7be: Pop(0)
0x7bf: Stack[-10] = Stack[-2]
0x7c0: Return(); Pop(8)

0x7c1: Stack[-4] = 0
0x7c2: PushEmpty()
0x7c3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7c4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x7c5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x7c6: Push((int) 1)
0x7c7: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7c8: PushEmpty(string)
0x7c9: Stack[-1] = "Neutral"
0x7ca: Call2 0x7fc

0x7cb: Pop(1)
0x7cc: Push((int) 540545)
0x7cd: @@ SetMessage(Stack[-1])
0x7ce: Pop(1)
0x7cf: @@ ClearReplies()
0x7d0: Pop(0)
0x7d1: Push((int) 540546)
0x7d2: Push((int) -1)
0x7d3: Push((int) 42555)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Push((int) 540798)
0x7d7: Push((int) -1)
0x7d8: Push((int) 42847)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: GOTO 0x7de

0x7dc: Return(); Pop(0)

0x7dd: GOTO 0x7c6

0x7de: PushEmpty(bool)
0x7df: Call2 0xae5

0x7e0: Pop(0)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e2: @ lshWaitForAnimEnd()
0x7e3: Pop(0)
0x7e4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: GOTO 0x7ec

0x7e7: PushEmpty(string)
0x7e8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7e9: Call2 0xa3b

0x7ea: Pop(1)
0x7eb: GOTO 0x7e2

0x7ec: GOTO 0x7fb

0x7ed: Push("all")
0x7ee: Push("idle")
0x7ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f0: Pop(2)
0x7f1: @ WaitForAnimEnd()
0x7f2: Pop(0)
0x7f3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f5: GOTO 0x7fb

0x7f6: Push("all")
0x7f7: Push("idle")
0x7f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f9: Pop(2)
0x7fa: GOTO 0x7f1

0x7fb: Return(); Pop(0)

0x7fc: PushEmpty()
0x7fd: PushEmpty(bool)
0x7fe: Call2 0xae5

0x7ff: Pop(0)
0x800: Pop(1); Push((bool) Stack[-1] == 0)
0x801: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x802: Return(); Pop(0)

0x803: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Return(); Pop(0)

0x806: PushEmpty(string, bool)
0x807: Stack[-2] = Stack[-3]
0x808: Push("")
0x809: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-1] = (bool) 0
0x80c: GOTO 0x80e

0x80d: Stack[-1] = (bool) 1
0x80e: Call2 0xa4b

0x80f: Pop(2)
0x810: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x811: Return(); Pop(0)

0x812: PushEmpty()
0x813: Push((int) 1)
0x814: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x815: PushEmpty()
0x816: Call2 0xa69

0x817: Pop(0)
0x818: Push((int) 42554)
0x819: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x81b: PushEmpty(string)
0x81c: Stack[-1] = "Neutral"
0x81d: Call2 0x7fc

0x81e: Pop(1)
0x81f: Push((int) 540545)
0x820: @@ SetMessage(Stack[-1])
0x821: Pop(1)
0x822: @@ ClearReplies()
0x823: Pop(0)
0x824: Push((int) 540546)
0x825: Push((int) -1)
0x826: Push((int) 42555)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Push((int) 540798)
0x82a: Push((int) -1)
0x82b: Push((int) 42847)
0x82c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82d: Pop(3)
0x82e: Return(); Pop(0)

0x82f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x830: PushEmpty(bool)
0x831: Call2 0xae5

0x832: Pop(0)
0x833: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x834: @ lshStopAnimation()
0x835: Pop(0)
0x836: GOTO 0x839

0x837: @ StopAnimation()
0x838: Pop(0)
0x839: Return(); Pop(0)

0x83a: GOTO 0x813

0x83b: Return(); Pop(0)

0x83c: PushEmpty()
0x83d: Call2 0x840

0x83e: Pop(0)
0x83f: Return(); Pop(0)

0x840: PushEmpty(bool)
0x841: Call2 0x957

0x842: Pop(0)
0x843: Pop(1); Push((bool) Stack[-1] == 0)
0x844: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x845: @ Hold()
0x846: Pop(0)
0x847: @ GetDirection(Stack[-0])
0x848: Pop(0)
0x849: PushEmpty()
0x84a: Call2 0x8f0

0x84b: Pop(0)
0x84c: GOTO 0x849

0x84d: Return(); Pop(0)

0x84e: PushEmpty(object, object)
0x84f: Push("player")
0x850: @ FindActor(Stack[-2], Stack[-1])
0x851: Pop(1)
0x852: Pop(0); Push((bool) Stack[-1] == 0)
0x853: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x854: Stack[-3] = (bool) 0
0x855: Return(); Pop(2)

0x856: PushEmpty(bool, object)
0x857: Stack[-1] = Stack[-3]
0x858: Call2 0x94e

0x859: Stack[-5] = Stack[-2]
0x85a: Pop(2)
0x85b: Return(); Pop(2)

0x85c: Stack[-1] = 0
0x85d: Push(CvectorIndex(Stack[-0], 0))
0x85e: Push(CvectorIndex(Stack[-0], 2))
0x85f: @ RotateAsync(Stack[-2], Stack[-1])
0x860: Pop(2)
0x861: Return(); Pop(0)

0x862: PushEmpty(object, bool, object, bool)
0x863: Push("player")
0x864: @ FindActor(Stack[-3], Stack[-1])
0x865: Pop(1)
0x866: Pop(0); Push((bool) Stack[-2] == 0)
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: Stack[-5] = (bool) 0
0x869: Return(); Pop(4)

0x86a: PushEmpty(float, object)
0x86b: Stack[-1] = Stack[-4]
0x86c: Call2 0x93c

0x86d: Pop(1)
0x86e: Push((float)90000.0)
0x86f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x871: Stack[-5] = (bool) 0
0x872: Return(); Pop(4)

0x873: @ CanSee(Stack[-1], Stack[-2])
0x874: Pop(0)
0x875: Stack[-5] = Stack[-1]
0x876: Return(); Pop(4)

0x877: Stack[-2] = 0
0x878: PushEmpty(float, float)
0x879: Push((int) 8)
0x87a: Push((int) 16)
0x87b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x87c: Pop(2)
0x87d: Push((int) 10)
0x87e: @ SetTimer(Stack[-1], Stack[-2])
0x87f: Pop(1)
0x880: Return(); Pop(2)

0x881: Push((int) 10)
0x882: @ KillTimer(Stack[-1])
0x883: Pop(1)
0x884: Return(); Pop(0)

0x885: PushEmpty()
0x886: Push((int) 10)
0x887: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x888: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x889: PushEmpty()
0x88a: Call2 0x881

0x88b: Pop(0)
0x88c: PushEmpty(bool)
0x88d: Stack[-1] = (bool) 0
0x88e: PushEmpty(bool)
0x88f: Call2 0x957

0x890: Pop(0)
0x891: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x892: PushEmpty(bool)
0x893: Call2 0x862

0x894: Pop(0)
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: Stack[-1] = (bool) 1
0x897: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x898: PushEmpty(bool)
0x899: Call2 0x84e

0x89a: Pop(0)
0x89b: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89c: PushEmpty(bool, object)
0x89d: PushEmpty(object)
0x89e: Call2 0xa70

0x89f: Stack[-2] = Stack[-1]
0x8a0: Pop(1)
0x8a1: Call2 0x9eb

0x8a2: Pop(2)
0x8a3: GOTO 0x8aa

0x8a4: PushEmpty()
0x8a5: Call2 0x85d

0x8a6: Pop(0)
0x8a7: PushEmpty()
0x8a8: Call2 0x878

0x8a9: Pop(0)
0x8aa: Return(); Pop(0)

0x8ab: PushEmpty()
0x8ac: Call2 0x937

0x8ad: Pop(0)
0x8ae: PushEmpty()
0x8af: Call2 0x881

0x8b0: Pop(0)
0x8b1: @ lshStopSpeech()
0x8b2: Pop(0)
0x8b3: @ lshStopAnimation()
0x8b4: Pop(0)
0x8b5: @ StopAsync()
0x8b6: Pop(0)
0x8b7: @ Hold()
0x8b8: Pop(0)
0x8b9: Return(); Pop(0)

0x8ba: @ StopGroup0()
0x8bb: Pop(0)
0x8bc: PushEmpty()
0x8bd: Call2 0x881

0x8be: Pop(0)
0x8bf: PushEmpty(string)
0x8c0: Stack[-1] = "Neutral"
0x8c1: Call2 0xa3b

0x8c2: Pop(1)
0x8c3: PushEmpty()
0x8c4: Call2 0x878

0x8c5: Pop(0)
0x8c6: Return(); Pop(0)

0x8c7: PushEmpty()
0x8c8: Push(Stack[-1])
0x8c9: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8ca: PushEmpty()
0x8cb: Call2 0x878

0x8cc: Pop(0)
0x8cd: GOTO 0x8d2

0x8ce: PushEmpty(string)
0x8cf: Stack[-1] = "Neutral"
0x8d0: Call2 0xa3b

0x8d1: Pop(1)
0x8d2: Return(); Pop(0)

0x8d3: PushEmpty(bool, bool)
0x8d4: @ IsOverrideActive(Stack[-1])
0x8d5: Pop(0)
0x8d6: Pop(0); Push((bool) Stack[-1] == 0)
0x8d7: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8d8: EventDisable(0)
0x8d9: PushEmpty()
0x8da: Call2 0x937

0x8db: Pop(0)
0x8dc: PushEmpty(bool, object)
0x8dd: Stack[-1] = Stack[-5]
0x8de: Call2 0x94e

0x8df: Pop(2)
0x8e0: EventEnable(0)
0x8e1: PushEmpty(object)
0x8e2: Stack[-1] = Stack[-4]
0x8e3: Call2 0xcae

0x8e4: Pop(1)
0x8e5: PushEmpty(string)
0x8e6: Stack[-1] = "Neutral"
0x8e7: Call2 0xa3b

0x8e8: Pop(1)
0x8e9: PushEmpty()
0x8ea: Call2 0x881

0x8eb: Pop(0)
0x8ec: PushEmpty()
0x8ed: Call2 0x878

0x8ee: Pop(0)
0x8ef: Return(); Pop(2)

0x8f0: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x8f1: @ WaitForAnimEnd()
0x8f2: Pop(0)
0x8f3: PushEmpty(bool)
0x8f4: Call2 0x957

0x8f5: Pop(0)
0x8f6: Pop(1); Push((bool) Stack[-1] == 0)
0x8f7: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f8: Return(); Pop(12)

0x8f9: PushEmpty(int)
0x8fa: Call2 0xacc

0x8fb: Stack[-7] = Stack[-1]
0x8fc: Pop(1)
0x8fd: Stack[-5] = (int) 0
0x8fe: PushEmpty(bool)
0x8ff: Stack[-1] = (bool) 0
0x900: Push((int) 5)
0x901: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x903: PushEmpty(bool)
0x904: Call2 0x957

0x905: Pop(0)
0x906: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x907: Stack[-1] = (bool) 1
0x908: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x909: Pop(0); Push((bool) Stack[-6] == 0)
0x90a: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90b: Push((int) 3)
0x90c: @ Sleep(Stack[-1], Stack[-5])
0x90d: Pop(1)
0x90e: Pop(0); Push((bool) Stack[-4] == 0)
0x90f: IF (Stack[-1] == 0) GOTO 0x911; Pop(1)

0x910: GOTO 0x932

0x911: GOTO 0x927

0x912: @ irand(Stack[-3], Stack[-6])
0x913: Pop(0)
0x914: Push((int) 5)
0x915: @ irand(Stack[-3], Stack[-1])
0x916: Pop(1)
0x917: Push((int) 0)
0x918: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x91a: Stack[-3] = (int) 0
0x91b: Push("all")
0x91c: PushEmpty(string, int)
0x91d: Stack[-1] = Stack[-6]
0x91e: Call2 0xac5

0x91f: Pop(1)
0x920: @ PlayAnimation(Stack[-2], Stack[-1])
0x921: Pop(2)
0x922: @ WaitForAnimEnd(Stack[-1])
0x923: Pop(0)
0x924: Pop(0); Push((bool) Stack[-1] == 0)
0x925: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x926: GOTO 0x932

0x927: PushEmpty(bool)
0x928: Call2 0x935

0x929: Pop(0)
0x92a: Pop(1); Push((bool) Stack[-1] == 0)
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: GOTO 0x932

0x92d: @ ResetAAS()
0x92e: Pop(0)
0x92f: Push((int) 1)
0x930: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x931: GOTO 0x8fe

0x932: @ ResetAAS()
0x933: Pop(0)
0x934: Return(); Pop(12)

0x935: Stack[-1] = (bool) 1
0x936: Return(); Pop(0)

0x937: @ StopAnimation()
0x938: Pop(0)
0x939: @ StopGroup0()
0x93a: Pop(0)
0x93b: Return(); Pop(0)

0x93c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x93d: @ GetPosition(Stack[-3])
0x93e: Pop(0)
0x93f: @@ GetPosition(Stack[-2])
0x940: Pop(0)
0x941: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x942: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x943: Return(); Pop(6)

0x944: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x945: @ GetPosition(Stack[-3])
0x946: Pop(0)
0x947: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x948: Push(CvectorIndex(Stack[-2], 0))
0x949: Push(CvectorIndex(Stack[-3], 2))
0x94a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x94b: Pop(2)
0x94c: Stack[-8] = Stack[-1]
0x94d: Return(); Pop(6)

0x94e: PushEmpty(cvector, cvector)
0x94f: @@ GetPosition(Stack[-1])
0x950: Pop(0)
0x951: PushEmpty(bool, cvector)
0x952: Stack[-1] = Stack[-3]
0x953: Call2 0x944

0x954: Stack[-6] = Stack[-2]
0x955: Pop(2)
0x956: Return(); Pop(2)

0x957: PushEmpty(bool, bool)
0x958: @ IsLoaded(Stack[-1])
0x959: Pop(0)
0x95a: Stack[-3] = Stack[-1]
0x95b: Return(); Pop(2)

0x95c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x95d: @@ GetPosition(Stack[-8])
0x95e: Pop(0)
0x95f: @@ GetEyesHeight(Stack[-9])
0x960: Pop(0)
0x961: Push(CvectorIndex(Stack[-8], 1))
0x962: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x963: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x964: @ GetPosition(Stack[-7])
0x965: Pop(0)
0x966: @ GetEyesHeight(Stack[-9])
0x967: Pop(0)
0x968: Push(CvectorIndex(Stack[-7], 1))
0x969: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x96a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x96b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x96c: Push(CvectorIndex(Stack[-6], 1))
0x96d: Stack[-1] = (int) 0
0x96e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x96f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x970: Pop(1); Push(Sqrt(Stack[-1]))
0x971: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x972: Stack[-5] = -Stack[-6]; Pop(0);
0x973: Pop(0); Push(Stack[-6] * Stack[-19]);
0x974: PushEmpty(cvector, cvector)
0x975: Push(CVector(0.0, 1.0, 0.0))
0x976: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x977: Call2 0xa76

0x978: Pop(1)
0x979: Push((int) 25)
0x97a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x97b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x97c: Push(CVector(0.0, 10.0, 0.0))
0x97d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x97e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x97f: @ IsOverrideActive(Stack[-2])
0x980: Pop(0)
0x981: Push(Stack[-2])
0x982: IF (Stack[-1] == 0) GOTO 0x985; Pop(1)

0x983: Stack[-21] = (bool) 0
0x984: Return(); Pop(18)

0x985: @ StopWorld()
0x986: Pop(0)
0x987: @ CameraTransit(Stack[-3], Stack[-5])
0x988: Pop(0)
0x989: Push(CvectorIndex(Stack[-4], 0))
0x98a: Push(CvectorIndex(Stack[-5], 2))
0x98b: @ Rotate(Stack[-2], Stack[-1])
0x98c: Pop(2)
0x98d: PushEmpty(bool)
0x98e: Call2 0xae5

0x98f: Pop(0)
0x990: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x991: GOTO 0x99a

0x992: Push("head")
0x993: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x994: Pop(1)
0x995: Push(Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x997: Push("head")
0x998: @ LookAsyncCamera(Stack[-1])
0x999: Pop(1)
0x99a: @ CameraWaitForPlayFinish()
0x99b: Pop(0)
0x99c: @ ResumeWorld()
0x99d: Pop(0)
0x99e: Stack[-21] = (bool) 1
0x99f: Return(); Pop(18)

0x9a0: PushEmpty(bool, bool)
0x9a1: @ CameraSwitchToNormal()
0x9a2: Pop(0)
0x9a3: PushEmpty(bool)
0x9a4: Call2 0xae5

0x9a5: Pop(0)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9a8; Pop(1)

0x9a7: GOTO 0x9b0

0x9a8: Push("head")
0x9a9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x9aa: Pop(1)
0x9ab: Push(Stack[-1])
0x9ac: IF (Stack[-1] == 0) GOTO 0x9b0; Pop(1)

0x9ad: Push("head")
0x9ae: @ UnlookAsync(Stack[-1])
0x9af: Pop(1)
0x9b0: Return(); Pop(2)

0x9b1: PushEmpty(int, int, int, int)
0x9b2: Push("voice_common")
0x9b3: @ GetVariable(Stack[-1], Stack[-3])
0x9b4: Pop(1)
0x9b5: Push(Stack[-2])
0x9b6: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9b7: PushEmpty(bool, object)
0x9b8: Stack[-1] = Stack[-7]
0x9b9: Call2 0x9eb

0x9ba: Pop(1)
0x9bb: Pop(1); Push((bool) Stack[-1] == 0)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9bd: PushEmpty(bool, object)
0x9be: Stack[-1] = Stack[-7]
0x9bf: Call2 0xa10

0x9c0: Pop(1)
0x9c1: Pop(1); Push((bool) Stack[-1] == 0)
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9c3: Stack[-6] = (bool) 0
0x9c4: Return(); Pop(4)

0x9c5: Push((int) 2)
0x9c6: @ irand(Stack[-2], Stack[-1])
0x9c7: Pop(1)
0x9c8: Push(Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9ca: Push("voice_common")
0x9cb: Push((int) 1)
0x9cc: Pop(1); Push(Stack[-4] + Stack[-1]);
0x9cd: Push((int) 3)
0x9ce: Pop(2); Push(Stack[-2] % Stack[-1]);
0x9cf: @ SetVariable(Stack[-2], Stack[-1])
0x9d0: Pop(2)
0x9d1: GOTO 0x9d6

0x9d2: Push("voice_common")
0x9d3: Push((int) 0)
0x9d4: @ SetVariable(Stack[-2], Stack[-1])
0x9d5: Pop(2)
0x9d6: GOTO 0x9e9

0x9d7: PushEmpty(bool, object)
0x9d8: Stack[-1] = Stack[-7]
0x9d9: Call2 0xa10

0x9da: Pop(1)
0x9db: Pop(1); Push((bool) Stack[-1] == 0)
0x9dc: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9dd: PushEmpty(bool, object)
0x9de: Stack[-1] = Stack[-7]
0x9df: Call2 0x9eb

0x9e0: Pop(1)
0x9e1: Pop(1); Push((bool) Stack[-1] == 0)
0x9e2: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e3: Stack[-6] = (bool) 0
0x9e4: Return(); Pop(4)

0x9e5: Push("voice_common")
0x9e6: Push((int) 1)
0x9e7: @ SetVariable(Stack[-2], Stack[-1])
0x9e8: Pop(2)
0x9e9: Stack[-6] = (bool) 1
0x9ea: Return(); Pop(4)

0x9eb: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x9ec: Stack[-5] = "c"
0x9ed: Stack[-4] = (int) 0
0x9ee: Push((int) 1)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f0: Push((int) 1)
0x9f1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x9f2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9f3: @@ HasProperty(Stack[-1], Stack[-4])
0x9f4: Pop(1)
0x9f5: Pop(0); Push((bool) Stack[-3] == 0)
0x9f6: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f7: GOTO 0x9fb

0x9f8: Push((int) 1)
0x9f9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9fa: GOTO 0x9ee

0x9fb: Pop(0); Push((bool) Stack[-4] == 0)
0x9fc: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fd: Stack[-12] = (bool) 0
0x9fe: Return(); Pop(10)

0x9ff: Stack[-2] = (int) 0
0xa00: Push((int) 1)
0xa01: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa02: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa03: @ irand(Stack[-2], Stack[-4])
0xa04: Pop(0)
0xa05: Push((int) 1)
0xa06: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa07: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa08: @@ GetProperty(Stack[-1], Stack[-2])
0xa09: Pop(1)
0xa0a: PushEmpty(bool, string)
0xa0b: Stack[-1] = Stack[-3]
0xa0c: Call2 0xa5a

0xa0d: Stack[-14] = Stack[-2]
0xa0e: Pop(2)
0xa0f: Return(); Pop(10)

0xa10: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xa11: Push("d")
0xa12: PushEmpty(int)
0xa13: Call2 0xab6

0xa14: Pop(0)
0xa15: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa16: Push("m")
0xa17: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xa18: Stack[-4] = (int) 0
0xa19: Push((int) 1)
0xa1a: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa1b: Push((int) 1)
0xa1c: Pop(1); Push(Stack[-5] + Stack[-1]);
0xa1d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa1e: @@ HasProperty(Stack[-1], Stack[-4])
0xa1f: Pop(1)
0xa20: Pop(0); Push((bool) Stack[-3] == 0)
0xa21: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa22: GOTO 0xa26

0xa23: Push((int) 1)
0xa24: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xa25: GOTO 0xa19

0xa26: Pop(0); Push((bool) Stack[-4] == 0)
0xa27: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa28: Stack[-12] = (bool) 0
0xa29: Return(); Pop(10)

0xa2a: Stack[-2] = (int) 0
0xa2b: Push((int) 1)
0xa2c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xa2d: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa2e: @ irand(Stack[-2], Stack[-4])
0xa2f: Pop(0)
0xa30: Push((int) 1)
0xa31: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa32: Pop(1); Push(Stack[-6] + Stack[-1]);
0xa33: @@ GetProperty(Stack[-1], Stack[-2])
0xa34: Pop(1)
0xa35: PushEmpty(bool, string)
0xa36: Stack[-1] = Stack[-3]
0xa37: Call2 0xa5a

0xa38: Stack[-14] = Stack[-2]
0xa39: Pop(2)
0xa3a: Return(); Pop(10)

0xa3b: PushEmpty(bool, float, float, bool, float, float)
0xa3c: @ lshHasAnimation(Stack[-3], Stack[-7])
0xa3d: Pop(0)
0xa3e: Push(Stack[-3])
0xa3f: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa40: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xa41: Pop(0)
0xa42: Push((bool) 0)
0xa43: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa44: Pop(1)
0xa45: GOTO 0xa4a

0xa46: Push("Can't find lsh animation : ")
0xa47: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa48: @ Trace(Stack[-1])
0xa49: Pop(1)
0xa4a: Return(); Pop(6)

0xa4b: PushEmpty(bool, float, float, bool, float, float)
0xa4c: @ lshHasAnimation(Stack[-3], Stack[-8])
0xa4d: Pop(0)
0xa4e: Push(Stack[-3])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa50: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xa51: Pop(0)
0xa52: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xa53: Pop(0)
0xa54: GOTO 0xa59

0xa55: Push("Can't find lsh animation : ")
0xa56: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa57: @ Trace(Stack[-1])
0xa58: Pop(1)
0xa59: Return(); Pop(6)

0xa5a: PushEmpty(bool, bool)
0xa5b: PushEmpty(bool)
0xa5c: Call2 0xae5

0xa5d: Pop(0)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa5f: @ lshHasSpeech(Stack[-1], Stack[-3])
0xa60: Pop(0)
0xa61: Push(Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa63: @ lshPlaySpeech(Stack[-3])
0xa64: Pop(0)
0xa65: Stack[-4] = (bool) 1
0xa66: Return(); Pop(2)

0xa67: Stack[-4] = (bool) 0
0xa68: Return(); Pop(2)

0xa69: PushEmpty(bool)
0xa6a: Call2 0xae5

0xa6b: Pop(0)
0xa6c: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa6d: @ lshStopSpeech()
0xa6e: Pop(0)
0xa6f: Return(); Pop(0)

0xa70: PushEmpty(object, object)
0xa71: @ self(Stack[-1])
0xa72: Pop(0)
0xa73: Stack[-3] = Stack[-1]
0xa74: Return(); Pop(2)

0xa75: Stack[-1] = 0
0xa76: PushEmpty(float, float)
0xa77: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa78: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa79: Push((float)0.0)
0xa7a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa7b: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa7c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa7d: Return(); Pop(2)

0xa7e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa7f: Return(); Pop(2)

0xa80: PushEmpty(int, int)
0xa81: @ GetVariable(Stack[-3], Stack[-1])
0xa82: Pop(0)
0xa83: Stack[-4] = Stack[-1]
0xa84: Return(); Pop(2)

0xa85: PushEmpty(object, object)
0xa86: @ CreateIntVector(Stack[-1])
0xa87: Pop(0)
0xa88: @@ add(Stack[-4])
0xa89: Pop(0)
0xa8a: @@ add(Stack[-3])
0xa8b: Pop(0)
0xa8c: Push((int) 3)
0xa8d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa8e: Pop(1)
0xa8f: Return(); Pop(2)

0xa90: Stack[-1] = 0
0xa91: PushEmpty(int, int, bool, int, int, bool)
0xa92: @@ GetItemID(Stack[-3])
0xa93: Pop(0)
0xa94: Push("Category")
0xa95: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xa96: Pop(1)
0xa97: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xa98: Pop(0)
0xa99: Pop(0); Push((bool) Stack[-1] == 0)
0xa9a: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa9b: @@ DropItems(Stack[-8], Stack[-7])
0xa9c: Pop(0)
0xa9d: GOTO 0xaa3

0xa9e: PushEmpty(int, int)
0xa9f: Stack[-2] = Stack[-5]
0xaa0: Stack[-1] = Stack[-9]
0xaa1: Call2 0xa85

0xaa2: Pop(2)
0xaa3: Return(); Pop(6)

0xaa4: PushEmpty(object, object)
0xaa5: @ CreateInvItem(Stack[-1])
0xaa6: Pop(0)
0xaa7: @@ SetItemName(Stack[-4])
0xaa8: Pop(0)
0xaa9: PushEmpty(object, object, int)
0xaaa: Stack[-3] = Stack[-8]
0xaab: Stack[-2] = Stack[-4]
0xaac: Stack[-1] = Stack[-6]
0xaad: Call2 0xa91

0xaae: Pop(3)
0xaaf: Return(); Pop(2)

0xab0: Stack[-1] = 0
0xab1: PushEmpty(float, float)
0xab2: @ GetGameTime(Stack[-1])
0xab3: Pop(0)
0xab4: Stack[-3] = Stack[-1]
0xab5: Return(); Pop(2)

0xab6: PushEmpty(float, float)
0xab7: @ GetGameTime(Stack[-1])
0xab8: Pop(0)
0xab9: Push((int) 1)
0xaba: PushEmpty(int)
0xabb: Push((int) 24)
0xabc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xabd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xabe: Return(); Pop(2)

0xabf: PushEmpty()
0xac0: PushEmpty(int)
0xac1: Call2 0xab6

0xac2: Pop(0)
0xac3: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xac4: Return(); Pop(0)

0xac5: PushEmpty(string, string)
0xac6: Stack[-1] = "idle"
0xac7: Push(Stack[-3])
0xac8: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac9: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xaca: Stack[-4] = Stack[-1]
0xacb: Return(); Pop(2)

0xacc: PushEmpty(int, bool, int, bool)
0xacd: Stack[-2] = (int) 0
0xace: Push("all")
0xacf: PushEmpty(string, int)
0xad0: Stack[-1] = Stack[-5]
0xad1: Call2 0xac5

0xad2: Pop(1)
0xad3: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xad4: Pop(2)
0xad5: Pop(0); Push((bool) Stack[-1] == 0)
0xad6: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xad7: GOTO 0xadb

0xad8: Push((int) 1)
0xad9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xada: GOTO 0xace

0xadb: Stack[-5] = Stack[-2]
0xadc: Return(); Pop(4)

0xadd: Stack[-1] = (int) 515551
0xade: Return(); Pop(0)

0xadf: Stack[-1] = (int) 502876
0xae0: Return(); Pop(0)

0xae1: Stack[-1] = "ui/NPC_Rubin.png"
0xae2: Return(); Pop(0)

0xae3: Stack[-1] = "ui/NPC_Rubin_b.png"
0xae4: Return(); Pop(0)

0xae5: Stack[-1] = (bool) 1
0xae6: Return(); Pop(0)

0xae7: PushEmpty()
0xae8: Push("k3q03")
0xae9: Push((int) 1000)
0xaea: @ SetVariable(Stack[-2], Stack[-1])
0xaeb: Pop(2)
0xaec: PushEmpty()
0xaed: Call2 0xc1b

0xaee: Pop(0)
0xaef: Return(); Pop(0)

0xaf0: PushEmpty(object, object)
0xaf1: Push("k5q01")
0xaf2: Push((int) 2)
0xaf3: @ SetVariable(Stack[-2], Stack[-1])
0xaf4: Pop(2)
0xaf5: PushEmpty(object)
0xaf6: Call2 0xc6b

0xaf7: Stack[-2] = Stack[-1]
0xaf8: Pop(1)
0xaf9: Push("k5q01RubinGotoGeorg")
0xafa: Push("pt_map_georg")
0xafb: Push((int) 1)
0xafc: Push((int) 515292)
0xafd: PushEmpty(float)
0xafe: Call2 0xab1

0xaff: Pop(0)
0xb00: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb01: Pop(5)
0xb02: PushEmpty()
0xb03: Call2 0xc35

0xb04: Pop(0)
0xb05: Return(); Pop(2)

0xb06: Stack[-1] = 0
0xb07: PushEmpty()
0xb08: Push("k5q01")
0xb09: Push((int) 4)
0xb0a: @ SetVariable(Stack[-2], Stack[-1])
0xb0b: Pop(2)
0xb0c: PushEmpty()
0xb0d: Call2 0xc28

0xb0e: Pop(0)
0xb0f: Return(); Pop(0)

0xb10: PushEmpty(int, int)
0xb11: Push("tvirin")
0xb12: Push((int) 3)
0xb13: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xb14: Pop(2)
0xb15: Push("fresh_meat")
0xb16: Push((int) 3)
0xb17: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0xb18: Pop(2)
0xb19: Return(); Pop(2)

0xb1a: PushEmpty(int, int)
0xb1b: Push("k11q01SoulCount")
0xb1c: @ GetVariable(Stack[-1], Stack[-2])
0xb1d: Pop(1)
0xb1e: Push((int) 1)
0xb1f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb20: Push("k11q01SoulCount")
0xb21: @ SetVariable(Stack[-1], Stack[-2])
0xb22: Pop(1)
0xb23: Push((int) 2)
0xb24: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb25: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb26: PushEmpty()
0xb27: Call2 0xc0e

0xb28: Pop(0)
0xb29: GOTO 0xb4c

0xb2a: Push((int) 3)
0xb2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2c: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb2d: PushEmpty()
0xb2e: Call2 0xc01

0xb2f: Pop(0)
0xb30: GOTO 0xb4c

0xb31: Push((int) 4)
0xb32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb33: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb34: PushEmpty()
0xb35: Call2 0xbf4

0xb36: Pop(0)
0xb37: GOTO 0xb4c

0xb38: Push((int) 5)
0xb39: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3a: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb3b: PushEmpty()
0xb3c: Call2 0xbe7

0xb3d: Pop(0)
0xb3e: GOTO 0xb4c

0xb3f: Push((int) 6)
0xb40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb41: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb42: PushEmpty()
0xb43: Call2 0xbda

0xb44: Pop(0)
0xb45: GOTO 0xb4c

0xb46: Push((int) 7)
0xb47: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb49: PushEmpty()
0xb4a: Call2 0xbcd

0xb4b: Pop(0)
0xb4c: Return(); Pop(2)

0xb4d: PushEmpty()
0xb4e: Push("ook11Rubin1")
0xb4f: Push((int) 1)
0xb50: @ SetVariable(Stack[-2], Stack[-1])
0xb51: Pop(2)
0xb52: Return(); Pop(0)

0xb53: PushEmpty()
0xb54: Push("playsound")
0xb55: Push("giveitem")
0xb56: @ TriggerWorld(Stack[-2], Stack[-1])
0xb57: Pop(2)
0xb58: Return(); Pop(0)

0xb59: PushEmpty()
0xb5a: PushEmpty(object, string, float)
0xb5b: PushEmpty(object)
0xb5c: Call2 0xc6b

0xb5d: Stack[-4] = Stack[-1]
0xb5e: Pop(1)
0xb5f: Stack[-2] = "pt_map_georg"
0xb60: Stack[-1] = (int) 2
0xb61: Call2 0xc7c

0xb62: Pop(3)
0xb63: PushEmpty(object)
0xb64: Call2 0xc6b

0xb65: Pop(0)
0xb66: @@ ShowMap(Stack[-1])
0xb67: Pop(1)
0xb68: Return(); Pop(0)

0xb69: PushEmpty()
0xb6a: Push("blackvaccine2 is given")
0xb6b: @ Trace(Stack[-1])
0xb6c: Pop(1)
0xb6d: PushEmpty(object, string, int)
0xb6e: Stack[-3] = Stack[-5]
0xb6f: Stack[-2] = "black_vaccine"
0xb70: Stack[-1] = (int) 2
0xb71: Call2 0xaa4

0xb72: Pop(3)
0xb73: Return(); Pop(0)

0xb74: PushEmpty()
0xb75: PushEmpty(int, string)
0xb76: Stack[-1] = "k3q03"
0xb77: Call2 0xa80

0xb78: Pop(1)
0xb79: Push((int) 1)
0xb7a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb7c: Stack[-2] = (bool) 1
0xb7d: Return(); Pop(0)

0xb7e: Stack[-2] = (bool) 0
0xb7f: Return(); Pop(0)

0xb80: PushEmpty()
0xb81: PushEmpty(int, string)
0xb82: Stack[-1] = "k5q01"
0xb83: Call2 0xa80

0xb84: Pop(1)
0xb85: Push((int) 1)
0xb86: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb87: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb88: Stack[-2] = (bool) 1
0xb89: Return(); Pop(0)

0xb8a: Stack[-2] = (bool) 0
0xb8b: Return(); Pop(0)

0xb8c: PushEmpty()
0xb8d: PushEmpty(bool, object)
0xb8e: Stack[-1] = Stack[-3]
0xb8f: Call2 0xbba

0xb90: Pop(1)
0xb91: IF (Stack[-1] == 0) GOTO 0xb94; Pop(1)

0xb92: Stack[-2] = (bool) 1
0xb93: Return(); Pop(0)

0xb94: Stack[-2] = (bool) 0
0xb95: Return(); Pop(0)

0xb96: PushEmpty()
0xb97: PushEmpty(int, string)
0xb98: Stack[-1] = "k5q01"
0xb99: Call2 0xa80

0xb9a: Pop(1)
0xb9b: Push((int) 3)
0xb9c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb9d: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9e: Stack[-2] = (bool) 1
0xb9f: Return(); Pop(0)

0xba0: Stack[-2] = (bool) 0
0xba1: Return(); Pop(0)

0xba2: PushEmpty()
0xba3: PushEmpty(int, string)
0xba4: Stack[-1] = "k11q01"
0xba5: Call2 0xa80

0xba6: Pop(1)
0xba7: Push((int) 9)
0xba8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xbaa: Stack[-2] = (bool) 1
0xbab: Return(); Pop(0)

0xbac: Stack[-2] = (bool) 0
0xbad: Return(); Pop(0)

0xbae: PushEmpty()
0xbaf: PushEmpty(int, string)
0xbb0: Stack[-1] = "ook11Rubin1"
0xbb1: Call2 0xa80

0xbb2: Pop(1)
0xbb3: Push((int) 0)
0xbb4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbb5: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb6: Stack[-2] = (bool) 1
0xbb7: Return(); Pop(0)

0xbb8: Stack[-2] = (bool) 0
0xbb9: Return(); Pop(0)

0xbba: PushEmpty(int, int)
0xbbb: Push("tvirin")
0xbbc: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0xbbd: Pop(1)
0xbbe: Push((int) 3)
0xbbf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbc1: Stack[-4] = (bool) 0
0xbc2: Return(); Pop(2)

0xbc3: Push("fresh_meat")
0xbc4: @@ GetItemCountOfType(Stack[-2], Stack[-1])
0xbc5: Pop(1)
0xbc6: Push((int) 3)
0xbc7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc9: Stack[-4] = (bool) 0
0xbca: Return(); Pop(2)

0xbcb: Stack[-4] = (bool) 1
0xbcc: Return(); Pop(2)

0xbcd: PushEmpty(object, object)
0xbce: Push((int) 498)
0xbcf: Push((int) 1)
0xbd0: Push((int) 528065)
0xbd1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbd2: Pop(3)
0xbd3: PushEmpty(bool, object, int)
0xbd4: Stack[-2] = Stack[-4]
0xbd5: Stack[-1] = (int) 480
0xbd6: Call2 0xc4f

0xbd7: Pop(3)
0xbd8: Return(); Pop(2)

0xbd9: Stack[-1] = 0
0xbda: PushEmpty(object, object)
0xbdb: Push((int) 497)
0xbdc: Push((int) 1)
0xbdd: Push((int) 528064)
0xbde: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(3)
0xbe0: PushEmpty(bool, object, int)
0xbe1: Stack[-2] = Stack[-4]
0xbe2: Stack[-1] = (int) 480
0xbe3: Call2 0xc4f

0xbe4: Pop(3)
0xbe5: Return(); Pop(2)

0xbe6: Stack[-1] = 0
0xbe7: PushEmpty(object, object)
0xbe8: Push((int) 496)
0xbe9: Push((int) 1)
0xbea: Push((int) 528063)
0xbeb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbec: Pop(3)
0xbed: PushEmpty(bool, object, int)
0xbee: Stack[-2] = Stack[-4]
0xbef: Stack[-1] = (int) 480
0xbf0: Call2 0xc4f

0xbf1: Pop(3)
0xbf2: Return(); Pop(2)

0xbf3: Stack[-1] = 0
0xbf4: PushEmpty(object, object)
0xbf5: Push((int) 495)
0xbf6: Push((int) 1)
0xbf7: Push((int) 528062)
0xbf8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbf9: Pop(3)
0xbfa: PushEmpty(bool, object, int)
0xbfb: Stack[-2] = Stack[-4]
0xbfc: Stack[-1] = (int) 480
0xbfd: Call2 0xc4f

0xbfe: Pop(3)
0xbff: Return(); Pop(2)

0xc00: Stack[-1] = 0
0xc01: PushEmpty(object, object)
0xc02: Push((int) 494)
0xc03: Push((int) 1)
0xc04: Push((int) 528061)
0xc05: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc06: Pop(3)
0xc07: PushEmpty(bool, object, int)
0xc08: Stack[-2] = Stack[-4]
0xc09: Stack[-1] = (int) 480
0xc0a: Call2 0xc4f

0xc0b: Pop(3)
0xc0c: Return(); Pop(2)

0xc0d: Stack[-1] = 0
0xc0e: PushEmpty(object, object)
0xc0f: Push((int) 493)
0xc10: Push((int) 1)
0xc11: Push((int) 528060)
0xc12: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc13: Pop(3)
0xc14: PushEmpty(bool, object, int)
0xc15: Stack[-2] = Stack[-4]
0xc16: Stack[-1] = (int) 480
0xc17: Call2 0xc4f

0xc18: Pop(3)
0xc19: Return(); Pop(2)

0xc1a: Stack[-1] = 0
0xc1b: PushEmpty(object, object)
0xc1c: Push((int) 353)
0xc1d: Push((int) 2)
0xc1e: Push((int) 525619)
0xc1f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc20: Pop(3)
0xc21: PushEmpty(bool, object, int)
0xc22: Stack[-2] = Stack[-4]
0xc23: Stack[-1] = (int) 350
0xc24: Call2 0xc4f

0xc25: Pop(3)
0xc26: Return(); Pop(2)

0xc27: Stack[-1] = 0
0xc28: PushEmpty(object, object)
0xc29: Push((int) 395)
0xc2a: Push((int) 1)
0xc2b: Push((int) 525888)
0xc2c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc2d: Pop(3)
0xc2e: PushEmpty(bool, object, int)
0xc2f: Stack[-2] = Stack[-4]
0xc30: Stack[-1] = (int) 390
0xc31: Call2 0xc4f

0xc32: Pop(3)
0xc33: Return(); Pop(2)

0xc34: Stack[-1] = 0
0xc35: PushEmpty(object, object)
0xc36: Push((int) 393)
0xc37: Push((int) 1)
0xc38: Push((int) 525886)
0xc39: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc3a: Pop(3)
0xc3b: PushEmpty(bool, object, int)
0xc3c: Stack[-2] = Stack[-4]
0xc3d: Stack[-1] = (int) 390
0xc3e: Call2 0xc4f

0xc3f: Pop(3)
0xc40: Return(); Pop(2)

0xc41: Stack[-1] = 0
0xc42: PushEmpty(object, object)
0xc43: @ GetDiaryRoot(Stack[-1])
0xc44: Pop(0)
0xc45: Pop(0); Push((bool) Stack[-1] == 0)
0xc46: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc47: Push("Can't retrieve diary root")
0xc48: @ Trace(Stack[-1])
0xc49: Pop(1)
0xc4a: Stack[-3] = (bool) 0
0xc4b: Return(); Pop(2)

0xc4c: Stack[-3] = Stack[-1]
0xc4d: Return(); Pop(2)

0xc4e: Stack[-1] = 0
0xc4f: PushEmpty(object, object, int, object, object, int)
0xc50: PushEmpty(object)
0xc51: Call2 0xc42

0xc52: Stack[-4] = Stack[-1]
0xc53: Pop(1)
0xc54: @@ Find(Stack[-7], Stack[-2])
0xc55: Pop(0)
0xc56: Pop(0); Push((bool) Stack[-2] == 0)
0xc57: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc58: Push("Can't find diary parent with id: ")
0xc59: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc5a: @ Trace(Stack[-1])
0xc5b: Pop(1)
0xc5c: Stack[-9] = (bool) 0
0xc5d: Return(); Pop(6)

0xc5e: @@ AddChild(Stack[-8])
0xc5f: Pop(0)
0xc60: Push((int) 7)
0xc61: @ SendWorldWndMessage(Stack[-1])
0xc62: Pop(1)
0xc63: @@ GetCategory(Stack[-1])
0xc64: Pop(0)
0xc65: @ SetDiarySection(Stack[-1])
0xc66: Pop(0)
0xc67: Stack[-9] = (bool) 0
0xc68: Return(); Pop(6)

0xc69: Stack[-2] = 0
0xc6a: Stack[-3] = 0
0xc6b: PushEmpty(object, object, object, object)
0xc6c: @ GetMainOutdoorScene(Stack[-2])
0xc6d: Pop(0)
0xc6e: Pop(0); Push((bool) Stack[-2] == 0)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc70: Push("Can't find main outdoor scene")
0xc71: @ Trace(Stack[-1])
0xc72: Pop(1)
0xc73: Stack[-1] = 0
0xc74: Stack[-5] = Stack[-1]
0xc75: Return(); Pop(4)

0xc76: @@ GetMap(Stack[-1])
0xc77: Pop(0)
0xc78: Stack[-5] = Stack[-1]
0xc79: Return(); Pop(4)

0xc7a: Stack[-1] = 0
0xc7b: Stack[-2] = 0
0xc7c: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xc7d: @ GetMainOutdoorScene(Stack[-2])
0xc7e: Pop(0)
0xc7f: Pop(0); Push((bool) Stack[-2] == 0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc81: Push("Can't find main outdoor scene")
0xc82: @ Trace(Stack[-1])
0xc83: Pop(1)
0xc84: Return(); Pop(8)

0xc85: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xc86: Pop(0)
0xc87: Pop(0); Push((bool) Stack[-1] == 0)
0xc88: IF (Stack[-1] == 0) GOTO 0xc8f; Pop(1)

0xc89: Push("Warning: outdoor scene locator ")
0xc8a: Pop(1); Push(Stack[-1] + Stack[-11]);
0xc8b: Push(" doesnt exist")
0xc8c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc8d: @ Trace(Stack[-1])
0xc8e: Pop(1)
0xc8f: @@ GetMap(Stack[-11])
0xc90: Pop(0)
0xc91: Pop(0); Push((bool) Stack[-11] == 0)
0xc92: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc93: Push("Can't find map")
0xc94: @ Trace(Stack[-1])
0xc95: Pop(1)
0xc96: Return(); Pop(8)

0xc97: Push(CvectorIndex(Stack[-4], 0))
0xc98: Push(CvectorIndex(Stack[-5], 2))
0xc99: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xc9a: Pop(2)
0xc9b: Return(); Pop(8)

0xc9c: Stack[-2] = 0
0xc9d: PushEmpty(int, int)
0xc9e: Push("branch")
0xc9f: @ GetVariable(Stack[-1], Stack[-2])
0xca0: Pop(1)
0xca1: Push((int) 0)
0xca2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca3: IF (Stack[-1] == 0) GOTO 0xca7; Pop(1)

0xca4: Stack[-3] = (int) 1
0xca5: Return(); Pop(2)

0xca6: GOTO 0xcac

0xca7: Push((int) 1)
0xca8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xca9: IF (Stack[-1] == 0) GOTO 0xcac; Pop(1)

0xcaa: Stack[-3] = (int) 2
0xcab: Return(); Pop(2)

0xcac: Stack[-3] = (int) 3
0xcad: Return(); Pop(2)

0xcae: PushEmpty()
0xcaf: PushEmpty(bool, int)
0xcb0: Stack[-1] = (int) 3
0xcb1: Call2 0xabf

0xcb2: Pop(1)
0xcb3: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcb4: PushEmpty(int, object)
0xcb5: Stack[-1] = Stack[-3]
0xcb6: Push(-2, 1); TaskCall(0)
0xcb7: Call2 0x0

0xcb8: Pop(-2, 1); TaskReturn
0xcb9: Pop(2)
0xcba: Return(); Pop(0)

0xcbb: PushEmpty(bool, int)
0xcbc: Stack[-1] = (int) 5
0xcbd: Call2 0xabf

0xcbe: Pop(1)
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc0: PushEmpty(int, object)
0xcc1: Stack[-1] = Stack[-3]
0xcc2: Push(-2, 1); TaskCall(2)
0xcc3: Call2 0x22c

0xcc4: Pop(-2, 1); TaskReturn
0xcc5: Pop(2)
0xcc6: Return(); Pop(0)

0xcc7: PushEmpty(bool, int)
0xcc8: Stack[-1] = (int) 11
0xcc9: Call2 0xabf

0xcca: Pop(1)
0xccb: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xccc: PushEmpty(int, object)
0xccd: Stack[-1] = Stack[-3]
0xcce: Push(-2, 1); TaskCall(4)
0xccf: Call2 0x462

0xcd0: Pop(-2, 1); TaskReturn
0xcd1: Pop(2)
0xcd2: Return(); Pop(0)

0xcd3: PushEmpty(bool, int)
0xcd4: Stack[-1] = (int) 12
0xcd5: Call2 0xabf

0xcd6: Pop(1)
0xcd7: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcd8: PushEmpty(int, object)
0xcd9: Stack[-1] = Stack[-3]
0xcda: Push(-2, 1); TaskCall(6)
0xcdb: Call2 0x5ca

0xcdc: Pop(-2, 1); TaskReturn
0xcdd: Pop(2)
0xcde: Return(); Pop(0)

0xcdf: PushEmpty(int, object)
0xce0: Stack[-1] = Stack[-3]
0xce1: Push(-2, 1); TaskCall(8)
0xce2: Call2 0x771

0xce3: Pop(-2, 1); TaskReturn
0xce4: Pop(2)
0xce5: Return(); Pop(0)

