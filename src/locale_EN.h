/*
 * EMS-ESP - https://github.com/emsesp/EMS-ESP
 * Copyright 2020  Paul Derbyshire
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// common words
MAKE_PSTR_WORD(debug)
MAKE_PSTR_WORD(exit)
MAKE_PSTR_WORD(help)
MAKE_PSTR_WORD(log)
MAKE_PSTR_WORD(logout)
MAKE_PSTR_WORD(enabled)
MAKE_PSTR_WORD(disabled)
MAKE_PSTR_WORD(set)
MAKE_PSTR_WORD(show)
MAKE_PSTR_WORD(on)
MAKE_PSTR_WORD(off)
MAKE_PSTR_WORD(ON)
MAKE_PSTR_WORD(OFF)
MAKE_PSTR_WORD(su)
MAKE_PSTR_WORD(name)
MAKE_PSTR_WORD(auto)
MAKE_PSTR_WORD(scan)
MAKE_PSTR_WORD(password)
MAKE_PSTR_WORD(read)
MAKE_PSTR_WORD(version)
MAKE_PSTR_WORD(values)
MAKE_PSTR_WORD(system)
MAKE_PSTR_WORD(fetch)
MAKE_PSTR_WORD(restart)
MAKE_PSTR_WORD(format)
MAKE_PSTR_WORD(raw)
MAKE_PSTR_WORD(watch)
MAKE_PSTR_WORD(send)
MAKE_PSTR_WORD(telegram)
MAKE_PSTR_WORD(bus_id)
MAKE_PSTR_WORD(tx_mode)
MAKE_PSTR_WORD(ems)
MAKE_PSTR_WORD(devices)
MAKE_PSTR_WORD(shower)
MAKE_PSTR_WORD(mqtt)
MAKE_PSTR_WORD(emsesp)
MAKE_PSTR_WORD(connected)
MAKE_PSTR_WORD(disconnected)
MAKE_PSTR_WORD(passwd)
MAKE_PSTR_WORD(hostname)
MAKE_PSTR_WORD(wifi)
MAKE_PSTR_WORD(reconnect)
MAKE_PSTR_WORD(ssid)
MAKE_PSTR_WORD(heartbeat)
MAKE_PSTR_WORD(users)
MAKE_PSTR_WORD(master)
MAKE_PSTR_WORD(pin)
MAKE_PSTR_WORD(publish)
MAKE_PSTR_WORD(timeout)
MAKE_PSTR_WORD(board_profile)

// for commands
MAKE_PSTR_WORD(call)
MAKE_PSTR_WORD(cmd)
MAKE_PSTR_WORD(id)
MAKE_PSTR_WORD(device)
MAKE_PSTR_WORD(data)
MAKE_PSTR_WORD(command)
MAKE_PSTR_WORD(commands)
MAKE_PSTR_WORD(info)
MAKE_PSTR_WORD(settings)

// devices
MAKE_PSTR_WORD(boiler)
MAKE_PSTR_WORD(thermostat)
MAKE_PSTR_WORD(switch)
MAKE_PSTR_WORD(solar)
MAKE_PSTR_WORD(mixer)
MAKE_PSTR_WORD(gateway)
MAKE_PSTR_WORD(controller)
MAKE_PSTR_WORD(connect)
MAKE_PSTR_WORD(heatpump)
MAKE_PSTR_WORD(generic)
MAKE_PSTR_WORD(dallassensor)
MAKE_PSTR_WORD(unknown)

// format strings
MAKE_PSTR(EMSESP, "EMS-ESP")
MAKE_PSTR(master_thermostat_fmt, "Master Thermostat Device ID: %s")
MAKE_PSTR(host_fmt, "Host: %s")
MAKE_PSTR(port_fmt, "Port: %d")
MAKE_PSTR(hostname_fmt, "Hostname: %s")
MAKE_PSTR(board_profile_fmt, "Board Profile: %s")
MAKE_PSTR(mark_interval_fmt, "Mark interval: %lus")
MAKE_PSTR(wifi_ssid_fmt, "WiFi SSID: %s")
MAKE_PSTR(wifi_password_fmt, "WiFi Password: %S")
MAKE_PSTR(ethernet_option_fmt, "Ethernet option: %d")
MAKE_PSTR(tx_mode_fmt, "Tx mode: %d")
MAKE_PSTR(bus_id_fmt, "Bus ID: %02X")
MAKE_PSTR(log_level_fmt, "Log level: %s")

//strings
MAKE_PSTR(cmd_optional, "[cmd]")
MAKE_PSTR(ha_optional, "[ha]")
MAKE_PSTR(deep_optional, "[deep]")
MAKE_PSTR(watchid_optional, "[ID]")
MAKE_PSTR(watch_format_optional, "[off | on | raw | unknown]")
MAKE_PSTR(invalid_watch, "Invalid watch type")
MAKE_PSTR(data_mandatory, "\"XX XX ...\"")
MAKE_PSTR(asterisks, "********")
MAKE_PSTR(n_mandatory, "<n>")
MAKE_PSTR(id_optional, "[id|hc]")
MAKE_PSTR(data_optional, "[data]")
MAKE_PSTR(offset_optional, "[offset]")
MAKE_PSTR(typeid_mandatory, "<type ID>")
MAKE_PSTR(deviceid_mandatory, "<device ID>")
MAKE_PSTR(device_type_optional, "[device]")
MAKE_PSTR(invalid_log_level, "Invalid log level")
MAKE_PSTR(log_level_optional, "[level]")
MAKE_PSTR(name_mandatory, "<name>")
MAKE_PSTR(name_optional, "[name]")
MAKE_PSTR(new_password_prompt1, "Enter new password: ")
MAKE_PSTR(new_password_prompt2, "Retype new password: ")
MAKE_PSTR(password_prompt, "Password: ")
MAKE_PSTR(unset, "<unset>")

MAKE_PSTR_WORD(number);
MAKE_PSTR_WORD(enum);
MAKE_PSTR_WORD(boolean);
MAKE_PSTR_WORD(text);

MAKE_PSTR_WORD(2);
MAKE_PSTR_WORD(10);
MAKE_PSTR_WORD(100);
MAKE_PSTR_WORD(60);

MAKE_PSTR_LIST(div2, F_(2))
MAKE_PSTR_LIST(div10, F_(10))
MAKE_PSTR_LIST(div100, F_(100))
MAKE_PSTR_LIST(div60, F_(60))


// boiler
MAKE_PSTR_WORD(time)
MAKE_PSTR_WORD(date)
MAKE_PSTR_WORD(1x3min)
MAKE_PSTR_WORD(2x3min)
MAKE_PSTR_WORD(3x3min)
MAKE_PSTR_WORD(4x3min)
MAKE_PSTR_WORD(5x3min)
MAKE_PSTR_WORD(6x3min)
MAKE_PSTR_WORD(continuos);
MAKE_PSTR(3wayvalve, "3-way valve")
MAKE_PSTR(chargepump, "charge pump")
MAKE_PSTR_WORD(hot)
MAKE_PSTR_WORD(eco)
MAKE_PSTR_WORD(intelligent)
MAKE_PSTR_WORD(flow)
MAKE_PSTR_WORD(buffer)
MAKE_PSTR(bufferedflow, "buffered flow")
MAKE_PSTR(layeredbuffer, "layered buffer")

// boiler lists
MAKE_PSTR_LIST(enum_off_time_date, F_(off), F_(time), F_(date))
MAKE_PSTR_LIST(enum_freq, F_(off), F_(1x3min), F_(2x3min), F_(3x3min), F_(4x3min), F_(5x3min), F_(6x3min), F_(continuos))
MAKE_PSTR_LIST(enum_charge, F_(3wayvalve), F_(chargepump))
MAKE_PSTR_LIST(enum_comfort, F_(hot), F_(eco), F_(intelligent))
MAKE_PSTR_LIST(enum_flow, F_(off), F_(flow), F_(bufferedflow), F_(buffer), F_(layeredbuffer))

// thermostat
MAKE_PSTR_WORD(light)
MAKE_PSTR_WORD(medium)
MAKE_PSTR_WORD(heavy)
MAKE_PSTR_WORD(own_prog)
MAKE_PSTR(blank, "")
MAKE_PSTR_WORD(start)
MAKE_PSTR_WORD(heat)
MAKE_PSTR_WORD(hold)
MAKE_PSTR_WORD(cool)
MAKE_PSTR_WORD(end)
MAKE_PSTR_WORD(german)
MAKE_PSTR_WORD(dutch)
MAKE_PSTR_WORD(french)
MAKE_PSTR_WORD(italian)
MAKE_PSTR_WORD(high)
MAKE_PSTR_WORD(low)
MAKE_PSTR_WORD(radiator)
MAKE_PSTR_WORD(convector)
MAKE_PSTR_WORD(floor)
MAKE_PSTR_WORD(summer)
MAKE_PSTR_WORD(winter)
MAKE_PSTR_WORD(outdoor)
MAKE_PSTR_WORD(mpc)
MAKE_PSTR_WORD(room)
MAKE_PSTR_WORD(power)
MAKE_PSTR_WORD(constant)
MAKE_PSTR_WORD(simple)
MAKE_PSTR_WORD(nofrost)
MAKE_PSTR_WORD(comfort)
MAKE_PSTR_WORD(manual)
MAKE_PSTR_WORD(night)
MAKE_PSTR_WORD(day)
MAKE_PSTR_WORD(holiday)
MAKE_PSTR_WORD(reduce)
MAKE_PSTR_WORD(noreduce)
MAKE_PSTR_WORD(offset)
MAKE_PSTR_WORD(design)
MAKE_PSTR_WORD(tempauto)
MAKE_PSTR_WORD(minflow)
MAKE_PSTR_WORD(maxflow)

MAKE_PSTR_WORD(rc3x)
MAKE_PSTR_WORD(rc20)
MAKE_PSTR_WORD(error)
MAKE_PSTR(internal_temperature, "internal temperature")
MAKE_PSTR(internal_setpoint, "internal setpoint")
MAKE_PSTR(external_temperature, "external temperature")
MAKE_PSTR(burner_temperature, "burner temperature")
MAKE_PSTR(ww_temperature, "ww temperature")
MAKE_PSTR(functioning_mode, "functioning mode")
MAKE_PSTR(smoke_temperature, "smoke temperature")

// thermostat lists
MAKE_PSTR_LIST(enum_ibaMainDisplay, F_(internal_temperature), F_(internal_setpoint), F_(external_temperature), F_(burner_temperature), F_(ww_temperature), F_(functioning_mode), F_(time), F_(date), F_(smoke_temperature))
MAKE_PSTR_LIST(enum_ibaLanguage, F_(german), F_(dutch), F_(french), F_(italian))
MAKE_PSTR_LIST(enum_floordrystatus, F_(off), F_(start), F_(heat), F_(hold), F_(cool), F_(end))
MAKE_PSTR_LIST(enum_ibaBuildingType, F_(blank), F_(light), F_(medium), F_(heavy)) // RC300
MAKE_PSTR_LIST(enum_wwMode, F_(off), F_(low), F_(high), F_(auto), F_(own_prog))
MAKE_PSTR_LIST(enum_wwCircMode, F_(off), F_(on), F_(auto), F_(own_prog))
MAKE_PSTR_LIST(enum_ibaBuildingType2, F_(light), F_(medium), F_(heavy)) // RC30, RC35
MAKE_PSTR_LIST(enum_wwMode2, F_(off), F_(on), F_(auto))
MAKE_PSTR_LIST(enum_wwCircMode2, F_(off), F_(on), F_(auto))
MAKE_PSTR_LIST(enum_heatingtype, F_(off), F_(radiator), F_(convector), F_(floor))
MAKE_PSTR_LIST(enum_summermode, F_(summer), F_(auto), F_(winter))

MAKE_PSTR_LIST(enum_mode, F_(manual), F_(auto))
MAKE_PSTR_LIST(enum_mode2, F_(off), F_(manual), F_(auto))
MAKE_PSTR_LIST(enum_mode3, F_(night), F_(day), F_(auto))
MAKE_PSTR_LIST(enum_mode4, F_(blank), F_(manual), F_(auto), F_(holiday))

MAKE_PSTR_LIST(enum_modetype, F_(eco), F_(comfort))
MAKE_PSTR_LIST(enum_modetype2, F_(day))
MAKE_PSTR_LIST(enum_modetype3, F_(night), F_(day))
MAKE_PSTR_LIST(enum_modetype4, F_(blank), F_(nofrost), F_(eco), F_(heat))

MAKE_PSTR_LIST(enum_reducemode, F_(nofrost), F_(reduce), F_(room), F_(outdoor))

MAKE_PSTR_LIST(enum_controlmode, F_(off), F_(outdoor), F_(simple), F_(mpc), F_(room), F_(power), F_(constant))
MAKE_PSTR_LIST(enum_controlmode2, F_(outdoor), F_(room))
MAKE_PSTR_LIST(enum_control, F_(off), F_(rc20), F_(rc3x))

MAKE_PSTR_LIST(enum_hamode, F_(off), F_(heat), F_(auto), F_(heat), F_(off), F_(heat), F_(auto), F_(auto), F_(auto), F_(auto))

/*
 * MQTT topics and full text for values and commands
 */

