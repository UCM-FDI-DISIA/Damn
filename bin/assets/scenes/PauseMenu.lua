Entity1 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-9.600000381469727|4.0|14.0",
				Rotation = "false|1.0|0|0|0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		},
		{
            Name = "BUTTON_FUNCTIONS",
            Arguments = {
			}
        }
	}
}

Entity2 = {
	Name = "UI_Cursor",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "0",
				YPos = "0",
				Width = "5",
				Height = "5",
				Texture = "Cursor.png",
				Depth = "10"
			}
		},
		{
			Name = "CURSOR",
			Arguments = {
			}
		}
	}		
}

Entity3 = {
	Name = "PauseBackground",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "pausebgimg",
				XPos = "50",
                YPos = "50",
                Width = "100",
                Height = "100",
                Texture = "pausemenubg.png",
                Depth = "0"
			}
		}
	}
}

Entity4 = {
	Name = "PauseText",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "textpause",
				XPos = "50",
				YPos = "10",
				Width = "40",
				Height = "12",
				Texture = "pause_white.png",
				Depth = "1"
			}
		}
	}
}

Entity5 = {
	Name = "FullscreenButtonOff",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonfullscreenoff",
				XPos = "50",
                YPos = "25",
                Width = "55",
                Height = "9",
                Texture1 = "fullscreenoff_red.png",
                Texture2 = "fullscreenoff_darkred.png",
                Texture3 = "fullscreenoff_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript",
			}
        }
	}	
}

Entity6 = {
	Name = "FullscreenButtonOn",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "buttonfullscreenon",
				XPos = "50",
                YPos = "25",
                Width = "50",
                Height = "9",
                Texture1 = "fullscreenon_green.png",
                Texture2 = "fullscreenon_darkgreen.png",
                Texture3 = "fullscreenon_darkgreen.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript",
			}
        }
	}
}

Entity7 = {
	Name = "BackButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "button",
				XPos = "5",
                YPos = "9",
                Width = "10",
                Height = "13",
                Texture1 = "atras_white.png",
                Texture2 = "atras_red.png",
                Texture3 = "atras_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript"
			}
        }
	}	
}

Entity8 = {
	Name = "ResolutionsPreviousButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "resolutionbuttonprevious",
				XPos = "25",
                YPos = "50",
                Width = "10",
                Height = "13",
				Texture1 = "atras_white.png",
                Texture2 = "atras_red.png",
                Texture3 = "atras_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript",
			}
        }
	}	
}

Entity9 = {
	Name = "ResolutionsText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "resolutiontext",
				XPos = "50",
                YPos = "45",
                Tam = "9",
                Text = "640x460",
                Font = "DooM.ttf",
                Color = "90|90|90",
                Depth = "1"
			}
		}
	}	
}

Entity10 = {
	Name = "ResolutionsForwardButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "resolutionbuttonforward",
				XPos = "75",
                YPos = "50",
                Width = "10",
                Height = "13",
				Texture1 = "avance_white.png",
                Texture2 = "avance_red.png",
                Texture3 = "avance_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript",
			}
        }
	}	
}

Entity11 = {
	Name = "ResolutionsTitle",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "resolutionstitle",
				XPos = "50",
				YPos = "40",
				Width = "45",
				Height = "9",
				Texture = "screensize.png",
				Depth = "1"
			}
		}
	}	
}

Entity12 = {
	Name = "SoundTitle",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "soundtitle",
				XPos = "50",
				YPos = "65",
				Width = "45",
				Height = "9",
				Texture = "soundvolume.png",
				Depth = "1"
			}
		}
	}	
}

Entity13 = {
	Name = "VolumeDownButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "volumebuttondown",
				XPos = "18",
                YPos = "76",
                Width = "10",
                Height = "13",
				Texture1 = "atras_white.png",
                Texture2 = "atras_red.png",
                Texture3 = "atras_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript",
			}
        }
	}	
}

Entity14 = {
	Name = "VolumeBar",
	Components = {
		{
			Name = "BAR",
			Arguments = {
                OverlayName= "volumebarbar",
				XPos = "50",
                YPos = "75.5",
                Width = "50",
                Height = "5",
                Texture = "volumebar.png",
                Depth = "3"
			}
		},
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "volumebarbackground",
				XPos = "50",
                YPos = "75",
                Width = "50",
                Height = "10",
                Texture = "volumebarbackground.png",
                Depth = "2"
			}
		}
	}	
}

Entity15 = {
	Name = "VolumeUpButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "volumebuttonup",
				XPos = "82",
                YPos = "76",
                Width = "10",
                Height = "13",
				Texture1 = "avance_white.png",
                Texture2 = "avance_red.png",
                Texture3 = "avance_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript",
			}
        }
	}	
}

Entity16 = {
	Name = "MainMenuButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "mmbutton",
				XPos = "50",
                YPos = "90",
                Width = "35",
                Height = "10",
                Texture1 = "mainmenu_white.png",
                Texture2 = "mainmenu_red.png",
                Texture3 = "mainmenu_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript"
			}
        }
	}	
}


Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13, Entity14, Entity15, Entity16}

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}