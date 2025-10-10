# Hardware Setup Guide

## Components

### Required
- Arduino Portenta H7
- Portenta Vision Shield
- microSD card (8GB minimum, Class 10 recommended)
- USB-C cable
- LED lighting (ring light or desk lamp)
- White poster board or backdrop

### Optional
- Tripod or camera mount
- Lightbox
- Solar panel (for remote operation)
- Protective enclosure

## Assembly

1. **Mount Vision Shield**
   - Align Vision Shield with Portenta H7 headers
   - Press firmly until seated

2. **Insert microSD Card**
   - Format as FAT32
   - Insert into Vision Shield slot

3. **Position Camera**
   - Mount 20-30cm above work surface
   - Angle perpendicular to pearls
   - Ensure stable mounting

4. **Setup Lighting**
   - Position LED ring around lens, or
   - Use desk lamp at 45-degree angle
   - Avoid harsh shadows and hot spots
   - Consistent color temperature (5000-6500K ideal)

5. **Create Work Surface**
   - White background for contrast
   - Include calibration marker in frame
   - Keep area clean and uncluttered

## Wiring

The Portenta H7 with Vision Shield requires minimal wiring:
- USB-C for power and data transfer
- Optional: External button on GPIO pin for trigger
- Optional: Status LED on GPIO pin

## Power Options

### Lab/Office Setup
- USB-C power from computer or adapter

### Remote/Field Setup
- USB battery pack (10,000mAh+)
- Solar panel with battery controller
- 12V to USB-C converter

## Environmental Considerations

The Portenta H7 is designed for industrial use, but consider:
- Operating temperature: 0-45°C
- Humidity: Use silica gel packets in enclosure
- Salt air: Sealed enclosure recommended for coastal locations
- Dust: Regular cleaning of lens and sensor

## Testing

After assembly:
1. Power on system
2. Verify LED indicators
3. Capture test image
4. Check image quality and focus
5. Verify SD card writing