// Boiler
// extra commands
MAKE_PSTR_LIST(wwtapactivated, F("wwtapactivated"))
MAKE_PSTR_LIST(reset, F("reset"))

// single mqtt topics
MAKE_PSTR(heating_active, "heating_active")
MAKE_PSTR(tapwater_active, "tapwater_active")

// mqtt, commands and text
MAKE_PSTR_LIST(heatingActive, F("heatingactive"), F("heating active"))
MAKE_PSTR_LIST(tapwaterActive, F("tapwateractive"), F("warm water active"))
MAKE_PSTR_LIST(selFlowTemp, F("selflowtemp"), F("selected flow temperature"))
MAKE_PSTR_LIST(selBurnPow, F("selburnpow"), F("burner selected max power"))
MAKE_PSTR_LIST(heatingPumpMod, F("heatingpumpmod"), F("heating pump modulation"))
MAKE_PSTR_LIST(heatingPump2Mod, F("heatingpump2mod"), F("heating pump 2 modulation"))
MAKE_PSTR_LIST(outdoorTemp, F("outdoortemp"), F("outside temperature"))
MAKE_PSTR_LIST(curFlowTemp, F("curflowtemp"), F("current flow temperature"))
MAKE_PSTR_LIST(retTemp, F("rettemp"), F("return temperature"))
MAKE_PSTR_LIST(switchTemp, F("switchtemp"), F("mixing switch temperature"))
MAKE_PSTR_LIST(sysPress, F("syspress"), F("system pressure"))
MAKE_PSTR_LIST(boilTemp, F("boiltemp"), F("max boiler temperature"))
MAKE_PSTR_LIST(exhaustTemp, F("exhausttemp"), F("exhaust temperature"))
MAKE_PSTR_LIST(burnGas, F("burngas"), F("gas"))
MAKE_PSTR_LIST(flameCurr, F("flamecurr"), F("flame current"))
MAKE_PSTR_LIST(heatingPump, F("heatingpump"), F("heating pump"))
MAKE_PSTR_LIST(fanWork, F("fanwork"), F("fan"))
MAKE_PSTR_LIST(ignWork, F("ignwork"), F("ignition"))
MAKE_PSTR_LIST(heatingActivated, F("heatingactivated"), F("heating activated"))
MAKE_PSTR_LIST(heatingTemp, F("heatingtemp"), F("heating temperature"))
MAKE_PSTR_LIST(pumpModMax, F("pumpmodmax"), F("burner pump max power"))
MAKE_PSTR_LIST(pumpModMin, F("pumpmodmin"), F("burner pump min power"))
MAKE_PSTR_LIST(pumpDelay, F("pumpdelay"), F("pump delay"))
MAKE_PSTR_LIST(burnMinPeriod, F("burnminperiod"), F("burner min period"))
MAKE_PSTR_LIST(burnMinPower, F("burnminpower"), F("burner min power"))
MAKE_PSTR_LIST(burnMaxPower, F("burnmaxpower"), F("burner max power"))
MAKE_PSTR_LIST(boilHystOn, F("boilhyston"), F("hysteresis on temperature"))
MAKE_PSTR_LIST(boilHystOff, F("boilhystoff"), F("hysteresis off temperature"))
MAKE_PSTR_LIST(setFlowTemp, F("setflowtemp"), F("set flow temperature"))
MAKE_PSTR_LIST(setBurnPow, F("setburnpow"), F("burner set power"))
MAKE_PSTR_LIST(curBurnPow, F("curburnpow"), F("burner current power"))
MAKE_PSTR_LIST(burnStarts, F("burnstarts"), F("burner # starts"))
MAKE_PSTR_LIST(burnWorkMin, F("burnworkmin"), F("total burner operating time"))
MAKE_PSTR_LIST(heatWorkMin, F("heatworkmin"), F("total heat operating time"))
MAKE_PSTR_LIST(UBAuptime, F("ubauptime"), F("total UBA operating time"))
MAKE_PSTR_LIST(lastCode, F("lastcode"), F("last error code"))
MAKE_PSTR_LIST(serviceCode, F("servicecode"), F("service code"))
MAKE_PSTR_LIST(serviceCodeNumber, F("servicecodenumber"), F("service code number"))

