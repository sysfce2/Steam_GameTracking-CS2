"GameInfo"
{
	// ********************************************************************************
	// ********************************************************************************
	// ********************************************************************************
	// DO NOT EDIT THIS FILE DIRECTLY - YOU PROBABLY WANT TO EDIT CSGO_CORE/GAMEINFO.GI
	// ********************************************************************************
	// ********************************************************************************
	// ********************************************************************************

	game 		"Counter-Strike 2"
	title 		"Counter-Strike 2"
	title_pw	"E58F8DE68190E7B2BEE88BB1EFBC9AE585A8E79083E694BBE58ABF"
	
	LayeredOnMod	csgo_imported
	SatelliteDir	csgo_gc

	FileSystem
	{
		SearchPaths
		{
			Game_LowViolence	csgo_lv // Perfect World content override

			Game	csgo
			Game	csgo_imported
			Game	csgo_core
			Game	core

			Mod		csgo
			Mod		csgo_imported
			Mod		csgo_core

			AddonRoot			csgo_addons

			LayeredGameRoot		"../game_otherplatforms/etc" [$MOBILE || $ETC_TEXTURES] //Some platforms do not support DXT compression. ETC is a well-supported alternative.
			LayeredGameRoot		"../game_otherplatforms/low_bitrate" [$MOBILE]
		}

		"UserSettingsPathID"	"USRLOCAL"
		"UserSettingsFileEx"	"cs2_"
	}

	Engine2
	{
		"DepotBuildDateTimeInTitleBar" "1"
		"InitFilterTextEarly" "1"
		"CNPW"	"CD535060BE7CF1821AFF685103743B65BF52"
		"LvConfig"	"0"
	}
	
	InputSystem
	{
		"ButtonCodeIsScanCode"		"1"
		"LockButtonCodeIsScanCode"	"1"
	}

	pulse
	{
		"pulse_enabled"					"1"
	}

	DelayedConCommands
	{
		"connect_lobby" "1"
		"connect" "1"
		"playcast" "1"
		"csgo_econ_action_preview" "1"
		"csgo_download_match" "1"
		"playdemo" "1"
		"gcconnect" "1"
	}

	ConVars
	{
		// Bandwidth control default: 300,000 Bps
		"rate"
		{
			"min"		"98304"
			"default"	"786432"
			"max"		"1000000"
		}
		"sv_minrate"	"98304"
		"sv_maxunlag"	"0.200"

		"cl_interp_ratio" "0"

		// GOTV controls
		"tv_secret_code"		"0"
		"tv_relay_secret_code"	"0"
		"tv_update_hibernation_enabled" "0"

		// Performance
		"sv_parallel_checktransmit"		"2"
		"fps_max"		"400"
		"fps_max_ui"	"120"
		"r_add_views_in_pre_output"		"1"

		// Nav fixups
		"nav_path_fixup_climb_up_segments" "1"
		"nav_gen_agent_radius_buffer" "0.75"
		"nav_gen_jump_connection_min_overlap_ratio" "0.1"

		// CSM override
		"csm_slope_scale_db_override" "3"
		
		// SSAO customization for CSGO (this is used on viewmodels)
		"r_ssao_radius"				"8"
		"r_ssao_strength"			"3"
		"r_ssao_bias"				"2.5"

		// this cache kills performance due to mutex contention
		"bone_decode_cache_enabled" "0"

		// Disable warning about oscillating panorama classes
		"panorama_classes_oscillation_warning" "0"

		// Spew warning when adding/removing classes to/from the top of the hierarchy
		"panorama_classes_perf_warning_threshold_ms" "0.75"

		// Panorama - enable render target cache
		"panorama_disable_render_target_cache" "0"

		// Panorama - enable minidumps on JS exceptions
		"panorama_js_minidumps" "1"

		// HLTV AutoDirector - disable it for now so that it doesn't interfere with our spectator camera during replays / hltv / demos
		// Needs to be revisited when we re-enable AutoDirector
		"spec_autodirector" "false"

		// Grass
		"r_grass_quality"				"3"
		"r_grass_alpha_test"			"1"
		"r_grass_density_mode"			"1"
		"r_grass_start_fade"			"3000"
		"r_grass_end_fade"				"3900"

		// Disable smooth morph normals
		"r_smooth_morph_normals"		"0"

		// Default to binding keys based on keyboard position instead of key name
		"input_button_code_is_scan_code"		"1"
		"input_button_code_is_scan_code_scd"	"1"

		// Disable Cubemap Brightening
		"lb_cubemap_normalization_max" 		"1"

		// For low quality shaders, cubemap bounds are scaled by this percentage of the fade region
		"lb_low_quality_shader_fade_region_rescale"	"0.5"
		
		// Use normal quality compression even in MET, this makes compiles in MET slower than
		// the default of fastest (0), but reduces artifacts that are confusing to artists since 
		// it's not clear that texture compression quality is different in MET than when regularly compiled.
		"rc_default_texture_encode_quality" "2"

		// The engine default of 50 for CS:GO is too high, drop down to a more sensible 
		// default value.
		"mouse_pitchyaw_sensitivity"	"3"
		"pitch_extra_mouse_sensitivity"	"1.0"

		"r_size_cull_threshold"			"0.33"
		"r_size_cull_threshold_fade"	"7.5"
		"inferno_scorch_decals" "0"

		// Steam Audio project specific convars
		"snd_musicvolume"
		{
			"version"	"2"
		}
		"snd_steamaudio_enable_custom_hrtf"					"0"
		"snd_steamaudio_enable_perspective_correction"		"1"
		"snd_steamaudio_perspective_correction_factor"		"1.0"
		"snd_steamaudio_normalize_default_hrtf_volume"		"1"
		"snd_steamaudio_default_hrtf_volume_gain"			"0.0"
		"snd_hrtf_distance_behind"							"50"
		"snd_steamaudio_max_hrtf_normalization_gain_db"		"6.0"
		"snd_steamaudio_enable_pathing"						"1"
		"snd_steamaudio_source_pathing_debug"				"0"

		"snd_event_browser_default_stack"			"csgo_mega"
		"snd_event_browser_default_vsnd_field"		"public.vsnd_files_track_01"


		// Need much tighter sound clock sync
		"snd_delay_sound_ms_max"	"40"

		//don't let people miss with speaker config settings.
		"speaker_config"
		{
			"min"		"-1"
			"default"	"-1"
			"max"		"-1"
		}

		"cl_disconnect_voice_fade"	"-1.0"
		"cl_disconnect_soundevent"	"StopSoundEvents.StopAllExceptMusic"
		
		// Physics specific customization
		"phys_use_position_based_toi_test" "1"

		// VOIP Settings.
		"voice_in_process"	"1"
		"voice_threshold"
		{
			"version" "2"
		}

		"sv_long_frame_ms" "15"
		"cq_buffer_bloat_msecs_max" "64"
	}

	// Temporarily allowing this because the particle files that are tripping this up ALSO crash PET so I 
	// cannot fix them. We'll sort this out Monday 2/13/23.
	//ResourceCompiler
	//{
	//	// See csgo_imported's gameinfo.gi
	//	"DeprecatedBehaviorVersionsAllowed"	"0"
	//}

	GMS
	{
		"Advertise"										"1"
		"RequireLoginForDedicatedServers"				"1"
	}
	
	GameInstructor
	{
		"SaveToSteamStats" "1"
	}

	SupportedLanguages
	{
		"brazilian" "3"
		"bulgarian" "3"
		"czech" "3"
		"danish" "3"
		"dutch" "3"
		"english" "3"
		"finnish" "3"
		"french" "3"
		"german" "3"
		"greek" "3"
		"hungarian" "3"
		"italian" "3"
		"indonesian" "3"
		"japanese" "3"
		"koreana" "3"
		"latam" "3"
		"norwegian" "3"
		"polish" "3"
		"portuguese" "3"
		"romanian" "3"
		"russian" "3"
		"schinese" "3"
		"spanish" "3"
		"swedish" "3"
		"tchinese" "3"
		"thai" "3"
		"turkish" "3"
		"ukrainian" "3"
		"vietnamese" "3"
	}
	
	CS2WorkshopManager
	{
		"RequiredTag" "CS2"
		"HighlightEntriesMissingRequiredTag" "1"
	}
	
	AssetBrowser
	{
		retail_filter0		"characters/models/"
		retail_filter1		"materials/decals/sprays/"
		retail_filter2		"panorama/"
		retail_filter3		"patches/"
		retail_filter4		"stickers/"
		retail_filter5		"weapons/"
		retail_filter6		"materials/models/inventory_items/"
	}

	AddonConfig	
	{
		"VpkDirectories"
		{
			"exclude"       "maps/content_examples"
			"include"       "maps"
			"include"       "cfg/maps"
			"include"       "materials"
			"include"       "models"
			"include"       "panorama/images/overheadmaps"
			"include"       "panorama/images/map_icons"
			"include"       "particles"
			"include"       "resource/overviews"
			"include"       "scripts/vscripts"
			"include"       "sounds"
			"include"       "soundevents"
			"include"       "lighting/postprocessing"
			"include"       "postprocess"
			"include"       "addoninfo.txt"
		} 
		"AllowAddonDownload" "1"
		"AllowAddonDownloadForDemos" "1"
		"DisableAddonValidationForDemos" "1"
	}
}