MAKE_PSTR_LIST(upTimeControl, F("uptimecontrol"), F("operating time total heat"))
MAKE_PSTR_LIST(upTimeCompHeating, F("uptimecompheating"), F("operating time compressor heating"))
MAKE_PSTR_LIST(upTimeCompCooling, F("uptimecompcooling"), F("operating time compressor cooling"))
MAKE_PSTR_LIST(upTimeCompWw, F("uptimecompww"), F("operating time compressor warm water"))
MAKE_PSTR_LIST(heatingStarts, F("heatingstarts"), F("# heating control starts"))
MAKE_PSTR_LIST(coolingStarts, F("coolingstarts"), F("# cooling control starts"))
MAKE_PSTR_LIST(nrgConsTotal, F("nrgconstotal"), F("total energy consumption"))
MAKE_PSTR_LIST(nrgConsCompTotal, F("nrgconscomptotal"), F("energy consumption compressor total"))
MAKE_PSTR_LIST(nrgConsCompHeating, F("nrgconscompheating"), F("energy consumption compressor heating"))
MAKE_PSTR_LIST(nrgConsCompWw, F("nrgconscompww"), F("energy consumption compressor warm water"))
MAKE_PSTR_LIST(nrgConsCompCooling, F("nrgconscompcooling"), F("energy consumption compressor cooling"))
MAKE_PSTR_LIST(nrgSuppTotal, F("nrgsupptotal"), F("total energy supplied"))
MAKE_PSTR_LIST(nrgSuppHeating, F("nrgsuppheating"), F("total energy supplied heating"))
MAKE_PSTR_LIST(nrgSuppWw, F("nrgsuppww"), F("total energy warm supplied warm water"))
MAKE_PSTR_LIST(nrgSuppCooling, F("nrgsuppcooling"), F("total energy supplied cooling"))
MAKE_PSTR_LIST(auxElecHeatNrgConsTotal, F("auxelecheatnrgconstotal"), F("auxiliary electrical heater energy consumption total"))
MAKE_PSTR_LIST(auxElecHeatNrgConsHeating, F("auxelecheatnrgconsheating"), F("auxiliary electrical heater energy consumption heating"))
MAKE_PSTR_LIST(auxElecHeatNrgConsDHW, F("auxelecheatnrgconsww"), F("auxiliary electrical heater energy consumption DHW"))
MAKE_PSTR_LIST(maintenanceMessage, F("maintenancemessage"), F("maintenance message"))
MAKE_PSTR_LIST(maintenanceDate, F("maintenancedate"), F("maintenance set date"))
MAKE_PSTR_LIST(maintenance, F("maintenance"), F("maintenance scheduled"))
MAKE_PSTR_LIST(maintenanceTime, F("maintenancetime"), F("maintenance set time"))

MAKE_PSTR_LIST(wWSelTemp, F("wwseltemp"), F("selected temperature"))
MAKE_PSTR_LIST(wWSetTemp, F("wwsettemp"), F("set temperature"))
MAKE_PSTR_LIST(wWType, F("wwtype"), F("type"))
MAKE_PSTR_LIST(wWComfort, F("wwcomfort"), F("comfort"))
MAKE_PSTR_LIST(wWFlowTempOffset, F("wwflowtempoffset"), F("flow temperature offset"))
MAKE_PSTR_LIST(wWMaxPower, F("wwmaxpower"), F("max power"))
MAKE_PSTR_LIST(wWCircPump, F("wwcircpump"), F("circulation pump available"))
MAKE_PSTR_LIST(wWChargeType, F("wwchargetype"), F("charging type"))
MAKE_PSTR_LIST(wWDisinfectionTemp, F("wwdisinfectiontemp"), F("disinfection temperature"))
MAKE_PSTR_LIST(wWCircMode, F("wwcircmode"), F("circulation pump freq"))
MAKE_PSTR_LIST(wWCirc, F("wwcirc"), F("circulation active"))
MAKE_PSTR_LIST(wWCurTemp, F("wwcurtemp"), F("current intern temperature"))
MAKE_PSTR_LIST(wWCurTemp2, F("wwcurtemp2"), F("current extern temperature"))
MAKE_PSTR_LIST(wWCurFlow, F("wwcurflow"), F("current tap water flow"))
MAKE_PSTR_LIST(wWStorageTemp1, F("wwstoragetemp1"), F("storage intern temperature"))
MAKE_PSTR_LIST(wWStorageTemp2, F("wwstoragetemp2"), F("storage extern temperature"))
MAKE_PSTR_LIST(wWActivated, F("wwactivated"), F("activated"))
MAKE_PSTR_LIST(wWOneTime, F("wwonetime"), F("one time charging"))
MAKE_PSTR_LIST(wWDisinfecting, F("wwdisinfecting"), F("disinfecting"))
MAKE_PSTR_LIST(wWCharging, F("wwcharging"), F("charging"))
MAKE_PSTR_LIST(wWRecharging, F("wwrecharging"), F("recharging"))
MAKE_PSTR_LIST(wWTempOK, F("wwtempok"), F("temperature ok"))
MAKE_PSTR_LIST(wWActive, F("wwactive"), F("active"))
MAKE_PSTR_LIST(wWHeat, F("wwHeat"), F("heating"))
MAKE_PSTR_LIST(wWSetPumpPower, F("wwsetpumppower"), F("pump set power"))
MAKE_PSTR_LIST(mixerTemp, F("mixertemp"), F("mixer temperature"))
MAKE_PSTR_LIST(tankMiddleTemp, F("tankmiddletemp"), F("tank middle temperature (TS3)"))
MAKE_PSTR_LIST(wWStarts, F("wwstarts"), F("# starts"))
MAKE_PSTR_LIST(wWStarts2, F("wwstarts2"), F("# control starts"))
MAKE_PSTR_LIST(wWWorkM, F("wwworkm"), F("active time"))

// thermostat
// extra commands, not published yet
MAKE_PSTR_LIST(remoteTemp, F("remotetemp"), F("remotetemp"))
MAKE_PSTR_LIST(switchtime, F("switchtime"), F("switchtime"))
MAKE_PSTR_LIST(temp, F("temp"), F("temporary set temperature"))

// mqtt values / commands
MAKE_PSTR_LIST(dateTime, F("datetime"), F("date/time"))
MAKE_PSTR_LIST(errorCode, F("errorcode"), F("error code"))

MAKE_PSTR_LIST(ibaMainDisplay, F("display"), F("display"))
MAKE_PSTR_LIST(ibaLanguage, F("language"), F("language"))
MAKE_PSTR_LIST(ibaClockOffset, F("clockoffset"), F("clock offset"))

MAKE_PSTR_LIST(ibaBuildingType, F("building"), F("building"))
MAKE_PSTR_LIST(ibaCalIntTemperature, F("intoffset"), F("offset internal temperature"))
MAKE_PSTR_LIST(ibaMinExtTemperature, F("minexttemp"), F("min external temperature"))
MAKE_PSTR_LIST(tempsensor1, F("inttemp1"), F("temperature sensor 1"))
MAKE_PSTR_LIST(tempsensor2, F("inttemp2"), F("temperature sensor 2"))
MAKE_PSTR_LIST(dampedoutdoortemp, F("dampedoutdoortemp"), F("damped outdoor temperature"))

MAKE_PSTR_LIST(floordrystatus, F("floordry"), F("floor drying"))
MAKE_PSTR_LIST(dampedoutdoortemp2, F("dampedoutdoortemp"), F("damped outdoor temperature"))
MAKE_PSTR_LIST(floordrytemp, F("floordrytemp"), F("floor drying temperature"))
MAKE_PSTR_LIST(wwMode, F("wwmode"), F("warm water mode"))
MAKE_PSTR_LIST(wwSetTemp, F("wwsettemp"), F("warm water set temperature"))
MAKE_PSTR_LIST(wwSetTempLow, F("wwsettemplow"), F("warm water set temperature low"))
MAKE_PSTR_LIST(wwExtra1, F("wwextra1"), F("warm water circuit 1 extra"))
MAKE_PSTR_LIST(wwExtra2, F("wwextra2"), F("warm water circuit 2 extra"))

MAKE_PSTR_LIST(setpoint_roomTemp, F("seltemp"), F("selected room temperature"))
MAKE_PSTR_LIST(curr_roomTemp, F("currtemp"), F("current room temperature"))

MAKE_PSTR_LIST(mode, F("mode"), F("mode"))
MAKE_PSTR_LIST(modetype, F("modetype"), F("mode type"))

MAKE_PSTR_LIST(daytemp, F("daytemp"), F("day temperature"))
MAKE_PSTR_LIST(heattemp, F("heattemp"), F("heat temperature"))
MAKE_PSTR_LIST(nighttemp, F("nighttemp"), F("night temperature"))
MAKE_PSTR_LIST(ecotemp, F("ecotemp"), F("eco temperature"))
MAKE_PSTR_LIST(manualtemp, F("manualtemp"), F("manual temperature"))
MAKE_PSTR_LIST(tempautotemp, F("tempautotemp"), F("temporary room temperature automode"))
MAKE_PSTR_LIST(comforttemp, F("comforttemp"), F("comfort temperature"))
MAKE_PSTR_LIST(summertemp, F("summertemp"), F("summer temperature"))
MAKE_PSTR_LIST(designtemp, F("designtemp"), F("design temperature"))
MAKE_PSTR_LIST(offsettemp, F("offsettemp"), F("offset temperature"))
MAKE_PSTR_LIST(minflowtemp, F("minflowtemp"), F("min flow temperature"))
MAKE_PSTR_LIST(maxflowtemp, F("maxflowtemp"), F("max flow temperature"))
MAKE_PSTR_LIST(roominfluence, F("roominfluence"), F("room influence"))
MAKE_PSTR_LIST(nofrosttemp, F("nofrosttemp"), F("nofrost temperature"))
MAKE_PSTR_LIST(targetflowtemp, F("targetflowtemp"), F("target flow temperature"))
MAKE_PSTR_LIST(heatingtype, F("heatingtype"), F("heating type"))
MAKE_PSTR_LIST(summersetmode, F("summersetmode"), F("summer set mode"))
MAKE_PSTR_LIST(controlmode, F("controlmode"), F("control mode"))
MAKE_PSTR_LIST(control, F("control"), F("control device"))
MAKE_PSTR_LIST(program, F("program"), F("program"))
MAKE_PSTR_LIST(pause, F("pause"), F("pause time"))
MAKE_PSTR_LIST(party, F("party"), F("party time"))

MAKE_PSTR_LIST(holidaytemp, F("holidaytemp"), F("holiday temperature"))
MAKE_PSTR_LIST(summermode, F("summermode"), F("summer mode"))
MAKE_PSTR_LIST(holidaymode, F("holidaymode"), F("holiday mode"))
MAKE_PSTR_LIST(flowtempoffset, F("flowtempoffset"), F("flow temperature offset"))
MAKE_PSTR_LIST(reducemode, F("reducemode"), F("reduce mode"))
MAKE_PSTR_LIST(noreducetemp, F("noreducetemp"), F("no reduce below temperature"))
MAKE_PSTR_LIST(remotetemp, F("remotetemp"), F("room temperature from remote"))

// heatpump
MAKE_PSTR_LIST(airHumidity, F("airhumidity"), F("relative air humidity"))
MAKE_PSTR_LIST(dewTemperature, F("dewtemperature"), F("dew point temperature"))

// mixer
MAKE_PSTR_LIST(flowSetTemp, F("flowsettemp"), F("setpoint flow temperature"))
MAKE_PSTR_LIST(flowTempHc, F("flowtemphc"), F("flow temperature in assigned hc (TC1)"))
MAKE_PSTR_LIST(pumpStatus, F("pumpstatus"), F("pump status in assigned hc (PC1)"))
MAKE_PSTR_LIST(mixerStatus, F("valvestatus"), F("mixing valve actuator in assigned hc (VC1)"))
MAKE_PSTR_LIST(flowTempVf, F("flowtempvf"), F("flow temperature in header (T0/Vf)"))

MAKE_PSTR_LIST(tempStatus, F("tempstatus"), F("temperature switch in assigned hc (MC1)"))
MAKE_PSTR_LIST(wwTemp, F("wwtemp"), F("current warm water temperature"))

// solar
MAKE_PSTR_LIST(collectorTemp, F("collectortemp"), F("collector temperature (TS1)"))
MAKE_PSTR_LIST(tankBottomTemp, F("tankbottomtemp"), F("tank bottom temperature (TS2)"))
MAKE_PSTR_LIST(tank2BottomTemp, F("tank2bottomtemp"), F("second tank bottom temperature (TS5)"))
MAKE_PSTR_LIST(heatExchangerTemp, F("heatexchangertemp"), F("heat exchanger temperature (TS6)"))

MAKE_PSTR_LIST(tankMaxTemp, F("tankmaxtemp"), F("maximum tank temperature"))
MAKE_PSTR_LIST(solarPumpModulation, F("solarpumpmodulation"), F("pump modulation (PS1)"))
MAKE_PSTR_LIST(cylinderPumpModulation, F("cylinderpumpmodulation"), F("cylinder pump modulation (PS5)"))

MAKE_PSTR_LIST(solarPump, F("solarpump"), F("pump (PS1)"))
MAKE_PSTR_LIST(valveStatus, F("valvestatus"), F("valve status"))
MAKE_PSTR_LIST(tankHeated, F("tankheated"), F("tank heated"))
MAKE_PSTR_LIST(collectorShutdown, F("collectorshutdown"), F("collector shutdown"))

MAKE_PSTR_LIST(pumpWorkTime, F("pumpWorktime"), F("pump working time"))

MAKE_PSTR_LIST(energyLastHour, F("energylasthour"), F("energy last hour"))
MAKE_PSTR_LIST(energyTotal, F("energytotal"), F("energy total"))
MAKE_PSTR_LIST(energyToday, F("energytoday"), F("energy today"))

// switch
MAKE_PSTR_LIST(activated, F("activated"), F("activated"))
MAKE_PSTR_LIST(status, F("status"), F("status"))
